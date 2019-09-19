// A Bison parser, made by GNU Bison 3.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2019 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.





#include "mc_parser.tab.hh"


// Unqualified %code blocks.
#line 32 "mc_parser.yy"

   #include <iostream>
   #include <cstdlib>
   #include <fstream>
   
   /* include for all driver functions */
   #include "mc_driver.hpp"

#undef yylex
#define yylex scanner.yylex

#line 57 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 5 "mc_parser.yy"
namespace MC {
#line 152 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"


  /// Build a parser object.
  MC_Parser::MC_Parser (MC_Scanner  &scanner_yyarg, MC_Driver  &driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      scanner (scanner_yyarg),
      driver (driver_yyarg)
  {}

  MC_Parser::~MC_Parser ()
  {}

  MC_Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/

  // basic_symbol.
#if 201103L <= YY_CPLUSPLUS
  template <typename Base>
  MC_Parser::basic_symbol<Base>::basic_symbol (basic_symbol&& that)
    : Base (std::move (that))
    , value ()
    , location (std::move (that.location))
  {
    switch (this->type_get ())
    {
      case 121: // alloyModule
      case 122: // paragraphStar
      case 123: // paragraphPlus
      case 124: // paragraphPlus_
      case 125: // paragraph
      case 126: // tempQuant
      case 127: // actDecl
      case 128: // actHead
      case 129: // actBody
      case 130: // act
      case 131: // nameDotNameCommaPlus
      case 132: // nameDotNameCommaPlus_
      case 133: // nameDotName
      case 134: // cmdDecl
      case 135: // scope
      case 136: // maybeButTypeScopeCommaPlus
      case 137: // typeScopeCommaPlus
      case 138: // typeScopeCommaPlus_
      case 139: // typeScope
      case 140: // exactly
      case 141: // maybeScope
      case 142: // maybeQualnameOrBlock
      case 143: // qualnameOrBlock
      case 144: // runOrCheck
      case 145: // maybeNameColumn
      case 146: // assertDecl
      case 147: // assertHead
      case 148: // funDecl
      case 149: // funHead
      case 150: // funBody
      case 151: // predDecl
      case 152: // predHead
      case 153: // maybeReceiver
      case 154: // maybeParaDecls
      case 155: // paraDecls
      case 156: // factDecl
      case 157: // factHead
      case 158: // body
      case 159: // maybeName
      case 160: // sigDecl
      case 161: // sigHead
      case 162: // sigBody
      case 163: // maybeTempQuantBlock
      case 164: // maybeBlock
      case 165: // declCommaStar
      case 166: // maybeSigExt
      case 167: // maybeMult
      case 168: // maybeAbstract
      case 169: // sigExt
      case 170: // qualnamePlusPlus
      case 171: // qualnamePlusPlus_
      case 172: // importStar
      case 173: // importPlus
      case 174: // importPlus_
      case 175: // import
      case 176: // maybeModuleDecl
      case 177: // moduleDecl
      case 178: // qualnameCommaPlus
      case 179: // qualnameCommaPlus_
      case 180: // expr
      case 181: // multNoSumAllQ
      case 182: // multOrNoOrSetOrSeq
      case 183: // blockOrBar
      case 184: // comprehensionExpr
      case 185: // compareExpr
      case 186: // letExpr
      case 187: // impliesExpr
      case 188: // arrowOp
      case 189: // declCommaPlus
      case 190: // declCommaPlus_
      case 191: // decl
      case 192: // dynamic
      case 193: // disj
      case 194: // nameCommaPlus
      case 195: // nameCommaPlus_
      case 196: // letDeclCommaPlus
      case 197: // letDeclCommaPlus_
      case 198: // letDecl
      case 199: // bar
      case 200: // block
      case 201: // exprStar
      case 202: // exprPlus
      case 203: // exprPlus_
      case 204: // mult
      case 206: // exprCommaStar
      case 207: // exprCommaPlus
      case 208: // exprCommaPlus_
      case 209: // transposeReflexiveTransitive
      case 211: // name
      case 212: // qualname
      case 214: // number
        value.move< AstNode > (std::move (that.value));
        break;

      case 107: // NAME
      case 112: // INT
      case 205: // mult_string
      case 210: // transposeReflexiveTransitive_string
      case 213: // qualname_string
        value.move< std::string > (std::move (that.value));
        break;

      default:
        break;
    }

  }
#endif

  template <typename Base>
  MC_Parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->type_get ())
    {
      case 121: // alloyModule
      case 122: // paragraphStar
      case 123: // paragraphPlus
      case 124: // paragraphPlus_
      case 125: // paragraph
      case 126: // tempQuant
      case 127: // actDecl
      case 128: // actHead
      case 129: // actBody
      case 130: // act
      case 131: // nameDotNameCommaPlus
      case 132: // nameDotNameCommaPlus_
      case 133: // nameDotName
      case 134: // cmdDecl
      case 135: // scope
      case 136: // maybeButTypeScopeCommaPlus
      case 137: // typeScopeCommaPlus
      case 138: // typeScopeCommaPlus_
      case 139: // typeScope
      case 140: // exactly
      case 141: // maybeScope
      case 142: // maybeQualnameOrBlock
      case 143: // qualnameOrBlock
      case 144: // runOrCheck
      case 145: // maybeNameColumn
      case 146: // assertDecl
      case 147: // assertHead
      case 148: // funDecl
      case 149: // funHead
      case 150: // funBody
      case 151: // predDecl
      case 152: // predHead
      case 153: // maybeReceiver
      case 154: // maybeParaDecls
      case 155: // paraDecls
      case 156: // factDecl
      case 157: // factHead
      case 158: // body
      case 159: // maybeName
      case 160: // sigDecl
      case 161: // sigHead
      case 162: // sigBody
      case 163: // maybeTempQuantBlock
      case 164: // maybeBlock
      case 165: // declCommaStar
      case 166: // maybeSigExt
      case 167: // maybeMult
      case 168: // maybeAbstract
      case 169: // sigExt
      case 170: // qualnamePlusPlus
      case 171: // qualnamePlusPlus_
      case 172: // importStar
      case 173: // importPlus
      case 174: // importPlus_
      case 175: // import
      case 176: // maybeModuleDecl
      case 177: // moduleDecl
      case 178: // qualnameCommaPlus
      case 179: // qualnameCommaPlus_
      case 180: // expr
      case 181: // multNoSumAllQ
      case 182: // multOrNoOrSetOrSeq
      case 183: // blockOrBar
      case 184: // comprehensionExpr
      case 185: // compareExpr
      case 186: // letExpr
      case 187: // impliesExpr
      case 188: // arrowOp
      case 189: // declCommaPlus
      case 190: // declCommaPlus_
      case 191: // decl
      case 192: // dynamic
      case 193: // disj
      case 194: // nameCommaPlus
      case 195: // nameCommaPlus_
      case 196: // letDeclCommaPlus
      case 197: // letDeclCommaPlus_
      case 198: // letDecl
      case 199: // bar
      case 200: // block
      case 201: // exprStar
      case 202: // exprPlus
      case 203: // exprPlus_
      case 204: // mult
      case 206: // exprCommaStar
      case 207: // exprCommaPlus
      case 208: // exprCommaPlus_
      case 209: // transposeReflexiveTransitive
      case 211: // name
      case 212: // qualname
      case 214: // number
        value.copy< AstNode > (YY_MOVE (that.value));
        break;

      case 107: // NAME
      case 112: // INT
      case 205: // mult_string
      case 210: // transposeReflexiveTransitive_string
      case 213: // qualname_string
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }



