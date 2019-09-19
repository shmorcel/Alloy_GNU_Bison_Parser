%skeleton "lalr1.cc"
%require  "3.0"
%debug 
%defines 
%define api.namespace {MC}
%define api.parser.class {MC_Parser}

%code requires{
   namespace MC {
      enum tokenType {LIST, EMPTY, TEST, ALLOYMODULE, FACTHEAD, BODY, SIGHEAD, SIGBODY, MULT, SIGEXT, IMPORT, MODULEDECL, EXPR, BINOPEXPR, UNOP, UNOPEXPR, BOXJOININVOKEEXPR, THISEXPR, ATEXPR, QUALNAMEEXPR, CONSTEXPR, COMPREHENSIONEXPR, COMPAREEXPR, COMPAREEXPRINV, LETEXPR, IMPLIESEXPR, QUANTEXPR, ARROWEXPR, DECL, DISJ, CONST, QUALNAME, NAME, AT, THIS, CARD, BLOCK, ABSTRACT, SIGDECL, FACTDECL, ARROWOP, QUANT, LETDECL, PREDDECL, PREDHEAD, RECEIVER, FUNDECL, FUNHEAD, FUNBODY, ASSERTDECL, ASSERTHEAD, CMDDECL, SCOPE, TYPESCOPE, EXACTLY, RUN, CHECK, CMDNAME, NUMBER, DYNAMIC, ACTDECL, ACTHEAD, ACTBODY, ACTOR, ACTAND, ACTBEFORE, ACTAFTER, ACTINVOKATION, ACTLOOP, ACTSEQ, ACTASSIGN, NAMEDOTNAME, ACTSOME, TEMPQUANT, ACTPAREN, ACTIMPLIES, ACTLET};
      class MC_Driver;
      class MC_Scanner;
      class AstNode;
   }
   #include "ast_node.hpp"


// The following definitions is missing when %locations isn't used
# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

}

%parse-param { MC_Scanner  &scanner  }
%parse-param { MC_Driver  &driver  }

%code{
   #include <iostream>
   #include <cstdlib>
   #include <fstream>
   
   /* include for all driver functions */
   #include "mc_driver.hpp"

#undef yylex
#define yylex scanner.yylex
}

%define api.value.type variant
%define parse.assert


/* keywords */
%token MODULE OPEN AS ABSTRACT 
%token EXTENDS 
%token ASSERT RUN CHECK FOR BUT 
%token EXACTLY 

%token ACTION DYNAMIC BEFORE 
%token LOOP AFTER SOMETIMES ALWAYS

%token FUN
%token PRED
%token FACT
%token SIG

// expression precedence
%left SEMICOLUMN 
%left ASSIGN 
%token LPAREN 
%token RPAREN 
%token LCURLY 
%token RCURLY 

%token DISJ
%precedence BAR

%precedence LET ALLQ SUMQ NOQ LONEQ SOMEQ ONEQ

%left OR
%left IFF 
%right IMPLIES ELSE

%left AND
%precedence NOT   

%left IN EQUALS LT GT LTE GTE NOTIN NOTEQUALS NOTLT NOTGT NOTLTE NOTGTE

%precedence SET ONE LONE SOME NO SEQ

%left UNION SUBTRACTION
%precedence CARD

%left OVERRIDE  
%left INTERSECTION 

%right SET_ARROW_SET ONE_ARROW_SET LONE_ARROW_SET SOME_ARROW_SET SET_ARROW_ONE ONE_ARROW_ONE LONE_ARROW_ONE SOME_ARROW_ONE SET_ARROW_LONE ONE_ARROW_LONE LONE_ARROW_LONE SOME_ARROW_LONE SET_ARROW_SOME ONE_ARROW_SOME LONE_ARROW_SOME SOME_ARROW_SOME SET_ARROW ONE_ARROW LONE_ARROW SOME_ARROW ARROW_SET ARROW_ONE ARROW_LONE ARROW_SOME ARROW 

%precedence ARROW_PREC

%left RANGE_R
%left DOMAIN_R 

%left LSQUARE RSQUARE
%precedence BOX

%left DOT
%precedence TRANSP REFL TRAN_CLO 
%token THIS AT
%token FORSLASH
%token <std::string>  NAME
%token COLUMN 
%token NONE UNIV IDEN 
%token <std::string>  INT

%token COMMA
%precedence UNARY_PREC
%precedence MULTORNO


%start alloyModule

// special case

%precedence "quant_or_quantification"


%token               END    0     "end of file"
%token               NEWLINE
 
%locations

%glr-parser
/* With GLR parsers, both kinds of conflicts, shift/reduce and reduce/reduce are routine; otherwise, there would
be no need to use GLR parsing. Therefore, it is also possible to specify an expected number of reduce/reduce
conflicts in GLR parsers */
// %expect-rr 68
// %expect 9
%%

