%{
/* C++ string header, for string ops below */
#include <string>
#include <string.h>


/* Implementation of yyFlexScanner */ 
#include "mc_scanner.hpp"
#undef  YY_DECL
#define YY_DECL int MC::MC_Scanner::yylex( MC::MC_Parser::semantic_type * const lval, MC::MC_Parser::location_type *loc )

/* typedef to make the returns for the tokens shorter */
using token = MC::MC_Parser::token;

/* define yyterminate as this instead of NULL */
#define yyterminate() return( token::END )

/* msvc2010 requires that we exclude this header file. */
#define YY_NO_UNISTD_H

/* update location on matching */
#define YY_USER_ACTION loc->step(); loc->columns(yyleng);

%}

%option debug
%option nodefault
%option yyclass="MC::MC_Scanner"
%option noyywrap
%option c++

%%
%{          /** Code executed at the beginning of yylex **/
            yylval = lval;
%}


no[ \t\r\n\f]+disj[ \t\r\n\f]+[a-zA-Z_][a-zA-Z_0-9]*(')?[ \t\r\n\f]*(:|,)  {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); yyless(2); return token::NOQ;}
no[ \t\r\n\f]+[a-zA-Z_][a-zA-Z_0-9]*(')?[ \t\r\n\f]*(:|,) {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); yyless(2); return token::NOQ;}
all[ \t\r\n\f]+disj[ \t\r\n\f]+[a-zA-Z_][a-zA-Z_0-9]*(')?[ \t\r\n\f]*(:|,)  {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); yyless(3); return token::ALLQ;}
all[ \t\r\n\f]+[a-zA-Z_][a-zA-Z_0-9]*(')?[ \t\r\n\f]*(:|,) {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); yyless(3); return token::ALLQ;}
sum[ \t\r\n\f]+disj[ \t\r\n\f]+[a-zA-Z_][a-zA-Z_0-9]*(')?[ \t\r\n\f]*(:|,)  {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); yyless(3); return token::SUMQ;}
sum[ \t\r\n\f]+[a-zA-Z_][a-zA-Z_0-9]*(')?[ \t\r\n\f]*(:|,) {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); yyless(3); return token::SUMQ;}
lone[ \t\r\n\f]+disj[ \t\r\n\f]+[a-zA-Z_][a-zA-Z_0-9]*(')?[ \t\r\n\f]*(:|,)  {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); yyless(4); return token::LONEQ;}
lone[ \t\r\n\f]+[a-zA-Z_][a-zA-Z_0-9]*(')?[ \t\r\n\f]*(:|,) {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); yyless(4); return token::LONEQ;}
some[ \t\r\n\f]+disj[ \t\r\n\f]+[a-zA-Z_][a-zA-Z_0-9]*(')?[ \t\r\n\f]*(:|,)  {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); yyless(4); return token::SOMEQ;}
some[ \t\r\n\f]+[a-zA-Z_][a-zA-Z_0-9]*(')?[ \t\r\n\f]*(:|,) {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); yyless(4); return token::SOMEQ;}
one[ \t\r\n\f]+disj[ \t\r\n\f]+[a-zA-Z_][a-zA-Z_0-9]*(')?[ \t\r\n\f]*(:|,)  {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); yyless(3); return token::ONEQ;}
one[ \t\r\n\f]+[a-zA-Z_][a-zA-Z_0-9]*(')?[ \t\r\n\f]*(:|,) {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); yyless(3); return token::ONEQ;}

set[ \t\r\n\f]*"->"[ \t\r\n\f]*set {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::SET_ARROW_SET;}
set[ \t\r\n\f]*"->"[ \t\r\n\f]*one {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines();return token::SET_ARROW_ONE;}
set[ \t\r\n\f]*"->"[ \t\r\n\f]*lone {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines();return token::SET_ARROW_LONE;}
set[ \t\r\n\f]*"->"[ \t\r\n\f]*some {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::SET_ARROW_SOME;}

one[ \t\r\n\f]*"->"[ \t\r\n\f]*set {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::ONE_ARROW_SET;}
one[ \t\r\n\f]*"->"[ \t\r\n\f]*one {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines();return token::ONE_ARROW_ONE;}
one[ \t\r\n\f]*"->"[ \t\r\n\f]*lone {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines();return token::ONE_ARROW_LONE;}
one[ \t\r\n\f]*"->"[ \t\r\n\f]*some {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::ONE_ARROW_SOME;}

lone[ \t\r\n\f]*"->"[ \t\r\n\f]*set {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::LONE_ARROW_SET;}
lone[ \t\r\n\f]*"->"[ \t\r\n\f]*one {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines();return token::LONE_ARROW_ONE;}
lone[ \t\r\n\f]*"->"[ \t\r\n\f]*lone {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines();return token::LONE_ARROW_LONE;}
lone[ \t\r\n\f]*"->"[ \t\r\n\f]*some {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::LONE_ARROW_SOME;}

some[ \t\r\n\f]*"->"[ \t\r\n\f]*set {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::SOME_ARROW_SET;}
some[ \t\r\n\f]*"->"[ \t\r\n\f]*one {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines();return token::SOME_ARROW_ONE;}
some[ \t\r\n\f]*"->"[ \t\r\n\f]*lone {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines();return token::SOME_ARROW_LONE;}
some[ \t\r\n\f]*"->"[ \t\r\n\f]*some {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::SOME_ARROW_SOME;}

"->"[ \t\r\n\f]*set {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::ARROW_SET;}
"->"[ \t\r\n\f]*one {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::ARROW_ONE;}
"->"[ \t\r\n\f]*lone {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::ARROW_LONE;}
"->"[ \t\r\n\f]*some {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::ARROW_SOME;}

set[ \t\r\n\f]*"->" {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::SET_ARROW;}
one[ \t\r\n\f]*"->" {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::ONE_ARROW;}
lone[ \t\r\n\f]*"->" {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::LONE_ARROW;}
some[ \t\r\n\f]*"->" {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::SOME_ARROW;}

("!"|not)[ \t\r\n\f]*(=) {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::NOTEQUALS;}
("!"|not)[ \t\r\n\f]*(in) {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::NOTIN;}
("!"|not)[ \t\r\n\f]*(<) {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::NOTLT;}
("!"|not)[ \t\r\n\f]*(>) {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::NOTGT;}
("!"|not)[ \t\r\n\f]*(<=|=<) {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::NOTLTE;}
("!"|not)[ \t\r\n\f]*(>=) {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines(); return token::NOTGTE;}

\/\*(.|\n)*\*\/ {for (int i = 0; i < yyleng; i++) if (yytext[i] == '\n') loc->lines();}

\n          {
               // Update line number
               loc->lines();
               // return( token::NEWLINE );
            }

[ \t] ;

(\/\/|\-\-)[^\n]* ;

module return token::MODULE;
open return token::OPEN;
"as" return token::AS;
"abstract" return token::ABSTRACT;
"action" return token::ACTION;
"after" return token::AFTER;
"before" return token::BEFORE;
"loop" return token::LOOP;
"sig" return token::SIG;
"extends" return token::EXTENDS;
"disj" return token::DISJ;
"dynamic" return token::DYNAMIC;
"fact" return token::FACT;
"pred" return token::PRED;
"fun" return token::FUN;
"assert" return token::ASSERT;
"run" return token::RUN;
"check" return token::CHECK;
"for" return token::FOR;
"but" return token::BUT;
"exactly" return token::EXACTLY;
"this" return token::THIS;
"@" return token::AT;
"else" return token::ELSE;
"none" return token::NONE;
"univ" return token::UNIV;
"iden" return token::IDEN;
"let" return token::LET;
"(" return token::LPAREN;
")" return token::RPAREN;
"{" return token::LCURLY;
"}" return token::RCURLY;
"[" return token::LSQUARE;
"]" return token::RSQUARE;
"," return token::COMMA;
"|" return token::BAR;
"or"|"||" return token::OR;
"and"|"&&" return token::AND;
"iff"|"<=>" return token::IFF;
"&" return token::INTERSECTION;
"+" return token::UNION;
"-" return token::SUBTRACTION;
"++" return token::OVERRIDE;
"<:" return token::DOMAIN_R;
":>" return token::RANGE_R;
"." return token::DOT;
"->" return token::ARROW;
"no" return token::NO;
"set" return token::SET;
"lone" return token::LONE;
"some" return token::SOME;
"one" return token::ONE;
"implies"|"=>" return token::IMPLIES;
"in" return token::IN;
"=" return token::EQUALS;
"<" return token::LT;
">" return token::GT;
"<="|"=<" return token::LTE;
">=" return token::GTE;
"not"|"!" return token::NOT;
"#" return token::CARD;
"~" return token::TRANSP;
"*" return token::REFL;
"^" return token::TRAN_CLO;
":=" return token::ASSIGN;
":" return token::COLUMN;
"/" return token::FORSLASH;
";" return token::SEMICOLUMN;
"sometimes" return token::SOMETIMES;
"always" return token::ALWAYS;
"seq" return token::SEQ;

[a-zA-Z_][a-zA-Z_0-9]*('*) {
               yylval->build< std::string >( yytext );
               return( token::NAME );
               }
[0-9]+         {
               yylval->build< std::string >( yytext );
               return( token::INT );
               }

%%