  template <typename Base>
  bool
  MC_Parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  MC_Parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->type_get ())
    {
      case 121: // alloyModule
      case 122: // paragraphStar
      case 123: // paragraphPlus
      case 124: // paragraphPlus_
      case 125: // paragraph
      case 126: // tempQuant
      case 127: // actDecl
      case 128: // actHead
      case 129: // actBody
      case 130: // act
      case 131: // nameDotNameCommaPlus
      case 132: // nameDotNameCommaPlus_
      case 133: // nameDotName
      case 134: // cmdDecl
      case 135: // scope
      case 136: // maybeButTypeScopeCommaPlus
      case 137: // typeScopeCommaPlus
      case 138: // typeScopeCommaPlus_
      case 139: // typeScope
      case 140: // exactly
      case 141: // maybeScope
      case 142: // maybeQualnameOrBlock
      case 143: // qualnameOrBlock
      case 144: // runOrCheck
      case 145: // maybeNameColumn
      case 146: // assertDecl
      case 147: // assertHead
      case 148: // funDecl
      case 149: // funHead
      case 150: // funBody
      case 151: // predDecl
      case 152: // predHead
      case 153: // maybeReceiver
      case 154: // maybeParaDecls
      case 155: // paraDecls
      case 156: // factDecl
      case 157: // factHead
      case 158: // body
      case 159: // maybeName
      case 160: // sigDecl
      case 161: // sigHead
      case 162: // sigBody
      case 163: // maybeTempQuantBlock
      case 164: // maybeBlock
      case 165: // declCommaStar
      case 166: // maybeSigExt
      case 167: // maybeMult
      case 168: // maybeAbstract
      case 169: // sigExt
      case 170: // qualnamePlusPlus
      case 171: // qualnamePlusPlus_
      case 172: // importStar
      case 173: // importPlus
      case 174: // importPlus_
      case 175: // import
      case 176: // maybeModuleDecl
      case 177: // moduleDecl
      case 178: // qualnameCommaPlus
      case 179: // qualnameCommaPlus_
      case 180: // expr
      case 181: // multNoSumAllQ
      case 182: // multOrNoOrSetOrSeq
      case 183: // blockOrBar
      case 184: // comprehensionExpr
      case 185: // compareExpr
      case 186: // letExpr
      case 187: // impliesExpr
      case 188: // arrowOp
      case 189: // declCommaPlus
      case 190: // declCommaPlus_
      case 191: // decl
      case 192: // dynamic
      case 193: // disj
      case 194: // nameCommaPlus
      case 195: // nameCommaPlus_
      case 196: // letDeclCommaPlus
      case 197: // letDeclCommaPlus_
      case 198: // letDecl
      case 199: // bar
      case 200: // block
      case 201: // exprStar
      case 202: // exprPlus
      case 203: // exprPlus_
      case 204: // mult
      case 206: // exprCommaStar
      case 207: // exprCommaPlus
      case 208: // exprCommaPlus_
      case 209: // transposeReflexiveTransitive
      case 211: // name
      case 212: // qualname
      case 214: // number
        value.move< AstNode > (YY_MOVE (s.value));
        break;

      case 107: // NAME
      case 112: // INT
      case 205: // mult_string
      case 210: // transposeReflexiveTransitive_string
      case 213: // qualname_string
        value.move< std::string > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_type.
  MC_Parser::by_type::by_type ()
    : type (empty_symbol)
  {}

#if 201103L <= YY_CPLUSPLUS
  MC_Parser::by_type::by_type (by_type&& that)
    : type (that.type)
  {
    that.clear ();
  }
#endif

  MC_Parser::by_type::by_type (const by_type& that)
    : type (that.type)
  {}

  MC_Parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  void
  MC_Parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  void
  MC_Parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  int
  MC_Parser::by_type::type_get () const YY_NOEXCEPT
  {
    return type;
  }


  // by_state.
  MC_Parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  MC_Parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  MC_Parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  MC_Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  MC_Parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  MC_Parser::symbol_number_type
  MC_Parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  MC_Parser::stack_symbol_type::stack_symbol_type ()
  {}

  MC_Parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 121: // alloyModule
      case 122: // paragraphStar
      case 123: // paragraphPlus
      case 124: // paragraphPlus_
      case 125: // paragraph
      case 126: // tempQuant
      case 127: // actDecl
      case 128: // actHead
      case 129: // actBody
      case 130: // act
      case 131: // nameDotNameCommaPlus
      case 132: // nameDotNameCommaPlus_
      case 133: // nameDotName
      case 134: // cmdDecl
      case 135: // scope
      case 136: // maybeButTypeScopeCommaPlus
      case 137: // typeScopeCommaPlus
      case 138: // typeScopeCommaPlus_
      case 139: // typeScope
      case 140: // exactly
      case 141: // maybeScope
      case 142: // maybeQualnameOrBlock
      case 143: // qualnameOrBlock
      case 144: // runOrCheck
      case 145: // maybeNameColumn
      case 146: // assertDecl
      case 147: // assertHead
      case 148: // funDecl
      case 149: // funHead
      case 150: // funBody
      case 151: // predDecl
      case 152: // predHead
      case 153: // maybeReceiver
      case 154: // maybeParaDecls
      case 155: // paraDecls
      case 156: // factDecl
      case 157: // factHead
      case 158: // body
      case 159: // maybeName
      case 160: // sigDecl
      case 161: // sigHead
      case 162: // sigBody
      case 163: // maybeTempQuantBlock
      case 164: // maybeBlock
      case 165: // declCommaStar
      case 166: // maybeSigExt
      case 167: // maybeMult
      case 168: // maybeAbstract
      case 169: // sigExt
      case 170: // qualnamePlusPlus
      case 171: // qualnamePlusPlus_
      case 172: // importStar
      case 173: // importPlus
      case 174: // importPlus_
      case 175: // import
      case 176: // maybeModuleDecl
      case 177: // moduleDecl
      case 178: // qualnameCommaPlus
      case 179: // qualnameCommaPlus_
      case 180: // expr
      case 181: // multNoSumAllQ
      case 182: // multOrNoOrSetOrSeq
      case 183: // blockOrBar
      case 184: // comprehensionExpr
      case 185: // compareExpr
      case 186: // letExpr
      case 187: // impliesExpr
      case 188: // arrowOp
      case 189: // declCommaPlus
      case 190: // declCommaPlus_
      case 191: // decl
      case 192: // dynamic
      case 193: // disj
      case 194: // nameCommaPlus
      case 195: // nameCommaPlus_
      case 196: // letDeclCommaPlus
      case 197: // letDeclCommaPlus_
      case 198: // letDecl
      case 199: // bar
      case 200: // block
      case 201: // exprStar
      case 202: // exprPlus
      case 203: // exprPlus_
      case 204: // mult
      case 206: // exprCommaStar
      case 207: // exprCommaPlus
      case 208: // exprCommaPlus_
      case 209: // transposeReflexiveTransitive
      case 211: // name
      case 212: // qualname
      case 214: // number
        value.YY_MOVE_OR_COPY< AstNode > (YY_MOVE (that.value));
        break;

      case 107: // NAME
      case 112: // INT
      case 205: // mult_string
      case 210: // transposeReflexiveTransitive_string
      case 213: // qualname_string
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  MC_Parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 121: // alloyModule
      case 122: // paragraphStar
      case 123: // paragraphPlus
      case 124: // paragraphPlus_
      case 125: // paragraph
      case 126: // tempQuant
      case 127: // actDecl
      case 128: // actHead
      case 129: // actBody
      case 130: // act
      case 131: // nameDotNameCommaPlus
      case 132: // nameDotNameCommaPlus_
      case 133: // nameDotName
      case 134: // cmdDecl
      case 135: // scope
      case 136: // maybeButTypeScopeCommaPlus
      case 137: // typeScopeCommaPlus
      case 138: // typeScopeCommaPlus_
      case 139: // typeScope
      case 140: // exactly
      case 141: // maybeScope
      case 142: // maybeQualnameOrBlock
      case 143: // qualnameOrBlock
      case 144: // runOrCheck
      case 145: // maybeNameColumn
      case 146: // assertDecl
      case 147: // assertHead
      case 148: // funDecl
      case 149: // funHead
      case 150: // funBody
      case 151: // predDecl
      case 152: // predHead
      case 153: // maybeReceiver
      case 154: // maybeParaDecls
      case 155: // paraDecls
      case 156: // factDecl
      case 157: // factHead
      case 158: // body
      case 159: // maybeName
      case 160: // sigDecl
      case 161: // sigHead
      case 162: // sigBody
      case 163: // maybeTempQuantBlock
      case 164: // maybeBlock
      case 165: // declCommaStar
      case 166: // maybeSigExt
      case 167: // maybeMult
      case 168: // maybeAbstract
      case 169: // sigExt
      case 170: // qualnamePlusPlus
      case 171: // qualnamePlusPlus_
      case 172: // importStar
      case 173: // importPlus
      case 174: // importPlus_
      case 175: // import
      case 176: // maybeModuleDecl
      case 177: // moduleDecl
      case 178: // qualnameCommaPlus
      case 179: // qualnameCommaPlus_
      case 180: // expr
      case 181: // multNoSumAllQ
      case 182: // multOrNoOrSetOrSeq
      case 183: // blockOrBar
      case 184: // comprehensionExpr
      case 185: // compareExpr
      case 186: // letExpr
      case 187: // impliesExpr
      case 188: // arrowOp
      case 189: // declCommaPlus
      case 190: // declCommaPlus_
      case 191: // decl
      case 192: // dynamic
      case 193: // disj
      case 194: // nameCommaPlus
      case 195: // nameCommaPlus_
      case 196: // letDeclCommaPlus
      case 197: // letDeclCommaPlus_
      case 198: // letDecl
      case 199: // bar
      case 200: // block
      case 201: // exprStar
      case 202: // exprPlus
      case 203: // exprPlus_
      case 204: // mult
      case 206: // exprCommaStar
      case 207: // exprCommaPlus
      case 208: // exprCommaPlus_
      case 209: // transposeReflexiveTransitive
      case 211: // name
      case 212: // qualname
      case 214: // number
        value.move< AstNode > (YY_MOVE (that.value));
        break;

      case 107: // NAME
      case 112: // INT
      case 205: // mult_string
      case 210: // transposeReflexiveTransitive_string
      case 213: // qualname_string
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  MC_Parser::stack_symbol_type&
  MC_Parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 121: // alloyModule
      case 122: // paragraphStar
      case 123: // paragraphPlus
      case 124: // paragraphPlus_
      case 125: // paragraph
      case 126: // tempQuant
      case 127: // actDecl
      case 128: // actHead
      case 129: // actBody
      case 130: // act
      case 131: // nameDotNameCommaPlus
      case 132: // nameDotNameCommaPlus_
      case 133: // nameDotName
      case 134: // cmdDecl
      case 135: // scope
      case 136: // maybeButTypeScopeCommaPlus
      case 137: // typeScopeCommaPlus
      case 138: // typeScopeCommaPlus_
      case 139: // typeScope
      case 140: // exactly
      case 141: // maybeScope
      case 142: // maybeQualnameOrBlock
      case 143: // qualnameOrBlock
      case 144: // runOrCheck
      case 145: // maybeNameColumn
      case 146: // assertDecl
      case 147: // assertHead
      case 148: // funDecl
      case 149: // funHead
      case 150: // funBody
      case 151: // predDecl
      case 152: // predHead
      case 153: // maybeReceiver
      case 154: // maybeParaDecls
      case 155: // paraDecls
      case 156: // factDecl
      case 157: // factHead
      case 158: // body
      case 159: // maybeName
      case 160: // sigDecl
      case 161: // sigHead
      case 162: // sigBody
      case 163: // maybeTempQuantBlock
      case 164: // maybeBlock
      case 165: // declCommaStar
      case 166: // maybeSigExt
      case 167: // maybeMult
      case 168: // maybeAbstract
      case 169: // sigExt
      case 170: // qualnamePlusPlus
      case 171: // qualnamePlusPlus_
      case 172: // importStar
      case 173: // importPlus
      case 174: // importPlus_
      case 175: // import
      case 176: // maybeModuleDecl
      case 177: // moduleDecl
      case 178: // qualnameCommaPlus
      case 179: // qualnameCommaPlus_
      case 180: // expr
      case 181: // multNoSumAllQ
      case 182: // multOrNoOrSetOrSeq
      case 183: // blockOrBar
      case 184: // comprehensionExpr
      case 185: // compareExpr
      case 186: // letExpr
      case 187: // impliesExpr
      case 188: // arrowOp
      case 189: // declCommaPlus
      case 190: // declCommaPlus_
      case 191: // decl
      case 192: // dynamic
      case 193: // disj
      case 194: // nameCommaPlus
      case 195: // nameCommaPlus_
      case 196: // letDeclCommaPlus
      case 197: // letDeclCommaPlus_
      case 198: // letDecl
      case 199: // bar
      case 200: // block
      case 201: // exprStar
      case 202: // exprPlus
      case 203: // exprPlus_
      case 204: // mult
      case 206: // exprCommaStar
      case 207: // exprCommaPlus
      case 208: // exprCommaPlus_
      case 209: // transposeReflexiveTransitive
      case 211: // name
      case 212: // qualname
      case 214: // number
        value.move< AstNode > (that.value);
        break;

      case 107: // NAME
      case 112: // INT
      case 205: // mult_string
      case 210: // transposeReflexiveTransitive_string
      case 213: // qualname_string
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  MC_Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  MC_Parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  MC_Parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  MC_Parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  MC_Parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  MC_Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  MC_Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  MC_Parser::debug_level_type
  MC_Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  MC_Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  MC_Parser::state_type
  MC_Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  MC_Parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  MC_Parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  MC_Parser::operator() ()
  {
    return parse ();
  }

  int
  MC_Parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 121: // alloyModule
      case 122: // paragraphStar
      case 123: // paragraphPlus
      case 124: // paragraphPlus_
      case 125: // paragraph
      case 126: // tempQuant
      case 127: // actDecl
      case 128: // actHead
      case 129: // actBody
      case 130: // act
      case 131: // nameDotNameCommaPlus
      case 132: // nameDotNameCommaPlus_
      case 133: // nameDotName
      case 134: // cmdDecl
      case 135: // scope
      case 136: // maybeButTypeScopeCommaPlus
      case 137: // typeScopeCommaPlus
      case 138: // typeScopeCommaPlus_
      case 139: // typeScope
      case 140: // exactly
      case 141: // maybeScope
      case 142: // maybeQualnameOrBlock
      case 143: // qualnameOrBlock
      case 144: // runOrCheck
      case 145: // maybeNameColumn
      case 146: // assertDecl
      case 147: // assertHead
      case 148: // funDecl
      case 149: // funHead
      case 150: // funBody
      case 151: // predDecl
      case 152: // predHead
      case 153: // maybeReceiver
      case 154: // maybeParaDecls
      case 155: // paraDecls
      case 156: // factDecl
      case 157: // factHead
      case 158: // body
      case 159: // maybeName
      case 160: // sigDecl
      case 161: // sigHead
      case 162: // sigBody
      case 163: // maybeTempQuantBlock
      case 164: // maybeBlock
      case 165: // declCommaStar
      case 166: // maybeSigExt
      case 167: // maybeMult
      case 168: // maybeAbstract
      case 169: // sigExt
      case 170: // qualnamePlusPlus
      case 171: // qualnamePlusPlus_
      case 172: // importStar
      case 173: // importPlus
      case 174: // importPlus_
      case 175: // import
      case 176: // maybeModuleDecl
      case 177: // moduleDecl
      case 178: // qualnameCommaPlus
      case 179: // qualnameCommaPlus_
      case 180: // expr
      case 181: // multNoSumAllQ
      case 182: // multOrNoOrSetOrSeq
      case 183: // blockOrBar
      case 184: // comprehensionExpr
      case 185: // compareExpr
      case 186: // letExpr
      case 187: // impliesExpr
      case 188: // arrowOp
      case 189: // declCommaPlus
      case 190: // declCommaPlus_
      case 191: // decl
      case 192: // dynamic
      case 193: // disj
      case 194: // nameCommaPlus
      case 195: // nameCommaPlus_
      case 196: // letDeclCommaPlus
      case 197: // letDeclCommaPlus_
      case 198: // letDecl
      case 199: // bar
      case 200: // block
      case 201: // exprStar
      case 202: // exprPlus
      case 203: // exprPlus_
      case 204: // mult
      case 206: // exprCommaStar
      case 207: // exprCommaPlus
      case 208: // exprCommaPlus_
      case 209: // transposeReflexiveTransitive
      case 211: // name
      case 212: // qualname
      case 214: // number
        yylhs.value.emplace< AstNode > ();
        break;

      case 107: // NAME
      case 112: // INT
      case 205: // mult_string
      case 210: // transposeReflexiveTransitive_string
      case 213: // qualname_string
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2:
#line 139 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ALLOYMODULE, yylhs.location, "[moduleDecl] import* paragraph*"); yylhs.value.as < AstNode > ().remove_empty(); driver.set_tree_head(yylhs.value.as < AstNode > ());}
#line 1329 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 3:
#line 144 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1335 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 4:
#line 145 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().set_data("paragraph*");}
#line 1341 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 5:
#line 150 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().flatten_tree();}
#line 1347 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 6:
#line 155 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "paragraph+");}
#line 1353 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 7:
#line 156 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "paragraph+");}
#line 1359 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 8:
#line 161 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1365 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 9:
#line 162 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1371 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 10:
#line 163 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1377 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 11:
#line 164 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1383 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 12:
#line 165 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1389 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 13:
#line 166 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1395 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 14:
#line 167 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1401 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 15:
#line 172 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(TEMPQUANT, yylhs.location, "expr");}
#line 1407 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 16:
#line 173 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(TEMPQUANT, yylhs.location, "sometimes | act");}
#line 1413 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 17:
#line 174 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(TEMPQUANT, yylhs.location, "always | act");}
#line 1419 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 18:
#line 185 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTDECL, yylhs.location, "actDecl");}
#line 1425 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 19:
#line 190 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTHEAD, yylhs.location, "head");}
#line 1431 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 20:
#line 195 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTBODY, yylhs.location, "body");}
#line 1437 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 21:
#line 202 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTPAREN, yylhs.location, "( act )");}
#line 1443 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 22:
#line 203 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTLET, yylhs.location, "let expr,+ | act");}
#line 1449 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 23:
#line 204 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTOR, yylhs.location, "act || act");}
#line 1455 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 24:
#line 205 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTAND, yylhs.location, "act && act");}
#line 1461 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 25:
#line 206 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTIMPLIES, yylhs.location, "act => act");}
#line 1467 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 26:
#line 207 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTSOME, yylhs.location, "some decl,+ | act");}
#line 1473 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 27:
#line 208 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTAFTER, yylhs.location, "after expr");}
#line 1479 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 28:
#line 209 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTBEFORE, yylhs.location, "before expr");}
#line 1485 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 29:
#line 210 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTINVOKATION, yylhs.location, "name[expr,*]");}
#line 1491 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 30:
#line 211 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTLOOP, yylhs.location, "loop { act }");}
#line 1497 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 31:
#line 212 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTSEQ, yylhs.location, "act ; act");}
#line 1503 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 32:
#line 213 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ACTASSIGN, yylhs.location, "name.name,+ := expr,+");}
#line 1509 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 33:
#line 219 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().flatten_tree();}
#line 1515 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 34:
#line 224 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "name.name,+");}
#line 1521 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 35:
#line 225 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "name.name,+");}
#line 1527 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 36:
#line 230 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(NAMEDOTNAME, yylhs.location, "name.name");}
#line 1533 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 37:
#line 235 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(CMDDECL, yylhs.location, "cmdDecl");}
#line 1539 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 38:
#line 240 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(SCOPE, yylhs.location, "for number [but typescope,+]");}
#line 1545 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 39:
#line 241 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(SCOPE, yylhs.location, "for typescope,+");}
#line 1551 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 40:
#line 246 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1557 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 41:
#line 247 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1563 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 42:
#line 252 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().flatten_tree();}
#line 1569 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 43:
#line 257 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "typescope,+");}
#line 1575 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 44:
#line 258 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "typescope,+");}
#line 1581 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 45:
#line 263 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(TYPESCOPE, yylhs.location, "typescope");}
#line 1587 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 46:
#line 264 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ());  yylhs.value.as < AstNode > ().setup(TYPESCOPE, yylhs.location, "typescope");}
#line 1593 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 47:
#line 269 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(EXACTLY, yylhs.location, "exactly");}
#line 1599 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 48:
#line 274 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1605 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 49:
#line 275 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1611 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 50:
#line 280 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1617 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 51:
#line 281 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1623 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 52:
#line 286 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1629 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 53:
#line 287 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1635 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 54:
#line 288 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[1].value.as < AstNode > ();}
#line 1641 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 55:
#line 293 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(RUN, yylhs.location, "run");}
#line 1647 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 56:
#line 294 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(CHECK, yylhs.location, "check");}
#line 1653 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 57:
#line 299 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1659 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 58:
#line 300 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(CMDNAME, yylhs.location, "name :");}
#line 1665 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 59:
#line 306 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ASSERTDECL, yylhs.location, "assertDecl");}
#line 1671 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 60:
#line 311 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ASSERTHEAD, yylhs.location, "head");}
#line 1677 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 61:
#line 317 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(FUNDECL, yylhs.location, "funDecl");}
#line 1683 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 62:
#line 322 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[4].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(FUNHEAD, yylhs.location, "head");}
#line 1689 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 63:
#line 323 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(FUNHEAD, yylhs.location, "head");}
#line 1695 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 64:
#line 328 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(FUNBODY, yylhs.location, "body");}
#line 1701 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 65:
#line 333 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(PREDDECL, yylhs.location, "predDecl");}
#line 1707 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 66:
#line 338 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(PREDHEAD, yylhs.location, "head");}
#line 1713 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 67:
#line 339 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(PREDHEAD, yylhs.location, "head");}
#line 1719 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 68:
#line 344 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1725 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 69:
#line 345 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(RECEIVER, yylhs.location, "qualname .");}
#line 1731 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 70:
#line 350 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1737 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 71:
#line 351 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1743 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 72:
#line 356 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[1].value.as < AstNode > (); yylhs.value.as < AstNode > ().set_data("paraDecls");}
#line 1749 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 73:
#line 357 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[1].value.as < AstNode > (); yylhs.value.as < AstNode > ().set_data("paraDecls");}
#line 1755 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 74:
#line 363 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(FACTDECL, yylhs.location, "factDecl");}
#line 1761 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 75:
#line 368 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(FACTHEAD, yylhs.location, "head");}
#line 1767 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 76:
#line 373 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BODY, yylhs.location, "body");}
#line 1773 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 77:
#line 374 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BODY, yylhs.location, "body");}
#line 1779 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 78:
#line 379 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1785 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 79:
#line 380 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1791 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 80:
#line 385 "mc_parser.yy"
    { yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(SIGDECL, yylhs.location, "sigDecl");}
#line 1797 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 81:
#line 390 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[4].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(SIGHEAD, yylhs.location, "head");}
#line 1803 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 82:
#line 395 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(SIGBODY, yylhs.location, "body");}
#line 1809 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 83:
#line 396 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(SIGBODY, yylhs.location, "body");}
#line 1815 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 84:
#line 401 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1821 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 85:
#line 402 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[1].value.as < AstNode > ();}
#line 1827 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 86:
#line 407 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1833 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 87:
#line 408 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1839 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 88:
#line 413 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1845 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 89:
#line 414 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().set_data("decl,*");}
#line 1851 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 90:
#line 419 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1857 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 91:
#line 420 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1863 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 92:
#line 425 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1869 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 93:
#line 426 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(MULT, yylhs.location, "mult");}
#line 1875 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 94:
#line 431 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1881 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 95:
#line 432 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ABSTRACT, yylhs.location, "abstract");}
#line 1887 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 96:
#line 437 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(SIGEXT, yylhs.location, "in");}
#line 1893 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 97:
#line 438 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(SIGEXT, yylhs.location, "extends");}
#line 1899 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 98:
#line 443 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().flatten_tree();}
#line 1905 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 99:
#line 448 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "qualname (+ qualname)*");}
#line 1911 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 100:
#line 449 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "qualname (+ qualname)*");}
#line 1917 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 101:
#line 454 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1923 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 102:
#line 455 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().set_data("import*");}
#line 1929 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 103:
#line 460 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().flatten_tree();}
#line 1935 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 104:
#line 465 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "import+");}
#line 1941 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 105:
#line 466 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "import+");}
#line 1947 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 106:
#line 471 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(IMPORT, yylhs.location, "import");}
#line 1953 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 107:
#line 472 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(IMPORT, yylhs.location, "import");}
#line 1959 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 108:
#line 473 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(IMPORT, yylhs.location, "import");}
#line 1965 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 109:
#line 474 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[5].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(IMPORT, yylhs.location, "import");}
#line 1971 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 110:
#line 479 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 1977 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 111:
#line 480 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 1983 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 112:
#line 485 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(MODULEDECL, yylhs.location, "moduleDecl");}
#line 1989 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 113:
#line 486 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(MODULEDECL, yylhs.location, "moduleDecl");}
#line 1995 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 114:
#line 491 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().flatten_tree();}
#line 2001 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 115:
#line 496 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "qualname,+");}
#line 2007 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 116:
#line 497 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "qualname,+");}
#line 2013 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 117:
#line 504 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 2019 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 118:
#line 505 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 2025 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 119:
#line 506 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 2031 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 120:
#line 507 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();yylhs.value.as < AstNode > ().set_type(QUALNAMEEXPR);}
#line 2037 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 121:
#line 508 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ATEXPR, yylhs.location, "@");}
#line 2043 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 122:
#line 509 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(EXPR, yylhs.location, "()");}
#line 2049 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 123:
#line 510 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(CONST, yylhs.location, yystack_[0].value.as < std::string > ());}
#line 2055 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 124:
#line 511 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(CONST, yylhs.location, "- " + yystack_[0].value.as < std::string > ());}
#line 2061 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 125:
#line 512 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(CONST, yylhs.location, "none");}
#line 2067 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 126:
#line 513 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(CONST, yylhs.location, "univ");}
#line 2073 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 127:
#line 514 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(CONST, yylhs.location, "iden");}
#line 2079 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 128:
#line 515 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(THISEXPR, yylhs.location, "this");}
#line 2085 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 129:
#line 516 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(QUANTEXPR, yylhs.location, "quant decl,+ blockOrBar");}
#line 2091 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 130:
#line 517 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BINOPEXPR, yylhs.location, "||");}
#line 2097 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 131:
#line 518 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BINOPEXPR, yylhs.location, "<=>");}
#line 2103 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 132:
#line 519 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 2109 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 133:
#line 520 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ());yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BINOPEXPR, yylhs.location, "&&");}
#line 2115 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 134:
#line 521 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(UNOP, yylhs.location, "!");}
#line 2121 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 135:
#line 522 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 2127 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 136:
#line 523 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(UNOPEXPR, yylhs.location, yystack_[1].value.as < AstNode > ().get_data() + " expr");}
#line 2133 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 137:
#line 524 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BINOPEXPR, yylhs.location, "-");}
#line 2139 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 138:
#line 525 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BINOPEXPR, yylhs.location, "+");}
#line 2145 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 139:
#line 526 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(UNOPEXPR, yylhs.location, "#");}
#line 2151 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 140:
#line 527 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BINOPEXPR, yylhs.location, "++");}
#line 2157 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 141:
#line 528 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BINOPEXPR, yylhs.location, "&");}
#line 2163 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 142:
#line 529 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(ARROWEXPR, yylhs.location, "expr arrowOp expr");}
#line 2169 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 143:
#line 530 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BINOPEXPR, yylhs.location, ":>");}
#line 2175 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 144:
#line 531 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BINOPEXPR, yylhs.location, "<:");}
#line 2181 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 145:
#line 532 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BOXJOININVOKEEXPR, yylhs.location, "expr [expr,*]");}
#line 2187 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 146:
#line 533 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BINOPEXPR, yylhs.location, ".");}
#line 2193 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 147:
#line 534 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(UNOPEXPR, yylhs.location, yystack_[1].value.as < AstNode > ().get_data());}
#line 2199 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 148:
#line 539 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(QUANT, yylhs.location, "all");}
#line 2205 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 149:
#line 540 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(QUANT, yylhs.location, "sum");}
#line 2211 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 150:
#line 541 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(QUANT, yylhs.location, "no");}
#line 2217 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 151:
#line 542 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(QUANT, yylhs.location, "lone");}
#line 2223 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 152:
#line 543 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(QUANT, yylhs.location, "some");}
#line 2229 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 153:
#line 544 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(QUANT, yylhs.location, "one");}
#line 2235 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 154:
#line 549 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().set_type(UNOP);}
#line 2241 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 155:
#line 550 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(UNOP, yylhs.location, "no");}
#line 2247 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 156:
#line 551 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(UNOP, yylhs.location, "set");}
#line 2253 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 157:
#line 552 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(UNOP, yylhs.location, "seq");}
#line 2259 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 158:
#line 557 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 2265 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 159:
#line 558 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > ();}
#line 2271 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 160:
#line 564 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPREHENSIONEXPR, yylhs.location, "{decl,+ {expr*}}");}
#line 2277 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 161:
#line 565 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPREHENSIONEXPR, yylhs.location, "{decl,+ | expr}");}
#line 2283 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 162:
#line 571 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPAREEXPRINV, yylhs.location, "! >=");}
#line 2289 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 163:
#line 572 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPAREEXPRINV, yylhs.location, "! <=");}
#line 2295 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 164:
#line 573 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPAREEXPRINV, yylhs.location, "! >");}
#line 2301 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 165:
#line 574 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPAREEXPRINV, yylhs.location, "! <");}
#line 2307 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 166:
#line 575 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPAREEXPRINV, yylhs.location, "! =");}
#line 2313 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 167:
#line 576 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPAREEXPRINV, yylhs.location, "! in");}
#line 2319 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 168:
#line 578 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPAREEXPR, yylhs.location, ">=");}
#line 2325 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 169:
#line 579 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPAREEXPR, yylhs.location, "<=");}
#line 2331 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 170:
#line 580 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPAREEXPR, yylhs.location, ">");}
#line 2337 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 171:
#line 581 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPAREEXPR, yylhs.location, "<");}
#line 2343 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 172:
#line 582 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPAREEXPR, yylhs.location, "=");}
#line 2349 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 173:
#line 583 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(COMPAREEXPR, yylhs.location, "in");}
#line 2355 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 174:
#line 588 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LETEXPR, yylhs.location, "letExpr");}
#line 2361 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 175:
#line 589 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LETEXPR, yylhs.location, "letExpr");}
#line 2367 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 176:
#line 594 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ());yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BINOPEXPR, yylhs.location, "=>");}
#line 2373 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 177:
#line 595 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[4].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(IMPLIESEXPR, yylhs.location, "=>/else");}
#line 2379 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 178:
#line 601 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "->");}
#line 2385 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 179:
#line 603 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "set ->");}
#line 2391 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 180:
#line 604 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "one ->");}
#line 2397 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 181:
#line 605 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "lone ->");}
#line 2403 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 182:
#line 606 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "some ->");}
#line 2409 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 183:
#line 608 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "-> set");}
#line 2415 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 184:
#line 609 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "-> one");}
#line 2421 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 185:
#line 610 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "-> lone");}
#line 2427 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 186:
#line 611 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "-> some");}
#line 2433 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 187:
#line 613 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "set -> set");}
#line 2439 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 188:
#line 614 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "one -> set");}
#line 2445 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 189:
#line 615 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "lone -> set");}
#line 2451 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 190:
#line 616 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "some -> set");}
#line 2457 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 191:
#line 618 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "set -> one");}
#line 2463 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 192:
#line 619 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "one -> one");}
#line 2469 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 193:
#line 620 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "lone -> one");}
#line 2475 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 194:
#line 621 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "some -> one");}
#line 2481 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 195:
#line 623 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "set -> lone");}
#line 2487 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 196:
#line 624 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "one -> lone");}
#line 2493 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 197:
#line 625 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "lone -> lone");}
#line 2499 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 198:
#line 626 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "some -> lone");}
#line 2505 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 199:
#line 628 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "set -> some");}
#line 2511 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 200:
#line 629 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "one -> some");}
#line 2517 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 201:
#line 630 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "lone -> some");}
#line 2523 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 202:
#line 631 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(ARROWOP, yylhs.location, "some -> some");}
#line 2529 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 203:
#line 637 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().flatten_tree();}
#line 2535 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 204:
#line 641 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "decl,+");}
#line 2541 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 205:
#line 642 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "decl,+");}
#line 2547 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 206:
#line 648 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(DECL, yylhs.location, "decl");}
#line 2553 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 207:
#line 649 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(DECL, yylhs.location, "decl");}
#line 2559 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 208:
#line 650 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(DECL, yylhs.location, "decl");}
#line 2565 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 209:
#line 651 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[4].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(DECL, yylhs.location, "decl");}
#line 2571 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 210:
#line 652 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(DECL, yylhs.location, "decl");}
#line 2577 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 211:
#line 653 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[4].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(DECL, yylhs.location, "decl");}
#line 2583 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 212:
#line 654 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[4].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[3].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(DECL, yylhs.location, "decl");}
#line 2589 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 213:
#line 655 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[5].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[4].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(DECL, yylhs.location, "decl");}
#line 2595 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 214:
#line 660 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(DYNAMIC, yylhs.location, "dynamic");}
#line 2601 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 215:
#line 665 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(DISJ, yylhs.location, "disj");}
#line 2607 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 216:
#line 670 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().flatten_tree();}
#line 2613 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 217:
#line 675 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "name,+");}
#line 2619 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 218:
#line 676 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ());  yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "name,+");}
#line 2625 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 219:
#line 681 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().flatten_tree();}
#line 2631 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 220:
#line 686 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "letDecl,+");}
#line 2637 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 221:
#line 687 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "letDecl,+");}
#line 2643 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 222:
#line 692 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LETDECL, yylhs.location, "letDecl");}
#line 2649 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 223:
#line 697 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BLOCK, yylhs.location, "| expr");}
#line 2655 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 224:
#line 702 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(BLOCK, yylhs.location, "{expr*}");}
#line 2661 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 225:
#line 707 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 2667 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 226:
#line 708 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().set_data("expr*");}
#line 2673 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 227:
#line 713 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().flatten_tree();}
#line 2679 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 228:
#line 718 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "expr+");}
#line 2685 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 229:
#line 719 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[1].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "expr+");}
#line 2691 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 230:
#line 724 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(MULT, yylhs.location, yystack_[0].value.as < std::string > ());}
#line 2697 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 231:
#line 729 "mc_parser.yy"
    {yylhs.value.as < std::string > () = std::string("lone");}
#line 2703 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 232:
#line 730 "mc_parser.yy"
    {yylhs.value.as < std::string > () = std::string("some");}
#line 2709 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 233:
#line 731 "mc_parser.yy"
    {yylhs.value.as < std::string > () = std::string("one");}
#line 2715 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 234:
#line 736 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().set_type(EMPTY);}
#line 2721 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 235:
#line 737 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().set_data("expr,*");}
#line 2727 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 236:
#line 742 "mc_parser.yy"
    {yylhs.value.as < AstNode > () = yystack_[0].value.as < AstNode > (); yylhs.value.as < AstNode > ().flatten_tree();}
#line 2733 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 237:
#line 747 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "expr,+");}
#line 2739 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 238:
#line 748 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().add_child(yystack_[2].value.as < AstNode > ()); yylhs.value.as < AstNode > ().add_child(yystack_[0].value.as < AstNode > ()); yylhs.value.as < AstNode > ().setup(LIST, yylhs.location, "expr,+");}
#line 2745 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 239:
#line 753 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(UNOP, yylhs.location, yystack_[0].value.as < std::string > ());}
#line 2751 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 240:
#line 757 "mc_parser.yy"
    {yylhs.value.as < std::string > () = std::string("~");}
#line 2757 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 241:
#line 758 "mc_parser.yy"
    {yylhs.value.as < std::string > () = std::string("*");}
#line 2763 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 242:
#line 759 "mc_parser.yy"
    {yylhs.value.as < std::string > () = std::string("^");}
#line 2769 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 243:
#line 764 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(NAME, yylhs.location, yystack_[0].value.as < std::string > ());}
#line 2775 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 244:
#line 769 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(QUALNAME, yylhs.location, yystack_[0].value.as < std::string > ());}
#line 2781 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 245:
#line 774 "mc_parser.yy"
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2787 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 246:
#line 775 "mc_parser.yy"
    {yylhs.value.as < std::string > () = yystack_[2].value.as < std::string > () + std::string("/") + yystack_[0].value.as < std::string > ();}
#line 2793 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 247:
#line 776 "mc_parser.yy"
    {yylhs.value.as < std::string > () = std::string("this/") + yystack_[0].value.as < std::string > ();}
#line 2799 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;

  case 248:
#line 782 "mc_parser.yy"
    {yylhs.value.as < AstNode > ().setup(NUMBER, yylhs.location, yystack_[0].value.as < std::string > ());}
#line 2805 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"
    break;


#line 2809 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  MC_Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  MC_Parser::yysyntax_error_ (state_type, const symbol_type&) const
  {
    return YY_("syntax error");
  }


  const short MC_Parser::yypact_ninf_ = -250;

  const short MC_Parser::yytable_ninf_ = -244;

  const short
  MC_Parser::yypact_[] =
  {
      27,   -50,    37,    38,  -250,   -53,   -39,   -26,  -250,  -250,
     -50,     5,  -250,  -250,    38,   -50,   -50,   -11,     2,  -250,
     -11,   -11,   -42,   -38,   -11,  -250,  -250,  -250,  -250,   220,
    -250,    49,  -250,    75,  -250,    74,  -250,    93,  -250,    74,
    -250,    74,  -250,    96,    77,    -2,  -250,  -250,  -250,    31,
    -250,    18,   -11,   -50,  -250,  -250,     4,    -4,   -11,     4,
      33,   -11,     4,  -250,  -250,    28,  -250,  -250,  -250,   -13,
     393,  -250,  -250,   847,  -250,  -250,  -250,     7,  -250,  -250,
    -250,  -250,   115,  -250,  -250,  -250,  -250,   -11,  -250,    64,
    -250,    53,     7,     7,  -250,  -250,     4,    60,  -250,     4,
    -250,   847,   141,   847,    28,   -11,     7,   183,   146,  -250,
      65,   -25,   393,   166,  -250,  -250,  -250,   152,   158,   847,
     737,   -11,  -250,  -250,  -250,  -250,  -250,  -250,   847,  -250,
    -250,  -250,    79,   847,  -250,  -250,  -250,   -53,   -11,  -250,
    -250,  -250,  -250,   164,   479,     7,   847,  -250,  -250,  -250,
    -250,  -250,   168,  -250,  -250,  -250,   847,  -250,  -250,  1109,
    -250,   169,  -250,  -250,    89,   -11,    99,   -11,  -250,   205,
     -50,   186,   113,   107,   847,  -250,  1406,    28,  1406,    90,
     189,  -250,   109,   188,   201,    28,  -250,    28,    28,    28,
     847,   -11,   847,   -11,   209,    -5,  -250,  -250,    28,    28,
    1045,   651,    63,    63,  -250,  -250,  1645,  -250,  -250,   847,
     847,   847,   847,   847,   847,   847,   847,   847,   847,   847,
     847,   847,   847,   847,   847,   847,   902,   847,   847,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,   847,   847,   847,   847,   847,  -250,
      63,  1170,  -250,  -250,  -250,   847,   195,     7,   132,   338,
      17,   -11,  -250,  -250,  -250,   847,  1231,   244,  -250,    28,
     -11,   847,    28,  -250,  -250,  -250,  -250,   975,  -250,  -250,
    -250,   145,   151,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
     138,   147,     6,    16,    16,  -250,   847,   847,   223,   230,
    -250,  -250,  1349,  1522,  1465,  1577,  1611,  1611,  1611,  1611,
    1611,  1611,  1611,  1611,  1611,  1611,  1611,  1611,  1645,   565,
    1645,   392,   900,   -49,    19,   163,   162,  1292,  -250,  -250,
    -250,   393,  -250,  -250,  -250,  -250,   338,  -250,  1231,   792,
     847,   -50,   -50,  -250,  -250,  -250,  1231,  -250,  -250,  -250,
    1231,  -250,   847,  -250,    -5,   -50,    -5,  -250,  -250,  1231,
    -250,  -250,   847,  -250,   233,  1231,   792,   847,  1231,   847,
    1231,  -250,  -250,  -250,   200,  -250,  -250,   -50,  -250,  -250,
    1522,  -250,  1231,   847,  1231,  1231,   -50,  1231,  -250
  };

  const unsigned char
  MC_Parser::yydefact_[] =
  {
     110,     0,     0,   101,   111,     0,   245,   112,   244,     1,
       0,    94,   102,   103,   104,     0,     0,     0,   106,    95,
      78,     0,     0,     0,    78,   243,     2,     4,     5,    94,
      14,     0,    13,     0,    12,     0,    11,     0,    10,     0,
       9,     0,     8,     0,    92,     0,   105,   247,   246,     0,
     216,   217,     0,     0,    60,    79,    70,   245,     0,    70,
       0,     0,    70,    75,     7,     0,    18,    55,    56,    50,
     225,    59,    76,     0,    61,    65,    74,    88,    80,   233,
     231,   232,     0,    93,   230,    58,   113,     0,   107,     0,
     114,   115,    88,    88,    19,    71,    70,     0,    69,    70,
      67,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,     0,   225,    48,    51,    53,    52,     0,     0,     0,
     225,     0,   148,   149,   150,   151,   152,   153,     0,   156,
     155,   157,     0,     0,   240,   241,   242,   128,     0,   125,
     126,   127,   123,     0,    15,     0,     0,   118,   135,   117,
     132,   119,     0,   226,   227,   154,     0,   239,   120,     0,
     215,     0,    89,   203,   204,     0,     0,     0,   218,   108,
       0,     0,     0,     0,     0,    66,    28,     0,    27,     0,
       0,   219,   220,     0,     0,     0,    20,     0,     0,     0,
       0,     0,   234,     0,     0,     0,    49,    37,     0,     0,
       0,   228,     0,     0,   134,   124,   139,   121,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   179,   180,   181,   182,   183,
     184,   185,   186,   178,     0,     0,   234,     0,     0,   229,
       0,   136,   224,   147,    64,     0,    84,     0,     0,     0,
      90,     0,   116,    72,    73,     0,    63,     0,    21,     0,
       0,     0,     0,    31,    23,    25,    24,   237,    32,   236,
      35,     0,     0,   235,    36,    54,    47,   248,    39,    42,
      43,     0,    40,    16,    17,   122,   225,     0,     0,     0,
     175,   174,   130,   131,   176,   133,   173,   172,   171,   170,
     169,   168,   167,   166,   165,   164,   163,   162,   138,   123,
     137,   140,   141,   143,   144,     0,   146,   142,   129,   159,
     158,   225,    83,    82,    87,   205,     0,   214,   206,     0,
       0,     0,     0,    81,    91,   109,    62,    30,    22,   221,
     222,    26,     0,    29,     0,     0,     0,    38,    46,   223,
     161,   160,     0,   145,     0,   208,     0,     0,   210,     0,
     207,    97,    96,    98,    99,   238,    44,     0,    45,    41,
     177,    85,   212,     0,   209,   211,     0,   213,   100
  };

  const short
  MC_Parser::yypgoto_[] =
  {
    -250,  -250,  -250,  -250,   236,  -250,  -109,  -250,  -250,  -250,
      -6,  -250,    76,  -250,  -250,  -250,  -250,  -100,   -96,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,   247,   -23,  -250,  -250,  -250,    87,   251,
    -250,  -250,  -250,  -250,  -250,    68,  -250,  -250,  -250,  -250,
    -250,  -125,  -250,  -250,   264,  -250,  -250,  -250,  -250,   112,
     -69,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,   -71,
      12,  -250,   -63,  -249,     0,   198,   170,     9,  -250,  -174,
     -29,  -250,  -250,  -111,   243,  -250,    34,   102,   -68,  -250,
    -250,    59,    -1,   160,  -193
  };

  const short
  MC_Parser::yydefgoto_[] =
  {
      -1,     2,    26,    27,    28,    29,   143,    30,    31,    66,
     107,   108,   109,   110,    32,   196,   367,   298,   299,   300,
     301,   197,   113,   114,    69,    33,    34,    35,    36,    37,
      74,    38,    39,    58,    94,    95,    40,    41,    71,    54,
      42,    43,    78,   342,   343,   161,   353,    82,    44,   354,
     382,   383,    11,    12,    13,    14,     3,     4,    89,    90,
     201,   145,   146,   338,   147,   148,   149,   150,   258,   162,
     163,   164,   349,   165,   166,    50,   180,   181,   182,   308,
     151,   152,   153,   154,   155,    84,   292,   293,   289,   156,
     157,    51,   158,     8,   387
  };

  const short
  MC_Parser::yytable_[] =
  {
       7,   144,   302,   194,   159,    -3,    72,    52,   296,    18,
      72,    19,    72,    20,   -57,   -57,   112,    49,   366,    21,
     350,    60,    60,  -243,   351,  -243,    22,    23,    24,   310,
       1,    92,   176,   259,   178,   184,    97,     9,   160,   100,
     115,   185,    10,   144,   101,   102,   103,   255,   256,   202,
     200,   257,    91,    15,     5,   104,   187,     6,   188,   204,
     189,   105,     5,   352,   206,    57,     5,    16,   116,    57,
      45,    17,   192,   173,   260,   193,   175,   261,    65,    55,
      56,    59,    62,    55,    67,    68,   339,   263,    45,   106,
     259,     5,   306,  -243,     6,   307,    25,   377,   179,    53,
     379,    93,    16,    70,  -243,   276,    85,   297,   365,  -243,
       5,    88,    25,     6,    25,   185,   256,    96,   278,   257,
      99,   287,    73,   287,   111,    77,    75,   393,    76,    86,
     187,    87,   188,    98,   189,    25,    79,    80,    81,   167,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   330,   331,   332,
     171,   172,   169,   111,   183,   268,   170,   270,   174,    91,
     177,   277,   190,   309,   311,    47,    48,   195,   191,   283,
     183,   284,   285,   286,   198,   333,   334,   287,   336,   337,
     199,   205,   303,   304,   208,   -84,   330,   207,   262,   266,
     348,   -84,   267,   -84,   -84,   -84,   356,   269,   185,   -84,
     271,   274,   360,   186,   273,   275,   -84,   -84,   -84,   -84,
      -6,   279,   280,   187,   341,   188,    19,   189,    20,   -57,
     -57,   340,   374,   282,    21,   281,   111,   344,   369,   295,
     346,    22,    23,    24,   111,   193,   111,   111,   111,   363,
     291,   364,   294,   370,   -84,   -84,   -84,   111,   111,   297,
     371,   373,   257,   391,   396,    64,   389,   290,   386,   185,
      61,   398,   144,   358,   357,    63,   361,   375,    46,   345,
     378,   380,   272,   376,   187,   168,   188,    83,   189,   359,
     335,   203,   288,   287,   385,     0,     0,     0,     0,     0,
       0,   368,   -84,   390,     0,     0,     0,   392,   394,     0,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   397,     0,     0,    25,     0,     0,
     355,     0,     0,     0,     0,     0,     0,     0,   111,   183,
       0,   111,     0,     0,     0,     0,     0,     0,     0,     0,
     381,   384,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   388,   119,     0,   120,     0,   160,
       0,   121,   122,   123,   124,   125,   126,   127,     0,     0,
       0,     0,     0,   128,     0,     0,   368,     0,     0,     0,
       0,     0,     0,     0,     0,   384,   129,    79,    80,    81,
     130,   131,     0,   132,   133,     0,     0,     0,     0,     0,
       0,     0,   117,   118,     0,     0,     0,     0,     0,     0,
     119,     0,   120,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,     0,     0,     0,     0,     0,   128,   134,
     135,   136,   137,   138,     0,     6,     0,   139,   140,   141,
     142,   129,    79,    80,    81,   130,   131,     0,   132,   133,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,     0,   254,   255,   256,
       0,     0,   257,     0,   134,   135,   136,   137,   138,     0,
       6,     0,   139,   140,   141,   142,   119,     0,   120,   -15,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   209,
     210,   211,     0,   212,   128,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   129,    79,    80,
      81,   130,   131,   225,   226,   133,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,     0,   254,   255,   256,     0,     0,   257,
     134,   135,   136,   137,   138,     0,     6,     0,   139,   140,
     141,   142,  -123,     0,  -123,  -123,     0,     0,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,     0,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,     0,
    -123,  -123,  -123,     0,     0,  -123,  -123,  -123,  -123,  -123,
    -123,     0,  -123,     0,  -123,  -123,  -123,  -123,   119,     0,
     120,     0,     0,     0,   121,   122,   123,   124,   125,   126,
     127,   209,   210,   211,     0,   212,   128,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   129,
      79,    80,    81,   130,   131,   225,   226,   133,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,     0,   254,   255,   256,     0,
       0,   257,   134,   135,   136,   137,   138,     0,     6,     0,
     139,   140,   141,   142,   119,     0,   120,     0,   160,     0,
     121,   122,   123,   124,   125,   126,   127,     0,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,    79,    80,    81,   130,
     131,     0,   132,   133,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,   120,     0,   160,     0,   121,   122,   123,   124,   125,
     126,   127,     0,     0,     0,     0,     0,   128,   134,   135,
     136,   137,   138,     0,    57,     0,   139,   140,   141,   142,
     129,    79,    80,    81,   130,   131,     0,   132,   133,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,     0,   120,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,     0,     0,     0,
       0,     0,   128,   134,   135,   136,   137,   138,     0,     6,
       0,   139,   140,   141,   142,   129,    79,    80,    81,   130,
     131,     0,   132,   133,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,   120,     0,     0,     0,   121,   122,   123,   124,   125,
     126,   127,     0,     0,     0,     0,     0,   128,   134,   135,
     136,   137,   138,     0,     6,     0,   139,   140,   141,   142,
     129,    79,    80,    81,   130,   131,     0,   132,   133,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,     0,   254,   255,   256,     0,     0,
     257,     0,     0,   134,   135,   136,   137,   138,     0,     6,
       0,   139,   140,   141,   329,   209,   210,   211,     0,   212,
       0,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,     0,     0,     0,     0,   225,
     265,     0,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,     0,
     254,   255,   256,   305,     0,   257,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   209,   210,   211,   362,   212,
       0,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,     0,     0,     0,     0,   225,
     265,     0,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   264,
     254,   255,   256,     0,     0,   257,     0,     0,     0,   209,
     210,   211,     0,   212,     0,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   225,   265,     0,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,     0,   254,   255,   256,     0,     0,   257,
     209,   210,   211,     0,   212,     0,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   225,   265,     0,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,     0,   254,   255,   256,     0,     0,
     257,   209,   210,   211,     0,   212,     0,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,   225,   265,     0,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,     0,   254,   255,   256,     0,
       0,   257,   209,   210,   211,     0,   212,     0,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   225,   265,     0,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,     0,   254,   255,   256,
     210,   211,   257,   212,     0,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   225,   265,     0,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,     0,   254,   255,   256,   210,     0,   257,
       0,     0,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,     0,     0,     0,     0,     0,     0,
     225,   265,     0,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
       0,   254,   255,   256,     0,     0,   257,   211,   372,   212,
       0,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,     0,     0,     0,     0,   225,
     265,     0,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,     0,
     254,   255,   256,     0,   211,   257,   212,     0,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   225,   265,     0,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,     0,   254,   255,   256,
       0,     0,   257,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,     0,     0,     0,     0,     0,
       0,   225,   265,     0,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,     0,   254,   255,   256,   225,   265,   257,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,     0,   254,   255,   256,     0,
       0,   257,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,     0,
     254,   255,   256,     0,     0,   257
  };

  const short
  MC_Parser::yycheck_[] =
  {
       1,    70,   195,   112,    73,     0,    35,     5,    13,    10,
      39,     6,    41,     8,     9,    10,    29,    17,    12,    14,
     269,    22,    23,    27,     7,    29,    21,    22,    23,   203,
       3,    27,   101,   144,   103,   106,    59,     0,    31,    62,
      69,    25,     4,   112,    16,    17,    18,    96,    97,   120,
     119,   100,    53,   106,   104,    27,    40,   107,    42,   128,
      44,    33,   104,    46,   133,   107,   104,   106,    69,   107,
      11,    97,    97,    96,   145,   100,    99,   146,    29,    20,
      21,    22,    23,    24,     9,    10,   260,   156,    29,    61,
     201,   104,    29,    97,   107,    32,   107,   346,   104,    97,
     349,    97,   106,    29,   108,   174,   108,   112,   301,   113,
     104,    52,   107,   107,   107,    25,    97,    58,    28,   100,
      61,   190,    29,   192,    65,    29,    39,   376,    41,    98,
      40,   113,    42,   100,    44,   107,    59,    60,    61,    24,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
      92,    93,    98,   104,   105,   165,   113,   167,   108,   170,
      29,   177,    26,   202,   203,    15,    16,    11,   113,   185,
     121,   187,   188,   189,    32,   254,   255,   256,   257,   258,
      32,   112,   198,   199,    30,     0,   265,   138,    30,    30,
     269,     6,   113,     8,     9,    10,   275,   108,    25,    14,
       5,    98,   281,    30,    28,   108,    21,    22,    23,    24,
       0,    32,   113,    40,    29,    42,     6,    44,     8,     9,
      10,   260,   341,    32,    14,    47,   177,   266,   307,    30,
     108,    21,    22,    23,   185,   100,   187,   188,   189,    98,
     191,   113,   193,    30,    59,    60,    61,   198,   199,   112,
      30,    98,   100,    30,    64,    29,   366,   191,   364,    25,
      23,   396,   341,   279,    30,    24,   282,   346,    14,   267,
     349,   350,   170,   346,    40,    87,    42,    44,    44,   280,
     256,   121,   190,   362,   362,    -1,    -1,    -1,    -1,    -1,
      -1,   302,   107,   372,    -1,    -1,    -1,   376,   377,    -1,
     379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   393,    -1,    -1,   107,    -1,    -1,
     271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   279,   280,
      -1,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     351,   352,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   365,    27,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,   387,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   396,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,   101,
     102,   103,   104,   105,    -1,   107,    -1,   109,   110,   111,
     112,    58,    59,    60,    61,    62,    63,    -1,    65,    66,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    96,    97,
      -1,    -1,   100,    -1,   101,   102,   103,   104,   105,    -1,
     107,    -1,   109,   110,   111,   112,    27,    -1,    29,    30,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    -1,    95,    96,    97,    -1,    -1,   100,
     101,   102,   103,   104,   105,    -1,   107,    -1,   109,   110,
     111,   112,    27,    -1,    29,    30,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    -1,
      95,    96,    97,    -1,    -1,   100,   101,   102,   103,   104,
     105,    -1,   107,    -1,   109,   110,   111,   112,    27,    -1,
      29,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    -1,    95,    96,    97,    -1,
      -1,   100,   101,   102,   103,   104,   105,    -1,   107,    -1,
     109,   110,   111,   112,    27,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    45,   101,   102,
     103,   104,   105,    -1,   107,    -1,   109,   110,   111,   112,
      58,    59,    60,    61,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    45,   101,   102,   103,   104,   105,    -1,   107,
      -1,   109,   110,   111,   112,    58,    59,    60,    61,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    45,   101,   102,
     103,   104,   105,    -1,   107,    -1,   109,   110,   111,   112,
      58,    59,    60,    61,    62,    63,    -1,    65,    66,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    95,    96,    97,    -1,    -1,
     100,    -1,    -1,   101,   102,   103,   104,   105,    -1,   107,
      -1,   109,   110,   111,   112,    40,    41,    42,    -1,    44,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    -1,
      95,    96,    97,    28,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,   113,    44,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    30,
      95,    96,    97,    -1,    -1,   100,    -1,    -1,    -1,    40,
      41,    42,    -1,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    -1,    95,    96,    97,    -1,    -1,   100,
      40,    41,    42,    -1,    44,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    95,    96,    97,    -1,    -1,
     100,    40,    41,    42,    -1,    44,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    -1,    95,    96,    97,    -1,
      -1,   100,    40,    41,    42,    -1,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    96,    97,
      41,    42,   100,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    -1,    95,    96,    97,    41,    -1,   100,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    -1,    -1,   100,    42,    43,    44,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    -1,
      95,    96,    97,    -1,    42,   100,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    96,    97,
      -1,    -1,   100,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    -1,    95,    96,    97,    64,    65,   100,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    -1,    95,    96,    97,    -1,
      -1,   100,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    -1,
      95,    96,    97,    -1,    -1,   100
  };

  const unsigned char
  MC_Parser::yystos_[] =
  {
       0,     3,   121,   176,   177,   104,   107,   212,   213,     0,
       4,   172,   173,   174,   175,   106,   106,    97,   212,     6,
       8,    14,    21,    22,    23,   107,   122,   123,   124,   125,
     127,   128,   134,   145,   146,   147,   148,   149,   151,   152,
     156,   157,   160,   161,   168,   211,   174,   213,   213,   194,
     195,   211,     5,    97,   159,   211,   211,   107,   153,   211,
     212,   153,   211,   159,   124,    29,   129,     9,    10,   144,
      29,   158,   200,    29,   150,   158,   158,    29,   162,    59,
      60,    61,   167,   204,   205,   108,    98,   113,   211,   178,
     179,   212,    27,    97,   154,   155,   211,   154,   100,   211,
     154,    16,    17,    18,    27,    33,    61,   130,   131,   132,
     133,   211,    29,   142,   143,   200,   212,    19,    20,    27,
      29,    33,    34,    35,    36,    37,    38,    39,    45,    58,
      62,    63,    65,    66,   101,   102,   103,   104,   105,   109,
     110,   111,   112,   126,   180,   181,   182,   184,   185,   186,
     187,   200,   201,   202,   203,   204,   209,   210,   212,   180,
      31,   165,   189,   190,   191,   193,   194,    24,   195,    98,
     113,   165,   165,   154,   108,   154,   180,    29,   180,   130,
     196,   197,   198,   211,   189,    25,    30,    40,    42,    44,
      26,   113,    97,   100,   126,    11,   135,   141,    32,    32,
     180,   180,   189,   196,   180,   112,   180,   211,    30,    40,
      41,    42,    44,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    64,    65,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    95,    96,    97,   100,   188,   203,
     189,   180,    30,   180,    30,    65,    30,   113,   194,   108,
     194,     5,   179,    28,    98,   108,   180,   130,    28,    32,
     113,    47,    32,   130,   130,   130,   130,   180,   207,   208,
     132,   211,   206,   207,   211,    30,    13,   112,   137,   138,
     139,   140,   214,   130,   130,    28,    29,    32,   199,   200,
     199,   200,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   112,
     180,   180,   180,   180,   180,   206,   180,   180,   183,   199,
     200,    29,   163,   164,   200,   190,   108,    15,   180,   192,
     193,     7,    46,   166,   169,   211,   180,    30,   130,   197,
     180,   130,   113,    98,   113,   214,    12,   136,   212,   180,
      30,    30,    43,    98,   126,   180,   192,   193,   180,   193,
     180,   212,   170,   171,   212,   208,   138,   214,   212,   137,
     180,    30,   180,   193,   180,   180,    64,   180,   171
  };

  const unsigned char
  MC_Parser::yyr1_[] =
  {
       0,   120,   121,   122,   122,   123,   124,   124,   125,   125,
     125,   125,   125,   125,   125,   126,   126,   126,   127,   128,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   132,   132,   133,   134,   135,   135,
     136,   136,   137,   138,   138,   139,   139,   140,   141,   141,
     142,   142,   143,   143,   143,   144,   144,   145,   145,   146,
     147,   148,   149,   149,   150,   151,   152,   152,   153,   153,
     154,   154,   155,   155,   156,   157,   158,   158,   159,   159,
     160,   161,   162,   162,   163,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   168,   169,   169,   170,   171,
     171,   172,   172,   173,   174,   174,   175,   175,   175,   175,
     176,   176,   177,   177,   178,   179,   179,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   181,   181,
     181,   181,   181,   181,   182,   182,   182,   182,   183,   183,
     184,   184,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   186,   186,   187,   187,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   189,   190,   190,   191,   191,   191,   191,
     191,   191,   191,   191,   192,   193,   194,   195,   195,   196,
     197,   197,   198,   199,   200,   201,   201,   202,   203,   203,
     204,   205,   205,   205,   206,   206,   207,   208,   208,   209,
     210,   210,   210,   211,   212,   213,   213,   213,   214
  };

  const unsigned char
  MC_Parser::yyr2_[] =
  {
       0,     2,     3,     0,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     3,
       3,     3,     4,     3,     3,     3,     4,     2,     2,     4,
       4,     3,     3,     1,     1,     3,     3,     4,     3,     2,
       0,     2,     1,     1,     3,     3,     2,     1,     0,     1,
       0,     1,     1,     1,     3,     1,     1,     0,     2,     2,
       2,     2,     6,     5,     3,     2,     4,     3,     0,     2,
       0,     1,     3,     3,     2,     2,     1,     3,     0,     1,
       2,     5,     4,     4,     0,     3,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     2,     2,     1,     1,
       3,     0,     1,     1,     1,     2,     2,     4,     5,     7,
       0,     1,     2,     5,     1,     1,     3,     1,     1,     1,
       1,     2,     3,     1,     2,     1,     1,     1,     1,     3,
       3,     3,     1,     3,     2,     1,     2,     3,     3,     2,
       3,     3,     3,     3,     3,     4,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     4,     4,     5,
       4,     5,     5,     6,     1,     1,     1,     1,     3,     1,
       1,     3,     3,     2,     3,     0,     1,     1,     1,     2,
       1,     1,     1,     1,     0,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const MC_Parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "MODULE", "OPEN", "AS",
  "ABSTRACT", "EXTENDS", "ASSERT", "RUN", "CHECK", "FOR", "BUT", "EXACTLY",
  "ACTION", "DYNAMIC", "BEFORE", "LOOP", "AFTER", "SOMETIMES", "ALWAYS",
  "FUN", "PRED", "FACT", "SIG", "SEMICOLUMN", "ASSIGN", "LPAREN", "RPAREN",
  "LCURLY", "RCURLY", "DISJ", "BAR", "LET", "ALLQ", "SUMQ", "NOQ", "LONEQ",
  "SOMEQ", "ONEQ", "OR", "IFF", "IMPLIES", "ELSE", "AND", "NOT", "IN",
  "EQUALS", "LT", "GT", "LTE", "GTE", "NOTIN", "NOTEQUALS", "NOTLT",
  "NOTGT", "NOTLTE", "NOTGTE", "SET", "ONE", "LONE", "SOME", "NO", "SEQ",
  "UNION", "SUBTRACTION", "CARD", "OVERRIDE", "INTERSECTION",
  "SET_ARROW_SET", "ONE_ARROW_SET", "LONE_ARROW_SET", "SOME_ARROW_SET",
  "SET_ARROW_ONE", "ONE_ARROW_ONE", "LONE_ARROW_ONE", "SOME_ARROW_ONE",
  "SET_ARROW_LONE", "ONE_ARROW_LONE", "LONE_ARROW_LONE", "SOME_ARROW_LONE",
  "SET_ARROW_SOME", "ONE_ARROW_SOME", "LONE_ARROW_SOME", "SOME_ARROW_SOME",
  "SET_ARROW", "ONE_ARROW", "LONE_ARROW", "SOME_ARROW", "ARROW_SET",
  "ARROW_ONE", "ARROW_LONE", "ARROW_SOME", "ARROW", "ARROW_PREC",
  "RANGE_R", "DOMAIN_R", "LSQUARE", "RSQUARE", "BOX", "DOT", "TRANSP",
  "REFL", "TRAN_CLO", "THIS", "AT", "FORSLASH", "NAME", "COLUMN", "NONE",
  "UNIV", "IDEN", "INT", "COMMA", "UNARY_PREC", "MULTORNO",
  "\"quant_or_quantification\"", "NEWLINE", "actions", "EXPRESSION",
  "$accept", "alloyModule", "paragraphStar", "paragraphPlus",
  "paragraphPlus_", "paragraph", "tempQuant", "actDecl", "actHead",
  "actBody", "act", "nameDotNameCommaPlus", "nameDotNameCommaPlus_",
  "nameDotName", "cmdDecl", "scope", "maybeButTypeScopeCommaPlus",
  "typeScopeCommaPlus", "typeScopeCommaPlus_", "typeScope", "exactly",
  "maybeScope", "maybeQualnameOrBlock", "qualnameOrBlock", "runOrCheck",
  "maybeNameColumn", "assertDecl", "assertHead", "funDecl", "funHead",
  "funBody", "predDecl", "predHead", "maybeReceiver", "maybeParaDecls",
  "paraDecls", "factDecl", "factHead", "body", "maybeName", "sigDecl",
  "sigHead", "sigBody", "maybeTempQuantBlock", "maybeBlock",
  "declCommaStar", "maybeSigExt", "maybeMult", "maybeAbstract", "sigExt",
  "qualnamePlusPlus", "qualnamePlusPlus_", "importStar", "importPlus",
  "importPlus_", "import", "maybeModuleDecl", "moduleDecl",
  "qualnameCommaPlus", "qualnameCommaPlus_", "expr", "multNoSumAllQ",
  "multOrNoOrSetOrSeq", "blockOrBar", "comprehensionExpr", "compareExpr",
  "letExpr", "impliesExpr", "arrowOp", "declCommaPlus", "declCommaPlus_",
  "decl", "dynamic", "disj", "nameCommaPlus", "nameCommaPlus_",
  "letDeclCommaPlus", "letDeclCommaPlus_", "letDecl", "bar", "block",
  "exprStar", "exprPlus", "exprPlus_", "mult", "mult_string",
  "exprCommaStar", "exprCommaPlus", "exprCommaPlus_",
  "transposeReflexiveTransitive", "transposeReflexiveTransitive_string",
  "name", "qualname", "qualname_string", "number", YY_NULLPTR
  };


  const unsigned short
  MC_Parser::yyrline_[] =
  {
       0,   139,   139,   144,   145,   150,   155,   156,   161,   162,
     163,   164,   165,   166,   167,   172,   173,   174,   185,   190,
     195,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   219,   224,   225,   230,   235,   240,   241,
     246,   247,   252,   257,   258,   263,   264,   269,   274,   275,
     280,   281,   286,   287,   288,   293,   294,   299,   300,   306,
     311,   317,   322,   323,   328,   333,   338,   339,   344,   345,
     350,   351,   356,   357,   363,   368,   373,   374,   379,   380,
     385,   390,   395,   396,   401,   402,   407,   408,   413,   414,
     419,   420,   425,   426,   431,   432,   437,   438,   443,   448,
     449,   454,   455,   460,   465,   466,   471,   472,   473,   474,
     479,   480,   485,   486,   491,   496,   497,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   539,   540,
     541,   542,   543,   544,   549,   550,   551,   552,   557,   558,
     564,   565,   571,   572,   573,   574,   575,   576,   578,   579,
     580,   581,   582,   583,   588,   589,   594,   595,   601,   603,
     604,   605,   606,   608,   609,   610,   611,   613,   614,   615,
     616,   618,   619,   620,   621,   623,   624,   625,   626,   628,
     629,   630,   631,   637,   641,   642,   648,   649,   650,   651,
     652,   653,   654,   655,   660,   665,   670,   675,   676,   681,
     686,   687,   692,   697,   702,   707,   708,   713,   718,   719,
     724,   729,   730,   731,   736,   737,   742,   747,   748,   753,
     757,   758,   759,   764,   769,   774,   775,   776,   782
  };

  // Print the state stack on the debug stream.
  void
  MC_Parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  MC_Parser::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  MC_Parser::token_number_type
  MC_Parser::yytranslate_ (int t)
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const token_number_type
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119
    };
    const unsigned user_token_number_max_ = 374;
    const token_number_type undef_token_ = 2;

    if (static_cast<int> (t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

#line 5 "mc_parser.yy"
} // MC
#line 3750 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc"

#line 785 "mc_parser.yy"



void 
MC::MC_Parser::error( const location_type &l, const std::string &err_message )
{
   std::cerr << "Error: " << err_message << " at " << l << "\n";
}