%type  <AstNode>  alloyModule;
alloyModule
  //: exprStar {$$.add_child($1); $$.setup(TEST, @$, "exprTest");$$.remove_empty(); driver.set_tree_head($$);}
  : maybeModuleDecl importStar paragraphStar {$$.add_child($1); $$.add_child($2); $$.add_child($3); $$.setup(ALLOYMODULE, @$, "[moduleDecl] import* paragraph*"); $$.remove_empty(); driver.set_tree_head($$);}
  ;

%type <AstNode> paragraphStar;
paragraphStar
  : %empty {$$.set_type(EMPTY);}
  | paragraphPlus {$$ = $1; $$.set_data("paragraph*");}
  ;

%type <AstNode> paragraphPlus;
paragraphPlus
  : paragraphPlus_ {$$ = $1; $$.flatten_tree();}
  ;

%type <AstNode> paragraphPlus_;
paragraphPlus_
  : paragraph {$$.add_child($1); $$.setup(LIST, @$, "paragraph+");}
  | paragraph paragraphPlus_ {$$.add_child($1); $$.add_child($2); $$.setup(LIST, @$, "paragraph+");}
  ;

%type <AstNode> paragraph;
paragraph
  : sigDecl {$$ = $1;} 
  | factDecl {$$ = $1;}
  | predDecl {$$ = $1;}
  | funDecl {$$ = $1;}
  | assertDecl {$$ = $1;}
  | cmdDecl {$$ = $1;}
  | actDecl {$$ = $1;}
  ;

%type<AstNode> tempQuant;
tempQuant
  : expr {$$.add_child($1); $$.setup(TEMPQUANT, @$, "expr");}
  | SOMETIMES BAR act {$$.add_child($3); $$.setup(TEMPQUANT, @$, "sometimes | act");}
  | ALWAYS BAR act {$$.add_child($3); $$.setup(TEMPQUANT, @$, "always | act");}
  ;

%type <AstNode> blockOrBarTempQuant;
blockOrBarTempQuant
  : BAR tempQuant {$$.add_child($2); $$.setup(QUANTEXPR, @$, "| tempQuant");}
  | LCURLY tempQuant RCURLY {$$.add_child($2); $$.setup(QUANTEXPR, @$, "{ tempQuant }");}
  ;

%type <AstNode> actDecl;
actDecl
  : actHead actBody {$$.add_child($1); $$.add_child($2); $$.setup(ACTDECL, @$, "actDecl");}
  ;

%type <AstNode> actHead;
actHead
  : ACTION name maybeParaDecls {$$.add_child($2); $$.add_child($3); $$.setup(ACTHEAD, @$, "head");}
  ;

%type <AstNode> actBody;
actBody
  : LCURLY act RCURLY {$$.add_child($2); $$.setup(ACTBODY, @$, "body");}
  ;


%precedence actions;
%type <AstNode> act;
act
  : LPAREN act RPAREN {$$.add_child($2); $$.setup(ACTPAREN, @$, "( act )");} %prec actions
  | LET letDeclCommaPlus BAR act {$$.add_child($2); $$.add_child($4); $$.setup(ACTLET, @$, "let expr,+ | act");}%prec actions
  | act OR act {$$.add_child($1); $$.add_child($3); $$.setup(ACTOR, @$, "act || act");} %prec actions
  | act AND act {$$.add_child($1); $$.add_child($3); $$.setup(ACTAND, @$, "act && act");} %prec actions
  | act IMPLIES act {$$.add_child($1); $$.add_child($3); $$.setup(ACTIMPLIES, @$, "act => act");} %prec actions
  | SOME declCommaPlus BAR act {$$.add_child($2); $$.add_child($4); $$.setup(ACTSOME, @$, "some decl,+ | act");} %prec actions
  | AFTER expr {$$.add_child($2); $$.setup(ACTAFTER, @$, "after expr");} %prec actions
  | BEFORE expr {$$.add_child($2); $$.setup(ACTBEFORE, @$, "before expr");} %prec actions
  | name LSQUARE exprCommaStar RSQUARE {$$.add_child($1); $$.add_child($3); $$.setup(ACTINVOKATION, @$, "name[expr,*]");} %prec actions
  | LOOP LCURLY act RCURLY {$$.add_child($3); $$.setup(ACTLOOP, @$, "loop { act }");} %prec actions
  | act SEMICOLUMN act {$$.add_child($1); $$.add_child($3); $$.setup(ACTSEQ, @$, "act ; act");} %prec actions
  | nameDotNameCommaPlus ASSIGN exprCommaPlus {$$.add_child($1); $$.add_child($3); $$.setup(ACTASSIGN, @$, "name.name,+ := expr,+");} %prec actions
  ;


%type<AstNode> nameDotNameCommaPlus;
nameDotNameCommaPlus
  : nameDotNameCommaPlus_ {$$ = $1; $$.flatten_tree();}
  ;

%type<AstNode> nameDotNameCommaPlus_;
nameDotNameCommaPlus_
  : nameDotName {$$.add_child($1); $$.setup(LIST, @$, "name.name,+");}
  | nameDotName COMMA nameDotNameCommaPlus_ {$$.add_child($1); $$.add_child($3); $$.setup(LIST, @$, "name.name,+");} 
  ;

%type<AstNode> nameDotName;
nameDotName
  : name DOT name {$$.add_child($1); $$.add_child($3); $$.setup(NAMEDOTNAME, @$, "name.name");}
  ;

%type <AstNode> cmdDecl;
cmdDecl
  : maybeNameColumn runOrCheck maybeQualnameOrBlock maybeScope {$$.add_child($1); $$.add_child($2); $$.add_child($3); $$.add_child($4); $$.setup(CMDDECL, @$, "cmdDecl");}
  ;

%type <AstNode> scope;
scope
  : FOR number maybeButTypeScopeCommaPlus {$$.add_child($2); $$.add_child($3); $$.setup(SCOPE, @$, "for number [but typescope,+]");}
  | FOR typeScopeCommaPlus {$$.add_child($2); $$.setup(SCOPE, @$, "for typescope,+");}
  ;

%type <AstNode> maybeButTypeScopeCommaPlus;
maybeButTypeScopeCommaPlus
  : %empty {$$.set_type(EMPTY);}
  | BUT typeScopeCommaPlus {$$ = $2;}
  ;

%type <AstNode> typeScopeCommaPlus;
typeScopeCommaPlus
  : typeScopeCommaPlus_ {$$ = $1; $$.flatten_tree();}
  ;

%type <AstNode> typeScopeCommaPlus_;
typeScopeCommaPlus_
  : typeScope {$$.add_child($1); $$.setup(LIST, @$, "typescope,+");}
  | typeScope COMMA typeScopeCommaPlus_ {$$.add_child($1); $$.add_child($3); $$.setup(LIST, @$, "typescope,+");}
  ;

%type <AstNode> typeScope;
typeScope
  : exactly number qualname {$$.add_child($1); $$.add_child($2); $$.add_child($3); $$.setup(TYPESCOPE, @$, "typescope");}
  | number qualname {$$.add_child($1); $$.add_child($2);  $$.setup(TYPESCOPE, @$, "typescope");}
  ;

%type <AstNode> exactly;
exactly
  : EXACTLY {$$.setup(EXACTLY, @$, "exactly");}
  ;

%type <AstNode> maybeScope;
maybeScope
  : %empty {$$.set_type(EMPTY);}
  | scope {$$ = $1;}
  ;

%type <AstNode> maybeQualnameOrBlock;
maybeQualnameOrBlock
  : %empty {$$.set_type(EMPTY);}
  | qualnameOrBlock {$$ = $1;}
  ;

%type <AstNode>  qualnameOrBlock;
qualnameOrBlock
  : qualname {$$ = $1;}
  | block {$$ = $1;}
  | LCURLY tempQuant RCURLY {$$ = $2;}
  ;

%type <AstNode> runOrCheck;
runOrCheck
  : RUN {$$.setup(RUN, @$, "run");}
  | CHECK {$$.setup(CHECK, @$, "check");}
  ;

%type <AstNode> maybeNameColumn;
maybeNameColumn
  : %empty {$$.set_type(EMPTY);}
  | name COLUMN {$$.add_child($1); $$.setup(CMDNAME, @$, "name :");}
  ;


%type <AstNode> assertDecl;
assertDecl
  : assertHead body {$$.add_child($1); $$.add_child($2); $$.setup(ASSERTDECL, @$, "assertDecl");}
  ;

%type <AstNode> assertHead;
assertHead
  : ASSERT maybeName {$$.add_child($2); $$.setup(ASSERTHEAD, @$, "head");}
  ;


%type <AstNode> funDecl;
funDecl
  : funHead funBody {$$.add_child($1); $$.add_child($2); $$.setup(FUNDECL, @$, "funDecl");}
  ;

%type <AstNode> funHead;
funHead
  : FUN maybeReceiver name maybeParaDecls COLUMN expr {$$.add_child($2); $$.add_child($3); $$.add_child($4); $$.add_child($6); $$.setup(FUNHEAD, @$, "head");}
  | FUN name maybeParaDecls COLUMN expr {$$.add_child($2); $$.add_child($3); $$.add_child($5); $$.setup(FUNHEAD, @$, "head");}
  ;

%type <AstNode> funBody;
funBody
  : LCURLY expr RCURLY {$$.add_child($2); $$.setup(FUNBODY, @$, "body");}
  ;

%type <AstNode> predDecl;
predDecl
  : predHead body {$$.add_child($1); $$.add_child($2); $$.setup(PREDDECL, @$, "predDecl");}
  ;

%type <AstNode> predHead;
predHead
  : PRED maybeReceiver name maybeParaDecls {$$.add_child($2); $$.add_child($3); $$.add_child($4); $$.setup(PREDHEAD, @$, "head");}
  | PRED name maybeParaDecls {$$.add_child($2); $$.add_child($3); $$.setup(PREDHEAD, @$, "head");}
  ;

%type <AstNode> maybeReceiver;
maybeReceiver
  : %empty {$$.set_type(EMPTY);}
  | qualname DOT {$$.add_child($1); $$.setup(RECEIVER, @$, "qualname .");}
  ;

%type <AstNode> maybeParaDecls;
maybeParaDecls
  : %empty {$$.set_type(EMPTY);}
  | paraDecls {$$ = $1;}
  ;

%type <AstNode> paraDecls;
paraDecls
  : LPAREN declCommaStar RPAREN {$$ = $2; $$.set_data("paraDecls");}
  | LSQUARE declCommaStar RSQUARE {$$ = $2; $$.set_data("paraDecls");}
  ;


%type <AstNode> factDecl;
factDecl
  : factHead body {$$.add_child($1); $$.add_child($2); $$.setup(FACTDECL, @$, "factDecl");}
  ;

%type <AstNode> factHead;
factHead
  : FACT maybeName {$$.add_child($2); $$.setup(FACTHEAD, @$, "head");}
  ;

%type <AstNode> body;
body
  : block {$$.add_child($1); $$.setup(BODY, @$, "body");}
  | LCURLY tempQuant RCURLY {$$.add_child($2); $$.setup(BODY, @$, "body");}
  ;

%type <AstNode> maybeName;
maybeName
  : %empty {$$.set_type(EMPTY);}
  | name {$$ = $1;}
  ;

%type <AstNode> sigDecl;
sigDecl
  : sigHead sigBody  { $$.add_child($1); $$.add_child($2); $$.setup(SIGDECL, @$, "sigDecl");}
  ;

%type <AstNode> sigHead;
sigHead
  : maybeAbstract maybeMult SIG nameCommaPlus maybeSigExt {$$.add_child($1); $$.add_child($2); $$.add_child($4); $$.add_child($5); $$.setup(SIGHEAD, @$, "head");}
  ;

%type <AstNode> sigBody;
sigBody
  : LCURLY declCommaStar RCURLY maybeBlock {$$.add_child($2); $$.add_child($4); $$.setup(SIGBODY, @$, "body");}
  | LCURLY declCommaStar RCURLY maybeTempQuantBlock {$$.add_child($2); $$.add_child($4); $$.setup(SIGBODY, @$, "body");}
  ;

%type<AstNode> maybeTempQuantBlock;
maybeTempQuantBlock
  : %empty {$$.set_type(EMPTY);}
  | LCURLY tempQuant RCURLY {$$ = $2;}
  ;

%type <AstNode> maybeBlock;
maybeBlock
  : %empty {$$.set_type(EMPTY);}
  | block {$$ = $1;}
  ;

%type <AstNode> declCommaStar;
declCommaStar
  : %empty {$$.set_type(EMPTY);}
  | declCommaPlus {$$ = $1; $$.set_data("decl,*");}
  ;

%type <AstNode> maybeSigExt;
maybeSigExt
  : %empty {$$.set_type(EMPTY);}
  | sigExt {$$ = $1;}
  ;

%type <AstNode> maybeMult;
maybeMult
  : %empty {$$.set_type(EMPTY);}
  | mult {$$.add_child($1); $$.setup(MULT, @$, "mult");}
  ;

%type <AstNode> maybeAbstract;
maybeAbstract
  : %empty {$$.set_type(EMPTY);}
  | ABSTRACT {$$.setup(ABSTRACT, @$, "abstract");}
  ;

%type <AstNode> sigExt;
sigExt
  : IN qualnamePlusPlus {$$.add_child($2); $$.setup(SIGEXT, @$, "in");}
  | EXTENDS qualname {$$.add_child($2); $$.setup(SIGEXT, @$, "extends");}
  ;
  
%type <AstNode> qualnamePlusPlus;
qualnamePlusPlus
  : qualnamePlusPlus_ {$$ = $1; $$.flatten_tree();}
  ;

%type <AstNode> qualnamePlusPlus_;
qualnamePlusPlus_
  : qualname {$$.add_child($1); $$.setup(LIST, @$, "qualname (+ qualname)*");}
  | qualname UNION qualnamePlusPlus_ {$$.add_child($1); $$.add_child($3); $$.setup(LIST, @$, "qualname (+ qualname)*");}
  ;

%type <AstNode> importStar;
importStar
  : %empty {$$.set_type(EMPTY);}
  | importPlus {$$ = $1; $$.set_data("import*");}
  ;

%type <AstNode> importPlus;
importPlus
  : importPlus_ {$$ = $1; $$.flatten_tree();}
  ;

%type <AstNode> importPlus_;
importPlus_
  : import {$$.add_child($1); $$.setup(LIST, @$, "import+");}
  | import importPlus_ {$$.add_child($1); $$.add_child($2); $$.setup(LIST, @$, "import+");}
  ;

%type <AstNode> import;
import
  : OPEN qualname {$$.add_child($2); $$.setup(IMPORT, @$, "import");}
  | OPEN qualname AS name {$$.add_child($2); $$.add_child($4); $$.setup(IMPORT, @$, "import");}
  | OPEN qualname LSQUARE qualnameCommaPlus RSQUARE {$$.add_child($2); $$.add_child($4); $$.setup(IMPORT, @$, "import");}
  | OPEN qualname LSQUARE qualnameCommaPlus RSQUARE AS name {$$.add_child($2); $$.add_child($4); $$.add_child($7); $$.setup(IMPORT, @$, "import");}
  ;

%type <AstNode> maybeModuleDecl;
maybeModuleDecl
  : %empty {$$.set_type(EMPTY);}
  | moduleDecl {$$ = $1;}
  ;

%type <AstNode> moduleDecl;
moduleDecl
  : MODULE qualname {$$.add_child($2); $$.setup(MODULEDECL, @$, "moduleDecl");}
  | MODULE qualname LSQUARE nameCommaPlus RSQUARE {$$.add_child($2); $$.add_child($4); $$.setup(MODULEDECL, @$, "moduleDecl");}
  ;

%type <AstNode> qualnameCommaPlus;
qualnameCommaPlus
  : qualnameCommaPlus_ {$$ = $1; $$.flatten_tree();}
  ;

%type <AstNode> qualnameCommaPlus_;
qualnameCommaPlus_
  : qualname {$$.add_child($1); $$.setup(LIST, @$, "qualname,+");}
  | qualname COMMA qualnameCommaPlus_ {$$.add_child($1); $$.add_child($3); $$.setup(LIST, @$, "qualname,+");}
  ;

// expression rules
%precedence EXPRESSION;
%type  <AstNode>  expr;
expr 
  : letExpr {$$ = $1;}
  | comprehensionExpr {$$ = $1;}
  | block {$$ = $1;}
  | qualname {$$ = $1;$$.set_type(QUALNAMEEXPR);}
  | AT name {$$.add_child($2); $$.setup(ATEXPR, @$, "@");}
  | LPAREN expr RPAREN {$$.add_child($2); $$.setup(EXPR, @$, "()");}
  | INT {$$.setup(CONST, @$, $1);} 
  | SUBTRACTION INT {$$.setup(CONST, @$, "- " + $2);} 
  | NONE {$$.setup(CONST, @$, "none");}
  | UNIV {$$.setup(CONST, @$, "univ");}
  | IDEN {$$.setup(CONST, @$, "iden");}
  | THIS {$$.setup(THISEXPR, @$, "this");}
  | multNoSumAllQ declCommaPlus blockOrBar {$$.add_child($1); $$.add_child($2); $$.add_child($3); $$.setup(QUANTEXPR, @$, "quant decl,+ blockOrBar");} 
  | expr OR expr {$$.add_child($1); $$.add_child($3); $$.setup(BINOPEXPR, @$, "||");}
  | expr IFF expr {$$.add_child($1); $$.add_child($3); $$.setup(BINOPEXPR, @$, "<=>");}
  | impliesExpr {$$ = $1;}
  | expr AND expr {$$.add_child($1);$$.add_child($3); $$.setup(BINOPEXPR, @$, "&&");}
  | NOT expr {$$.add_child($2); $$.setup(UNOP, @$, "!");} %prec UNARY_PREC
  | compareExpr {$$ = $1;}
  | multOrNoOrSetOrSeq expr {$$.add_child($2); $$.setup(UNOPEXPR, @$, $1.get_data() + " expr");}
  | expr SUBTRACTION expr {$$.add_child($1); $$.add_child($3); $$.setup(BINOPEXPR, @$, "-");} 
  | expr UNION expr {$$.add_child($1); $$.add_child($3); $$.setup(BINOPEXPR, @$, "+");}
  | CARD expr {$$.add_child($2); $$.setup(UNOPEXPR, @$, "#");}
  | expr OVERRIDE expr {$$.add_child($1); $$.add_child($3); $$.setup(BINOPEXPR, @$, "++");}
  | expr INTERSECTION expr {$$.add_child($1); $$.add_child($3); $$.setup(BINOPEXPR, @$, "&");}
  | expr arrowOp expr {$$.add_child($1); $$.add_child($2); $$.add_child($3); $$.setup(ARROWEXPR, @$, "expr arrowOp expr");}
  | expr RANGE_R expr {$$.add_child($1); $$.add_child($3); $$.setup(BINOPEXPR, @$, ":>");}
  | expr DOMAIN_R expr {$$.add_child($1); $$.add_child($3); $$.setup(BINOPEXPR, @$, "<:");}
  | expr LSQUARE exprCommaStar RSQUARE {$$.add_child($1); $$.add_child($3); $$.setup(BOXJOININVOKEEXPR, @$, "expr [expr,*]");}
  | expr DOT expr {$$.add_child($1); $$.add_child($3); $$.setup(BINOPEXPR, @$, ".");} %prec BOX
  | transposeReflexiveTransitive expr {$$.add_child($2); $$.setup(UNOPEXPR, @$, $1.get_data());} %prec UNARY_PREC
  ;

%type <AstNode> multNoSumAllQ;
multNoSumAllQ
  : ALLQ {$$.setup(QUANT, @$, "all");}
  | SUMQ {$$.setup(QUANT, @$, "sum");}
  | NOQ {$$.setup(QUANT, @$, "no");}
  | LONEQ {$$.setup(QUANT, @$, "lone");}
  | SOMEQ {$$.setup(QUANT, @$, "some");}
  | ONEQ  {$$.setup(QUANT, @$, "one");}
  ;

%type <AstNode> multOrNoOrSetOrSeq;
multOrNoOrSetOrSeq
  : mult {$$ = $1; $$.set_type(UNOP);}
  | NO {$$.setup(UNOP, @$, "no");}
  | SET {$$.setup(UNOP, @$, "set");}
  | SEQ {$$.setup(UNOP, @$, "seq");}
  ;

%type <AstNode> blockOrBar;
blockOrBar
  : block {$$ = $1;}
  | bar {$$ = $1;}
  ;


%type <AstNode> comprehensionExpr;
comprehensionExpr
  : LCURLY declCommaPlus block RCURLY {$$.add_child($2); $$.add_child($3); $$.setup(COMPREHENSIONEXPR, @$, "{decl,+ {expr*}}");}
  | LCURLY declCommaPlus bar RCURLY {$$.add_child($2); $$.add_child($3); $$.setup(COMPREHENSIONEXPR, @$, "{decl,+ | expr}");}
  ;

%type <AstNode> compareExpr;
compareExpr 
// comparison operators disambiguated
  : expr NOTGTE expr {$$.add_child($1); $$.add_child($3); $$.setup(COMPAREEXPRINV, @$, "! >=");}
  | expr NOTLTE expr {$$.add_child($1); $$.add_child($3); $$.setup(COMPAREEXPRINV, @$, "! <=");}
  | expr NOTGT expr {$$.add_child($1); $$.add_child($3); $$.setup(COMPAREEXPRINV, @$, "! >");}
  | expr NOTLT expr {$$.add_child($1); $$.add_child($3); $$.setup(COMPAREEXPRINV, @$, "! <");}
  | expr NOTEQUALS expr {$$.add_child($1); $$.add_child($3); $$.setup(COMPAREEXPRINV, @$, "! =");}
  | expr NOTIN expr {$$.add_child($1); $$.add_child($3); $$.setup(COMPAREEXPRINV, @$, "! in");}

  | expr GTE expr {$$.add_child($1); $$.add_child($3); $$.setup(COMPAREEXPR, @$, ">=");}
  | expr LTE expr {$$.add_child($1); $$.add_child($3); $$.setup(COMPAREEXPR, @$, "<=");}
  | expr GT expr {$$.add_child($1); $$.add_child($3); $$.setup(COMPAREEXPR, @$, ">");}
  | expr LT expr {$$.add_child($1); $$.add_child($3); $$.setup(COMPAREEXPR, @$, "<");}
  | expr EQUALS expr {$$.add_child($1); $$.add_child($3); $$.setup(COMPAREEXPR, @$, "=");}
  | expr IN expr {$$.add_child($1); $$.add_child($3); $$.setup(COMPAREEXPR, @$, "in");}
  ;

%type <AstNode> letExpr;
letExpr
  : LET letDeclCommaPlus block {$$.add_child($2); $$.add_child($3); $$.setup(LETEXPR, @$, "letExpr");}
  | LET letDeclCommaPlus bar {$$.add_child($2); $$.add_child($3); $$.setup(LETEXPR, @$, "letExpr");}
  ;

%type <AstNode> impliesExpr;
impliesExpr
  : expr IMPLIES expr {$$.add_child($1);$$.add_child($3); $$.setup(BINOPEXPR, @$, "=>");}
  | expr IMPLIES expr ELSE expr {$$.add_child($1); $$.add_child($3); $$.add_child($5); $$.setup(IMPLIESEXPR, @$, "=>/else");}
  ;


%type <AstNode> arrowOp;
arrowOp
  : ARROW {$$.setup(ARROWOP, @$, "->");}

  | SET_ARROW {$$.setup(ARROWOP, @$, "set ->");}
  | ONE_ARROW {$$.setup(ARROWOP, @$, "one ->");}
  | LONE_ARROW {$$.setup(ARROWOP, @$, "lone ->");}
  | SOME_ARROW {$$.setup(ARROWOP, @$, "some ->");}

  | ARROW_SET {$$.setup(ARROWOP, @$, "-> set");}
  | ARROW_ONE {$$.setup(ARROWOP, @$, "-> one");}
  | ARROW_LONE {$$.setup(ARROWOP, @$, "-> lone");}
  | ARROW_SOME {$$.setup(ARROWOP, @$, "-> some");}

  | SET_ARROW_SET {$$.setup(ARROWOP, @$, "set -> set");}
  | ONE_ARROW_SET {$$.setup(ARROWOP, @$, "one -> set");}
  | LONE_ARROW_SET {$$.setup(ARROWOP, @$, "lone -> set");}
  | SOME_ARROW_SET {$$.setup(ARROWOP, @$, "some -> set");}

  | SET_ARROW_ONE {$$.setup(ARROWOP, @$, "set -> one");}
  | ONE_ARROW_ONE {$$.setup(ARROWOP, @$, "one -> one");}
  | LONE_ARROW_ONE {$$.setup(ARROWOP, @$, "lone -> one");}
  | SOME_ARROW_ONE {$$.setup(ARROWOP, @$, "some -> one");}

  | SET_ARROW_LONE {$$.setup(ARROWOP, @$, "set -> lone");}
  | ONE_ARROW_LONE {$$.setup(ARROWOP, @$, "one -> lone");}
  | LONE_ARROW_LONE {$$.setup(ARROWOP, @$, "lone -> lone");}
  | SOME_ARROW_LONE {$$.setup(ARROWOP, @$, "some -> lone");}

  | SET_ARROW_SOME {$$.setup(ARROWOP, @$, "set -> some");}
  | ONE_ARROW_SOME {$$.setup(ARROWOP, @$, "one -> some");}
  | LONE_ARROW_SOME {$$.setup(ARROWOP, @$, "lone -> some");}
  | SOME_ARROW_SOME {$$.setup(ARROWOP, @$, "some -> some");}
  ;


%type <AstNode> declCommaPlus;
declCommaPlus
  : declCommaPlus_ {$$ = $1; $$.flatten_tree();}

%type <AstNode> declCommaPlus_;
declCommaPlus_
  : decl {$$.add_child($1); $$.setup(LIST, @$, "decl,+");}
  | decl COMMA declCommaPlus_ {$$.add_child($1); $$.add_child($3); $$.setup(LIST, @$, "decl,+");}
  ;

%type <AstNode> decl;
decl
// disambiguated through enumeration
  : nameCommaPlus COLUMN expr {$$.add_child($1); $$.add_child($3); $$.setup(DECL, @$, "decl");}
  | nameCommaPlus COLUMN disj expr {$$.add_child($1); $$.add_child($3); $$.add_child($4); $$.setup(DECL, @$, "decl");}
  | disj nameCommaPlus COLUMN expr {$$.add_child($1); $$.add_child($2); $$.add_child($4); $$.setup(DECL, @$, "decl");}
  | disj nameCommaPlus COLUMN disj expr {$$.add_child($1); $$.add_child($2); $$.add_child($4); $$.add_child($5); $$.setup(DECL, @$, "decl");}
  | nameCommaPlus COLUMN dynamic expr {$$.add_child($1); $$.add_child($3); $$.add_child($4); $$.setup(DECL, @$, "decl");}
  | nameCommaPlus COLUMN dynamic disj expr {$$.add_child($1); $$.add_child($3); $$.add_child($4); $$.add_child($5); $$.setup(DECL, @$, "decl");}
  | disj nameCommaPlus COLUMN dynamic expr {$$.add_child($1); $$.add_child($2); $$.add_child($4); $$.add_child($5); $$.setup(DECL, @$, "decl");}
  | disj nameCommaPlus COLUMN dynamic disj expr {$$.add_child($1); $$.add_child($2); $$.add_child($4); $$.add_child($5); $$.add_child($6); $$.setup(DECL, @$, "decl");}
  ;

%type <AstNode> dynamic;
dynamic
  : DYNAMIC {$$.setup(DYNAMIC, @$, "dynamic");}
  ;

%type <AstNode> disj;
disj
  : DISJ {$$.setup(DISJ, @$, "disj");}
  ;

%type <AstNode> nameCommaPlus;
nameCommaPlus
  : nameCommaPlus_ {$$ = $1; $$.flatten_tree();}
  ;

%type <AstNode> nameCommaPlus_;
nameCommaPlus_
  : name {$$.add_child($1); $$.setup(LIST, @$, "name,+");}
  | name COMMA nameCommaPlus_ {$$.add_child($1); $$.add_child($3);  $$.setup(LIST, @$, "name,+");}
  ;

%type <AstNode> letDeclCommaPlus;
letDeclCommaPlus
  : letDeclCommaPlus_ {$$ = $1; $$.flatten_tree();}
  ;

%type <AstNode> letDeclCommaPlus_;
letDeclCommaPlus_
  : letDecl {$$.add_child($1); $$.setup(LIST, @$, "letDecl,+");}
  | letDecl COMMA letDeclCommaPlus_ {$$.add_child($1); $$.add_child($3); $$.setup(LIST, @$, "letDecl,+");} 
  ;

%type <AstNode> letDecl;
letDecl
  : name EQUALS expr {$$.add_child($1); $$.add_child($3); $$.setup(LETDECL, @$, "letDecl");}
  ;

%type <AstNode> bar;
bar
  : BAR expr {$$.add_child($2); $$.setup(BLOCK, @$, "| expr");}
  ;

%type <AstNode> block;
block
  : LCURLY exprStar RCURLY {$$.add_child($2); $$.setup(BLOCK, @$, "{expr*}");}
  ;

%type <AstNode> exprStar;
exprStar
  : %empty {$$.set_type(EMPTY);}
  | exprPlus {$$ = $1; $$.set_data("expr*");}
  ;

%type  <AstNode>  exprPlus; // causes 46 rr conflicts somehow
exprPlus
  : exprPlus_ {$$ = $1; $$.flatten_tree();}
  ;

%type  <AstNode>  exprPlus_; 
exprPlus_
  : expr {$$.add_child($1); $$.setup(LIST, @$, "expr+");}
  | expr exprPlus_ {$$.add_child($1); $$.add_child($2); $$.setup(LIST, @$, "expr+");}
  ;

%type <AstNode> mult;
mult
  : mult_string {$$.setup(MULT, @$, $1);}
  ;

%type <std::string> mult_string;
mult_string
  : LONE {$$ = std::string("lone");}
  | SOME {$$ = std::string("some");}
  | ONE {$$ = std::string("one");}
  ;

%type  <AstNode>  exprCommaStar;
exprCommaStar
  : %empty {$$.set_type(EMPTY);}
  | exprCommaPlus {$$ = $1; $$.set_data("expr,*");}
  ;

%type  <AstNode>  exprCommaPlus;
exprCommaPlus
  : exprCommaPlus_ {$$ = $1; $$.flatten_tree();}
  ;

%type  <AstNode>  exprCommaPlus_;
exprCommaPlus_
  : expr {$$.add_child($1); $$.setup(LIST, @$, "expr,+");}
  | expr COMMA exprCommaPlus_ {$$.add_child($1); $$.add_child($3); $$.setup(LIST, @$, "expr,+");}
  ;

%type <AstNode> transposeReflexiveTransitive;
transposeReflexiveTransitive
  : transposeReflexiveTransitive_string {$$.setup(UNOP, @$, $1);}

%type  <std::string>  transposeReflexiveTransitive_string;
transposeReflexiveTransitive_string
  : TRANSP {$$ = std::string("~");}
  | REFL {$$ = std::string("*");}
  | TRAN_CLO {$$ = std::string("^");}
  ;

%type <AstNode> name;
name
  : NAME {$$.setup(NAME, @$, $1);}
  ;

%type <AstNode> qualname;
qualname
  : qualname_string {$$.setup(QUALNAME, @$, $1);}
  ;

%type  <std::string>  qualname_string;
qualname_string
  : NAME {$$ = $1;}
  | NAME FORSLASH qualname_string {$$ = $1 + std::string("/") + $3;}
  | THIS FORSLASH qualname_string {$$ = std::string("this/") + $3;}
  ;


%type <AstNode> number;
number
  : INT {$$.setup(NUMBER, @$, $1);}
  ;

%%


void 
MC::MC_Parser::error( const location_type &l, const std::string &err_message )
{
   std::cerr << "Error: " << err_message << " at " << l << "\n";
}
