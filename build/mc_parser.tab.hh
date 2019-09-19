// A Bison parser, made by GNU Bison 3.4.

// Skeleton interface for Bison LALR(1) parsers in C++

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


/**
 ** \file /home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.hh
 ** Define the MC::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.

#ifndef YY_YY_HOME_SINAN_REPOS_RESEARCH_ALLOY_BISON_PARSER_BUILD_MC_PARSER_TAB_HH_INCLUDED
# define YY_YY_HOME_SINAN_REPOS_RESEARCH_ALLOY_BISON_PARSER_BUILD_MC_PARSER_TAB_HH_INCLUDED
// //                    "%code requires" blocks.
#line 8 "mc_parser.yy"

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


#line 69 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.hh"

# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "location.hh"
#include <typeinfo>
#ifndef YYASSERT
# include <cassert>
# define YYASSERT assert
#endif


#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

#line 5 "mc_parser.yy"
namespace MC {
#line 185 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.hh"




  /// A Bison parser.
  class MC_Parser
  {
  public:
#ifndef YYSTYPE
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class semantic_type
  {
  public:
    /// Type of *this.
    typedef semantic_type self_type;

    /// Empty construction.
    semantic_type () YY_NOEXCEPT
      : yybuffer_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    semantic_type (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      YYASSERT (sizeof (T) <= size);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

    /// Destruction, allowed only if empty.
    ~semantic_type () YY_NOEXCEPT
    {
      YYASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      YYASSERT (yytypeid_);
      YYASSERT (*yytypeid_ == typeid (T));
      YYASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      YYASSERT (yytypeid_);
      YYASSERT (*yytypeid_ == typeid (T));
      YYASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      YYASSERT (yytypeid_);
      YYASSERT (*yytypeid_ == *that.yytypeid_);
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
    /// Prohibit blind copies.
    self_type& operator= (const self_type&);
    semantic_type (const self_type&);

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yybuffer_.yyraw;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yybuffer_.yyraw;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // alloyModule
      // paragraphStar
      // paragraphPlus
      // paragraphPlus_
      // paragraph
      // tempQuant
      // actDecl
      // actHead
      // actBody
      // act
      // nameDotNameCommaPlus
      // nameDotNameCommaPlus_
      // nameDotName
      // cmdDecl
      // scope
      // maybeButTypeScopeCommaPlus
      // typeScopeCommaPlus
      // typeScopeCommaPlus_
      // typeScope
      // exactly
      // maybeScope
      // maybeQualnameOrBlock
      // qualnameOrBlock
      // runOrCheck
      // maybeNameColumn
      // assertDecl
      // assertHead
      // funDecl
      // funHead
      // funBody
      // predDecl
      // predHead
      // maybeReceiver
      // maybeParaDecls
      // paraDecls
      // factDecl
      // factHead
      // body
      // maybeName
      // sigDecl
      // sigHead
      // sigBody
      // maybeTempQuantBlock
      // maybeBlock
      // declCommaStar
      // maybeSigExt
      // maybeMult
      // maybeAbstract
      // sigExt
      // qualnamePlusPlus
      // qualnamePlusPlus_
      // importStar
      // importPlus
      // importPlus_
      // import
      // maybeModuleDecl
      // moduleDecl
      // qualnameCommaPlus
      // qualnameCommaPlus_
      // expr
      // multNoSumAllQ
      // multOrNoOrSetOrSeq
      // blockOrBar
      // comprehensionExpr
      // compareExpr
      // letExpr
      // impliesExpr
      // arrowOp
      // declCommaPlus
      // declCommaPlus_
      // decl
      // dynamic
      // disj
      // nameCommaPlus
      // nameCommaPlus_
      // letDeclCommaPlus
      // letDeclCommaPlus_
      // letDecl
      // bar
      // block
      // exprStar
      // exprPlus
      // exprPlus_
      // mult
      // exprCommaStar
      // exprCommaPlus
      // exprCommaPlus_
      // transposeReflexiveTransitive
      // name
      // qualname
      // number
      char dummy1[sizeof (AstNode)];

      // NAME
      // INT
      // mult_string
      // transposeReflexiveTransitive_string
      // qualname_string
      char dummy2[sizeof (std::string)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me;
      /// A buffer large enough to store any of the semantic values.
      char yyraw[size];
    } yybuffer_;

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };

#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Tokens.
    struct token
    {
      enum yytokentype
      {
        END = 0,
        MODULE = 258,
        OPEN = 259,
        AS = 260,
        ABSTRACT = 261,
        EXTENDS = 262,
        ASSERT = 263,
        RUN = 264,
        CHECK = 265,
        FOR = 266,
        BUT = 267,
        EXACTLY = 268,
        ACTION = 269,
        DYNAMIC = 270,
        BEFORE = 271,
        LOOP = 272,
        AFTER = 273,
        SOMETIMES = 274,
        ALWAYS = 275,
        FUN = 276,
        PRED = 277,
        FACT = 278,
        SIG = 279,
        SEMICOLUMN = 280,
        ASSIGN = 281,
        LPAREN = 282,
        RPAREN = 283,
        LCURLY = 284,
        RCURLY = 285,
        DISJ = 286,
        BAR = 287,
        LET = 288,
        ALLQ = 289,
        SUMQ = 290,
        NOQ = 291,
        LONEQ = 292,
        SOMEQ = 293,
        ONEQ = 294,
        OR = 295,
        IFF = 296,
        IMPLIES = 297,
        ELSE = 298,
        AND = 299,
        NOT = 300,
        IN = 301,
        EQUALS = 302,
        LT = 303,
        GT = 304,
        LTE = 305,
        GTE = 306,
        NOTIN = 307,
        NOTEQUALS = 308,
        NOTLT = 309,
        NOTGT = 310,
        NOTLTE = 311,
        NOTGTE = 312,
        SET = 313,
        ONE = 314,
        LONE = 315,
        SOME = 316,
        NO = 317,
        SEQ = 318,
        UNION = 319,
        SUBTRACTION = 320,
        CARD = 321,
        OVERRIDE = 322,
        INTERSECTION = 323,
        SET_ARROW_SET = 324,
        ONE_ARROW_SET = 325,
        LONE_ARROW_SET = 326,
        SOME_ARROW_SET = 327,
        SET_ARROW_ONE = 328,
        ONE_ARROW_ONE = 329,
        LONE_ARROW_ONE = 330,
        SOME_ARROW_ONE = 331,
        SET_ARROW_LONE = 332,
        ONE_ARROW_LONE = 333,
        LONE_ARROW_LONE = 334,
        SOME_ARROW_LONE = 335,
        SET_ARROW_SOME = 336,
        ONE_ARROW_SOME = 337,
        LONE_ARROW_SOME = 338,
        SOME_ARROW_SOME = 339,
        SET_ARROW = 340,
        ONE_ARROW = 341,
        LONE_ARROW = 342,
        SOME_ARROW = 343,
        ARROW_SET = 344,
        ARROW_ONE = 345,
        ARROW_LONE = 346,
        ARROW_SOME = 347,
        ARROW = 348,
        ARROW_PREC = 349,
        RANGE_R = 350,
        DOMAIN_R = 351,
        LSQUARE = 352,
        RSQUARE = 353,
        BOX = 354,
        DOT = 355,
        TRANSP = 356,
        REFL = 357,
        TRAN_CLO = 358,
        THIS = 359,
        AT = 360,
        FORSLASH = 361,
        NAME = 362,
        COLUMN = 363,
        NONE = 364,
        UNIV = 365,
        IDEN = 366,
        INT = 367,
        COMMA = 368,
        UNARY_PREC = 369,
        MULTORNO = 370,
        NEWLINE = 372,
        actions = 373,
        EXPRESSION = 374
      };
    };

    /// (External) token type, as returned by yylex.
    typedef token::yytokentype token_type;

    /// Symbol type: an internal symbol number.
    typedef int symbol_number_type;

    /// The symbol type number to denote an empty symbol.
    enum { empty_symbol = -2 };

    /// Internal symbol number for tokens (subsumed by symbol_number_type).
    typedef unsigned char token_number_type;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol type
    /// via type_get ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol ()
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that);
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, location_type&& l)
        : Base (t)
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const location_type& l)
        : Base (t)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, AstNode&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const AstNode& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }

      /// Destroy contents, and record that is empty.
      void clear ()
      {
        // User destructor.
        symbol_number_type yytype = this->type_get ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yytype)
        {
       default:
          break;
        }

        // Type destructor.
switch (yytype)
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
        value.template destroy< AstNode > ();
        break;

      case 107: // NAME
      case 112: // INT
      case 205: // mult_string
      case 210: // transposeReflexiveTransitive_string
      case 213: // qualname_string
        value.template destroy< std::string > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      semantic_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_type
    {
      /// Default constructor.
      by_type ();

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_type (by_type&& that);
#endif

      /// Copy constructor.
      by_type (const by_type& that);

      /// The symbol type as needed by the constructor.
      typedef token_type kind_type;

      /// Constructor from (external) token numbers.
      by_type (kind_type t);

      /// Record that this symbol is empty.
      void clear ();

      /// Steal the symbol type from \a that.
      void move (by_type& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The token.
      token_type token () const YY_NOEXCEPT;

      /// The symbol type.
      /// \a empty_symbol when empty.
      /// An int, not token_number_type, to be able to store empty_symbol.
      int type;
    };

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_type>
    {
      /// Superclass.
      typedef basic_symbol<by_type> super_type;

      /// Empty symbol.
      symbol_type () {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, location_type l)
        : super_type(token_type (tok), std::move (l))
      {
        YYASSERT (tok == token::END || tok == token::MODULE || tok == token::OPEN || tok == token::AS || tok == token::ABSTRACT || tok == token::EXTENDS || tok == token::ASSERT || tok == token::RUN || tok == token::CHECK || tok == token::FOR || tok == token::BUT || tok == token::EXACTLY || tok == token::ACTION || tok == token::DYNAMIC || tok == token::BEFORE || tok == token::LOOP || tok == token::AFTER || tok == token::SOMETIMES || tok == token::ALWAYS || tok == token::FUN || tok == token::PRED || tok == token::FACT || tok == token::SIG || tok == token::SEMICOLUMN || tok == token::ASSIGN || tok == token::LPAREN || tok == token::RPAREN || tok == token::LCURLY || tok == token::RCURLY || tok == token::DISJ || tok == token::BAR || tok == token::LET || tok == token::ALLQ || tok == token::SUMQ || tok == token::NOQ || tok == token::LONEQ || tok == token::SOMEQ || tok == token::ONEQ || tok == token::OR || tok == token::IFF || tok == token::IMPLIES || tok == token::ELSE || tok == token::AND || tok == token::NOT || tok == token::IN || tok == token::EQUALS || tok == token::LT || tok == token::GT || tok == token::LTE || tok == token::GTE || tok == token::NOTIN || tok == token::NOTEQUALS || tok == token::NOTLT || tok == token::NOTGT || tok == token::NOTLTE || tok == token::NOTGTE || tok == token::SET || tok == token::ONE || tok == token::LONE || tok == token::SOME || tok == token::NO || tok == token::SEQ || tok == token::UNION || tok == token::SUBTRACTION || tok == token::CARD || tok == token::OVERRIDE || tok == token::INTERSECTION || tok == token::SET_ARROW_SET || tok == token::ONE_ARROW_SET || tok == token::LONE_ARROW_SET || tok == token::SOME_ARROW_SET || tok == token::SET_ARROW_ONE || tok == token::ONE_ARROW_ONE || tok == token::LONE_ARROW_ONE || tok == token::SOME_ARROW_ONE || tok == token::SET_ARROW_LONE || tok == token::ONE_ARROW_LONE || tok == token::LONE_ARROW_LONE || tok == token::SOME_ARROW_LONE || tok == token::SET_ARROW_SOME || tok == token::ONE_ARROW_SOME || tok == token::LONE_ARROW_SOME || tok == token::SOME_ARROW_SOME || tok == token::SET_ARROW || tok == token::ONE_ARROW || tok == token::LONE_ARROW || tok == token::SOME_ARROW || tok == token::ARROW_SET || tok == token::ARROW_ONE || tok == token::ARROW_LONE || tok == token::ARROW_SOME || tok == token::ARROW || tok == token::ARROW_PREC || tok == token::RANGE_R || tok == token::DOMAIN_R || tok == token::LSQUARE || tok == token::RSQUARE || tok == token::BOX || tok == token::DOT || tok == token::TRANSP || tok == token::REFL || tok == token::TRAN_CLO || tok == token::THIS || tok == token::AT || tok == token::FORSLASH || tok == token::COLUMN || tok == token::NONE || tok == token::UNIV || tok == token::IDEN || tok == token::COMMA || tok == token::UNARY_PREC || tok == token::MULTORNO || tok == 371 || tok == token::NEWLINE || tok == token::actions || tok == token::EXPRESSION);
      }
#else
      symbol_type (int tok, const location_type& l)
        : super_type(token_type (tok), l)
      {
        YYASSERT (tok == token::END || tok == token::MODULE || tok == token::OPEN || tok == token::AS || tok == token::ABSTRACT || tok == token::EXTENDS || tok == token::ASSERT || tok == token::RUN || tok == token::CHECK || tok == token::FOR || tok == token::BUT || tok == token::EXACTLY || tok == token::ACTION || tok == token::DYNAMIC || tok == token::BEFORE || tok == token::LOOP || tok == token::AFTER || tok == token::SOMETIMES || tok == token::ALWAYS || tok == token::FUN || tok == token::PRED || tok == token::FACT || tok == token::SIG || tok == token::SEMICOLUMN || tok == token::ASSIGN || tok == token::LPAREN || tok == token::RPAREN || tok == token::LCURLY || tok == token::RCURLY || tok == token::DISJ || tok == token::BAR || tok == token::LET || tok == token::ALLQ || tok == token::SUMQ || tok == token::NOQ || tok == token::LONEQ || tok == token::SOMEQ || tok == token::ONEQ || tok == token::OR || tok == token::IFF || tok == token::IMPLIES || tok == token::ELSE || tok == token::AND || tok == token::NOT || tok == token::IN || tok == token::EQUALS || tok == token::LT || tok == token::GT || tok == token::LTE || tok == token::GTE || tok == token::NOTIN || tok == token::NOTEQUALS || tok == token::NOTLT || tok == token::NOTGT || tok == token::NOTLTE || tok == token::NOTGTE || tok == token::SET || tok == token::ONE || tok == token::LONE || tok == token::SOME || tok == token::NO || tok == token::SEQ || tok == token::UNION || tok == token::SUBTRACTION || tok == token::CARD || tok == token::OVERRIDE || tok == token::INTERSECTION || tok == token::SET_ARROW_SET || tok == token::ONE_ARROW_SET || tok == token::LONE_ARROW_SET || tok == token::SOME_ARROW_SET || tok == token::SET_ARROW_ONE || tok == token::ONE_ARROW_ONE || tok == token::LONE_ARROW_ONE || tok == token::SOME_ARROW_ONE || tok == token::SET_ARROW_LONE || tok == token::ONE_ARROW_LONE || tok == token::LONE_ARROW_LONE || tok == token::SOME_ARROW_LONE || tok == token::SET_ARROW_SOME || tok == token::ONE_ARROW_SOME || tok == token::LONE_ARROW_SOME || tok == token::SOME_ARROW_SOME || tok == token::SET_ARROW || tok == token::ONE_ARROW || tok == token::LONE_ARROW || tok == token::SOME_ARROW || tok == token::ARROW_SET || tok == token::ARROW_ONE || tok == token::ARROW_LONE || tok == token::ARROW_SOME || tok == token::ARROW || tok == token::ARROW_PREC || tok == token::RANGE_R || tok == token::DOMAIN_R || tok == token::LSQUARE || tok == token::RSQUARE || tok == token::BOX || tok == token::DOT || tok == token::TRANSP || tok == token::REFL || tok == token::TRAN_CLO || tok == token::THIS || tok == token::AT || tok == token::FORSLASH || tok == token::COLUMN || tok == token::NONE || tok == token::UNIV || tok == token::IDEN || tok == token::COMMA || tok == token::UNARY_PREC || tok == token::MULTORNO || tok == 371 || tok == token::NEWLINE || tok == token::actions || tok == token::EXPRESSION);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == token::NAME || tok == token::INT);
      }
#else
      symbol_type (int tok, const std::string& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == token::NAME || tok == token::INT);
      }
#endif
    };

    /// Build a parser object.
    MC_Parser (MC_Scanner  &scanner_yyarg, MC_Driver  &driver_yyarg);
    virtual ~MC_Parser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    // Implementation of make_symbol for each symbol type.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_END (location_type l)
      {
        return symbol_type (token::END, std::move (l));
      }
#else
      static
      symbol_type
      make_END (const location_type& l)
      {
        return symbol_type (token::END, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MODULE (location_type l)
      {
        return symbol_type (token::MODULE, std::move (l));
      }
#else
      static
      symbol_type
      make_MODULE (const location_type& l)
      {
        return symbol_type (token::MODULE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OPEN (location_type l)
      {
        return symbol_type (token::OPEN, std::move (l));
      }
#else
      static
      symbol_type
      make_OPEN (const location_type& l)
      {
        return symbol_type (token::OPEN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AS (location_type l)
      {
        return symbol_type (token::AS, std::move (l));
      }
#else
      static
      symbol_type
      make_AS (const location_type& l)
      {
        return symbol_type (token::AS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ABSTRACT (location_type l)
      {
        return symbol_type (token::ABSTRACT, std::move (l));
      }
#else
      static
      symbol_type
      make_ABSTRACT (const location_type& l)
      {
        return symbol_type (token::ABSTRACT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXTENDS (location_type l)
      {
        return symbol_type (token::EXTENDS, std::move (l));
      }
#else
      static
      symbol_type
      make_EXTENDS (const location_type& l)
      {
        return symbol_type (token::EXTENDS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSERT (location_type l)
      {
        return symbol_type (token::ASSERT, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSERT (const location_type& l)
      {
        return symbol_type (token::ASSERT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RUN (location_type l)
      {
        return symbol_type (token::RUN, std::move (l));
      }
#else
      static
      symbol_type
      make_RUN (const location_type& l)
      {
        return symbol_type (token::RUN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHECK (location_type l)
      {
        return symbol_type (token::CHECK, std::move (l));
      }
#else
      static
      symbol_type
      make_CHECK (const location_type& l)
      {
        return symbol_type (token::CHECK, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FOR (location_type l)
      {
        return symbol_type (token::FOR, std::move (l));
      }
#else
      static
      symbol_type
      make_FOR (const location_type& l)
      {
        return symbol_type (token::FOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BUT (location_type l)
      {
        return symbol_type (token::BUT, std::move (l));
      }
#else
      static
      symbol_type
      make_BUT (const location_type& l)
      {
        return symbol_type (token::BUT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXACTLY (location_type l)
      {
        return symbol_type (token::EXACTLY, std::move (l));
      }
#else
      static
      symbol_type
      make_EXACTLY (const location_type& l)
      {
        return symbol_type (token::EXACTLY, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ACTION (location_type l)
      {
        return symbol_type (token::ACTION, std::move (l));
      }
#else
      static
      symbol_type
      make_ACTION (const location_type& l)
      {
        return symbol_type (token::ACTION, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DYNAMIC (location_type l)
      {
        return symbol_type (token::DYNAMIC, std::move (l));
      }
#else
      static
      symbol_type
      make_DYNAMIC (const location_type& l)
      {
        return symbol_type (token::DYNAMIC, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BEFORE (location_type l)
      {
        return symbol_type (token::BEFORE, std::move (l));
      }
#else
      static
      symbol_type
      make_BEFORE (const location_type& l)
      {
        return symbol_type (token::BEFORE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LOOP (location_type l)
      {
        return symbol_type (token::LOOP, std::move (l));
      }
#else
      static
      symbol_type
      make_LOOP (const location_type& l)
      {
        return symbol_type (token::LOOP, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AFTER (location_type l)
      {
        return symbol_type (token::AFTER, std::move (l));
      }
#else
      static
      symbol_type
      make_AFTER (const location_type& l)
      {
        return symbol_type (token::AFTER, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SOMETIMES (location_type l)
      {
        return symbol_type (token::SOMETIMES, std::move (l));
      }
#else
      static
      symbol_type
      make_SOMETIMES (const location_type& l)
      {
        return symbol_type (token::SOMETIMES, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ALWAYS (location_type l)
      {
        return symbol_type (token::ALWAYS, std::move (l));
      }
#else
      static
      symbol_type
      make_ALWAYS (const location_type& l)
      {
        return symbol_type (token::ALWAYS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FUN (location_type l)
      {
        return symbol_type (token::FUN, std::move (l));
      }
#else
      static
      symbol_type
      make_FUN (const location_type& l)
      {
        return symbol_type (token::FUN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PRED (location_type l)
      {
        return symbol_type (token::PRED, std::move (l));
      }
#else
      static
      symbol_type
      make_PRED (const location_type& l)
      {
        return symbol_type (token::PRED, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FACT (location_type l)
      {
        return symbol_type (token::FACT, std::move (l));
      }
#else
      static
      symbol_type
      make_FACT (const location_type& l)
      {
        return symbol_type (token::FACT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SIG (location_type l)
      {
        return symbol_type (token::SIG, std::move (l));
      }
#else
      static
      symbol_type
      make_SIG (const location_type& l)
      {
        return symbol_type (token::SIG, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMICOLUMN (location_type l)
      {
        return symbol_type (token::SEMICOLUMN, std::move (l));
      }
#else
      static
      symbol_type
      make_SEMICOLUMN (const location_type& l)
      {
        return symbol_type (token::SEMICOLUMN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN (location_type l)
      {
        return symbol_type (token::ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN (const location_type& l)
      {
        return symbol_type (token::ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LPAREN (location_type l)
      {
        return symbol_type (token::LPAREN, std::move (l));
      }
#else
      static
      symbol_type
      make_LPAREN (const location_type& l)
      {
        return symbol_type (token::LPAREN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RPAREN (location_type l)
      {
        return symbol_type (token::RPAREN, std::move (l));
      }
#else
      static
      symbol_type
      make_RPAREN (const location_type& l)
      {
        return symbol_type (token::RPAREN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LCURLY (location_type l)
      {
        return symbol_type (token::LCURLY, std::move (l));
      }
#else
      static
      symbol_type
      make_LCURLY (const location_type& l)
      {
        return symbol_type (token::LCURLY, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RCURLY (location_type l)
      {
        return symbol_type (token::RCURLY, std::move (l));
      }
#else
      static
      symbol_type
      make_RCURLY (const location_type& l)
      {
        return symbol_type (token::RCURLY, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DISJ (location_type l)
      {
        return symbol_type (token::DISJ, std::move (l));
      }
#else
      static
      symbol_type
      make_DISJ (const location_type& l)
      {
        return symbol_type (token::DISJ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BAR (location_type l)
      {
        return symbol_type (token::BAR, std::move (l));
      }
#else
      static
      symbol_type
      make_BAR (const location_type& l)
      {
        return symbol_type (token::BAR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LET (location_type l)
      {
        return symbol_type (token::LET, std::move (l));
      }
#else
      static
      symbol_type
      make_LET (const location_type& l)
      {
        return symbol_type (token::LET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ALLQ (location_type l)
      {
        return symbol_type (token::ALLQ, std::move (l));
      }
#else
      static
      symbol_type
      make_ALLQ (const location_type& l)
      {
        return symbol_type (token::ALLQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SUMQ (location_type l)
      {
        return symbol_type (token::SUMQ, std::move (l));
      }
#else
      static
      symbol_type
      make_SUMQ (const location_type& l)
      {
        return symbol_type (token::SUMQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOQ (location_type l)
      {
        return symbol_type (token::NOQ, std::move (l));
      }
#else
      static
      symbol_type
      make_NOQ (const location_type& l)
      {
        return symbol_type (token::NOQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LONEQ (location_type l)
      {
        return symbol_type (token::LONEQ, std::move (l));
      }
#else
      static
      symbol_type
      make_LONEQ (const location_type& l)
      {
        return symbol_type (token::LONEQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SOMEQ (location_type l)
      {
        return symbol_type (token::SOMEQ, std::move (l));
      }
#else
      static
      symbol_type
      make_SOMEQ (const location_type& l)
      {
        return symbol_type (token::SOMEQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ONEQ (location_type l)
      {
        return symbol_type (token::ONEQ, std::move (l));
      }
#else
      static
      symbol_type
      make_ONEQ (const location_type& l)
      {
        return symbol_type (token::ONEQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OR (location_type l)
      {
        return symbol_type (token::OR, std::move (l));
      }
#else
      static
      symbol_type
      make_OR (const location_type& l)
      {
        return symbol_type (token::OR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IFF (location_type l)
      {
        return symbol_type (token::IFF, std::move (l));
      }
#else
      static
      symbol_type
      make_IFF (const location_type& l)
      {
        return symbol_type (token::IFF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IMPLIES (location_type l)
      {
        return symbol_type (token::IMPLIES, std::move (l));
      }
#else
      static
      symbol_type
      make_IMPLIES (const location_type& l)
      {
        return symbol_type (token::IMPLIES, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELSE (location_type l)
      {
        return symbol_type (token::ELSE, std::move (l));
      }
#else
      static
      symbol_type
      make_ELSE (const location_type& l)
      {
        return symbol_type (token::ELSE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AND (location_type l)
      {
        return symbol_type (token::AND, std::move (l));
      }
#else
      static
      symbol_type
      make_AND (const location_type& l)
      {
        return symbol_type (token::AND, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOT (location_type l)
      {
        return symbol_type (token::NOT, std::move (l));
      }
#else
      static
      symbol_type
      make_NOT (const location_type& l)
      {
        return symbol_type (token::NOT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IN (location_type l)
      {
        return symbol_type (token::IN, std::move (l));
      }
#else
      static
      symbol_type
      make_IN (const location_type& l)
      {
        return symbol_type (token::IN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQUALS (location_type l)
      {
        return symbol_type (token::EQUALS, std::move (l));
      }
#else
      static
      symbol_type
      make_EQUALS (const location_type& l)
      {
        return symbol_type (token::EQUALS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LT (location_type l)
      {
        return symbol_type (token::LT, std::move (l));
      }
#else
      static
      symbol_type
      make_LT (const location_type& l)
      {
        return symbol_type (token::LT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GT (location_type l)
      {
        return symbol_type (token::GT, std::move (l));
      }
#else
      static
      symbol_type
      make_GT (const location_type& l)
      {
        return symbol_type (token::GT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LTE (location_type l)
      {
        return symbol_type (token::LTE, std::move (l));
      }
#else
      static
      symbol_type
      make_LTE (const location_type& l)
      {
        return symbol_type (token::LTE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GTE (location_type l)
      {
        return symbol_type (token::GTE, std::move (l));
      }
#else
      static
      symbol_type
      make_GTE (const location_type& l)
      {
        return symbol_type (token::GTE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOTIN (location_type l)
      {
        return symbol_type (token::NOTIN, std::move (l));
      }
#else
      static
      symbol_type
      make_NOTIN (const location_type& l)
      {
        return symbol_type (token::NOTIN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOTEQUALS (location_type l)
      {
        return symbol_type (token::NOTEQUALS, std::move (l));
      }
#else
      static
      symbol_type
      make_NOTEQUALS (const location_type& l)
      {
        return symbol_type (token::NOTEQUALS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOTLT (location_type l)
      {
        return symbol_type (token::NOTLT, std::move (l));
      }
#else
      static
      symbol_type
      make_NOTLT (const location_type& l)
      {
        return symbol_type (token::NOTLT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOTGT (location_type l)
      {
        return symbol_type (token::NOTGT, std::move (l));
      }
#else
      static
      symbol_type
      make_NOTGT (const location_type& l)
      {
        return symbol_type (token::NOTGT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOTLTE (location_type l)
      {
        return symbol_type (token::NOTLTE, std::move (l));
      }
#else
      static
      symbol_type
      make_NOTLTE (const location_type& l)
      {
        return symbol_type (token::NOTLTE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOTGTE (location_type l)
      {
        return symbol_type (token::NOTGTE, std::move (l));
      }
#else
      static
      symbol_type
      make_NOTGTE (const location_type& l)
      {
        return symbol_type (token::NOTGTE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SET (location_type l)
      {
        return symbol_type (token::SET, std::move (l));
      }
#else
      static
      symbol_type
      make_SET (const location_type& l)
      {
        return symbol_type (token::SET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ONE (location_type l)
      {
        return symbol_type (token::ONE, std::move (l));
      }
#else
      static
      symbol_type
      make_ONE (const location_type& l)
      {
        return symbol_type (token::ONE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LONE (location_type l)
      {
        return symbol_type (token::LONE, std::move (l));
      }
#else
      static
      symbol_type
      make_LONE (const location_type& l)
      {
        return symbol_type (token::LONE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SOME (location_type l)
      {
        return symbol_type (token::SOME, std::move (l));
      }
#else
      static
      symbol_type
      make_SOME (const location_type& l)
      {
        return symbol_type (token::SOME, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NO (location_type l)
      {
        return symbol_type (token::NO, std::move (l));
      }
#else
      static
      symbol_type
      make_NO (const location_type& l)
      {
        return symbol_type (token::NO, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEQ (location_type l)
      {
        return symbol_type (token::SEQ, std::move (l));
      }
#else
      static
      symbol_type
      make_SEQ (const location_type& l)
      {
        return symbol_type (token::SEQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UNION (location_type l)
      {
        return symbol_type (token::UNION, std::move (l));
      }
#else
      static
      symbol_type
      make_UNION (const location_type& l)
      {
        return symbol_type (token::UNION, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SUBTRACTION (location_type l)
      {
        return symbol_type (token::SUBTRACTION, std::move (l));
      }
#else
      static
      symbol_type
      make_SUBTRACTION (const location_type& l)
      {
        return symbol_type (token::SUBTRACTION, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CARD (location_type l)
      {
        return symbol_type (token::CARD, std::move (l));
      }
#else
      static
      symbol_type
      make_CARD (const location_type& l)
      {
        return symbol_type (token::CARD, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OVERRIDE (location_type l)
      {
        return symbol_type (token::OVERRIDE, std::move (l));
      }
#else
      static
      symbol_type
      make_OVERRIDE (const location_type& l)
      {
        return symbol_type (token::OVERRIDE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INTERSECTION (location_type l)
      {
        return symbol_type (token::INTERSECTION, std::move (l));
      }
#else
      static
      symbol_type
      make_INTERSECTION (const location_type& l)
      {
        return symbol_type (token::INTERSECTION, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SET_ARROW_SET (location_type l)
      {
        return symbol_type (token::SET_ARROW_SET, std::move (l));
      }
#else
      static
      symbol_type
      make_SET_ARROW_SET (const location_type& l)
      {
        return symbol_type (token::SET_ARROW_SET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ONE_ARROW_SET (location_type l)
      {
        return symbol_type (token::ONE_ARROW_SET, std::move (l));
      }
#else
      static
      symbol_type
      make_ONE_ARROW_SET (const location_type& l)
      {
        return symbol_type (token::ONE_ARROW_SET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LONE_ARROW_SET (location_type l)
      {
        return symbol_type (token::LONE_ARROW_SET, std::move (l));
      }
#else
      static
      symbol_type
      make_LONE_ARROW_SET (const location_type& l)
      {
        return symbol_type (token::LONE_ARROW_SET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SOME_ARROW_SET (location_type l)
      {
        return symbol_type (token::SOME_ARROW_SET, std::move (l));
      }
#else
      static
      symbol_type
      make_SOME_ARROW_SET (const location_type& l)
      {
        return symbol_type (token::SOME_ARROW_SET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SET_ARROW_ONE (location_type l)
      {
        return symbol_type (token::SET_ARROW_ONE, std::move (l));
      }
#else
      static
      symbol_type
      make_SET_ARROW_ONE (const location_type& l)
      {
        return symbol_type (token::SET_ARROW_ONE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ONE_ARROW_ONE (location_type l)
      {
        return symbol_type (token::ONE_ARROW_ONE, std::move (l));
      }
#else
      static
      symbol_type
      make_ONE_ARROW_ONE (const location_type& l)
      {
        return symbol_type (token::ONE_ARROW_ONE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LONE_ARROW_ONE (location_type l)
      {
        return symbol_type (token::LONE_ARROW_ONE, std::move (l));
      }
#else
      static
      symbol_type
      make_LONE_ARROW_ONE (const location_type& l)
      {
        return symbol_type (token::LONE_ARROW_ONE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SOME_ARROW_ONE (location_type l)
      {
        return symbol_type (token::SOME_ARROW_ONE, std::move (l));
      }
#else
      static
      symbol_type
      make_SOME_ARROW_ONE (const location_type& l)
      {
        return symbol_type (token::SOME_ARROW_ONE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SET_ARROW_LONE (location_type l)
      {
        return symbol_type (token::SET_ARROW_LONE, std::move (l));
      }
#else
      static
      symbol_type
      make_SET_ARROW_LONE (const location_type& l)
      {
        return symbol_type (token::SET_ARROW_LONE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ONE_ARROW_LONE (location_type l)
      {
        return symbol_type (token::ONE_ARROW_LONE, std::move (l));
      }
#else
      static
      symbol_type
      make_ONE_ARROW_LONE (const location_type& l)
      {
        return symbol_type (token::ONE_ARROW_LONE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LONE_ARROW_LONE (location_type l)
      {
        return symbol_type (token::LONE_ARROW_LONE, std::move (l));
      }
#else
      static
      symbol_type
      make_LONE_ARROW_LONE (const location_type& l)
      {
        return symbol_type (token::LONE_ARROW_LONE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SOME_ARROW_LONE (location_type l)
      {
        return symbol_type (token::SOME_ARROW_LONE, std::move (l));
      }
#else
      static
      symbol_type
      make_SOME_ARROW_LONE (const location_type& l)
      {
        return symbol_type (token::SOME_ARROW_LONE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SET_ARROW_SOME (location_type l)
      {
        return symbol_type (token::SET_ARROW_SOME, std::move (l));
      }
#else
      static
      symbol_type
      make_SET_ARROW_SOME (const location_type& l)
      {
        return symbol_type (token::SET_ARROW_SOME, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ONE_ARROW_SOME (location_type l)
      {
        return symbol_type (token::ONE_ARROW_SOME, std::move (l));
      }
#else
      static
      symbol_type
      make_ONE_ARROW_SOME (const location_type& l)
      {
        return symbol_type (token::ONE_ARROW_SOME, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LONE_ARROW_SOME (location_type l)
      {
        return symbol_type (token::LONE_ARROW_SOME, std::move (l));
      }
#else
      static
      symbol_type
      make_LONE_ARROW_SOME (const location_type& l)
      {
        return symbol_type (token::LONE_ARROW_SOME, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SOME_ARROW_SOME (location_type l)
      {
        return symbol_type (token::SOME_ARROW_SOME, std::move (l));
      }
#else
      static
      symbol_type
      make_SOME_ARROW_SOME (const location_type& l)
      {
        return symbol_type (token::SOME_ARROW_SOME, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SET_ARROW (location_type l)
      {
        return symbol_type (token::SET_ARROW, std::move (l));
      }
#else
      static
      symbol_type
      make_SET_ARROW (const location_type& l)
      {
        return symbol_type (token::SET_ARROW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ONE_ARROW (location_type l)
      {
        return symbol_type (token::ONE_ARROW, std::move (l));
      }
#else
      static
      symbol_type
      make_ONE_ARROW (const location_type& l)
      {
        return symbol_type (token::ONE_ARROW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LONE_ARROW (location_type l)
      {
        return symbol_type (token::LONE_ARROW, std::move (l));
      }
#else
      static
      symbol_type
      make_LONE_ARROW (const location_type& l)
      {
        return symbol_type (token::LONE_ARROW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SOME_ARROW (location_type l)
      {
        return symbol_type (token::SOME_ARROW, std::move (l));
      }
#else
      static
      symbol_type
      make_SOME_ARROW (const location_type& l)
      {
        return symbol_type (token::SOME_ARROW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARROW_SET (location_type l)
      {
        return symbol_type (token::ARROW_SET, std::move (l));
      }
#else
      static
      symbol_type
      make_ARROW_SET (const location_type& l)
      {
        return symbol_type (token::ARROW_SET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARROW_ONE (location_type l)
      {
        return symbol_type (token::ARROW_ONE, std::move (l));
      }
#else
      static
      symbol_type
      make_ARROW_ONE (const location_type& l)
      {
        return symbol_type (token::ARROW_ONE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARROW_LONE (location_type l)
      {
        return symbol_type (token::ARROW_LONE, std::move (l));
      }
#else
      static
      symbol_type
      make_ARROW_LONE (const location_type& l)
      {
        return symbol_type (token::ARROW_LONE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARROW_SOME (location_type l)
      {
        return symbol_type (token::ARROW_SOME, std::move (l));
      }
#else
      static
      symbol_type
      make_ARROW_SOME (const location_type& l)
      {
        return symbol_type (token::ARROW_SOME, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARROW (location_type l)
      {
        return symbol_type (token::ARROW, std::move (l));
      }
#else
      static
      symbol_type
      make_ARROW (const location_type& l)
      {
        return symbol_type (token::ARROW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARROW_PREC (location_type l)
      {
        return symbol_type (token::ARROW_PREC, std::move (l));
      }
#else
      static
      symbol_type
      make_ARROW_PREC (const location_type& l)
      {
        return symbol_type (token::ARROW_PREC, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RANGE_R (location_type l)
      {
        return symbol_type (token::RANGE_R, std::move (l));
      }
#else
      static
      symbol_type
      make_RANGE_R (const location_type& l)
      {
        return symbol_type (token::RANGE_R, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOMAIN_R (location_type l)
      {
        return symbol_type (token::DOMAIN_R, std::move (l));
      }
#else
      static
      symbol_type
      make_DOMAIN_R (const location_type& l)
      {
        return symbol_type (token::DOMAIN_R, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LSQUARE (location_type l)
      {
        return symbol_type (token::LSQUARE, std::move (l));
      }
#else
      static
      symbol_type
      make_LSQUARE (const location_type& l)
      {
        return symbol_type (token::LSQUARE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RSQUARE (location_type l)
      {
        return symbol_type (token::RSQUARE, std::move (l));
      }
#else
      static
      symbol_type
      make_RSQUARE (const location_type& l)
      {
        return symbol_type (token::RSQUARE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BOX (location_type l)
      {
        return symbol_type (token::BOX, std::move (l));
      }
#else
      static
      symbol_type
      make_BOX (const location_type& l)
      {
        return symbol_type (token::BOX, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT (location_type l)
      {
        return symbol_type (token::DOT, std::move (l));
      }
#else
      static
      symbol_type
      make_DOT (const location_type& l)
      {
        return symbol_type (token::DOT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TRANSP (location_type l)
      {
        return symbol_type (token::TRANSP, std::move (l));
      }
#else
      static
      symbol_type
      make_TRANSP (const location_type& l)
      {
        return symbol_type (token::TRANSP, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_REFL (location_type l)
      {
        return symbol_type (token::REFL, std::move (l));
      }
#else
      static
      symbol_type
      make_REFL (const location_type& l)
      {
        return symbol_type (token::REFL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TRAN_CLO (location_type l)
      {
        return symbol_type (token::TRAN_CLO, std::move (l));
      }
#else
      static
      symbol_type
      make_TRAN_CLO (const location_type& l)
      {
        return symbol_type (token::TRAN_CLO, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_THIS (location_type l)
      {
        return symbol_type (token::THIS, std::move (l));
      }
#else
      static
      symbol_type
      make_THIS (const location_type& l)
      {
        return symbol_type (token::THIS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AT (location_type l)
      {
        return symbol_type (token::AT, std::move (l));
      }
#else
      static
      symbol_type
      make_AT (const location_type& l)
      {
        return symbol_type (token::AT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FORSLASH (location_type l)
      {
        return symbol_type (token::FORSLASH, std::move (l));
      }
#else
      static
      symbol_type
      make_FORSLASH (const location_type& l)
      {
        return symbol_type (token::FORSLASH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NAME (std::string v, location_type l)
      {
        return symbol_type (token::NAME, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NAME (const std::string& v, const location_type& l)
      {
        return symbol_type (token::NAME, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COLUMN (location_type l)
      {
        return symbol_type (token::COLUMN, std::move (l));
      }
#else
      static
      symbol_type
      make_COLUMN (const location_type& l)
      {
        return symbol_type (token::COLUMN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NONE (location_type l)
      {
        return symbol_type (token::NONE, std::move (l));
      }
#else
      static
      symbol_type
      make_NONE (const location_type& l)
      {
        return symbol_type (token::NONE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UNIV (location_type l)
      {
        return symbol_type (token::UNIV, std::move (l));
      }
#else
      static
      symbol_type
      make_UNIV (const location_type& l)
      {
        return symbol_type (token::UNIV, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IDEN (location_type l)
      {
        return symbol_type (token::IDEN, std::move (l));
      }
#else
      static
      symbol_type
      make_IDEN (const location_type& l)
      {
        return symbol_type (token::IDEN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT (std::string v, location_type l)
      {
        return symbol_type (token::INT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::INT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMMA (location_type l)
      {
        return symbol_type (token::COMMA, std::move (l));
      }
#else
      static
      symbol_type
      make_COMMA (const location_type& l)
      {
        return symbol_type (token::COMMA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UNARY_PREC (location_type l)
      {
        return symbol_type (token::UNARY_PREC, std::move (l));
      }
#else
      static
      symbol_type
      make_UNARY_PREC (const location_type& l)
      {
        return symbol_type (token::UNARY_PREC, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MULTORNO (location_type l)
      {
        return symbol_type (token::MULTORNO, std::move (l));
      }
#else
      static
      symbol_type
      make_MULTORNO (const location_type& l)
      {
        return symbol_type (token::MULTORNO, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NEWLINE (location_type l)
      {
        return symbol_type (token::NEWLINE, std::move (l));
      }
#else
      static
      symbol_type
      make_NEWLINE (const location_type& l)
      {
        return symbol_type (token::NEWLINE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_actions (location_type l)
      {
        return symbol_type (token::actions, std::move (l));
      }
#else
      static
      symbol_type
      make_actions (const location_type& l)
      {
        return symbol_type (token::actions, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXPRESSION (location_type l)
      {
        return symbol_type (token::EXPRESSION, std::move (l));
      }
#else
      static
      symbol_type
      make_EXPRESSION (const location_type& l)
      {
        return symbol_type (token::EXPRESSION, l);
      }
#endif


  private:
    /// This class is not copiable.
    MC_Parser (const MC_Parser&);
    MC_Parser& operator= (const MC_Parser&);

    /// State numbers.
    typedef int state_type;

    /// Generate an error message.
    /// \param yystate   the state where the error occurred.
    /// \param yyla      the lookahead token.
    virtual std::string yysyntax_error_ (state_type yystate,
                                         const symbol_type& yyla) const;

    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue);

    static const short yypact_ninf_;
    static const short yytable_ninf_;

    /// Convert a scanner token number \a t to a symbol number.
    static token_number_type yytranslate_ (int t);

    // Tables.
  // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
  // STATE-NUM.
  static const short yypact_[];

  // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
  // Performed when YYTABLE does not specify something else to do.  Zero
  // means the default is an error.
  static const unsigned char yydefact_[];

  // YYPGOTO[NTERM-NUM].
  static const short yypgoto_[];

  // YYDEFGOTO[NTERM-NUM].
  static const short yydefgoto_[];

  // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
  // positive, shift that token.  If negative, reduce the rule whose
  // number is the opposite.  If YYTABLE_NINF, syntax error.
  static const short yytable_[];

  static const short yycheck_[];

  // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
  // symbol of state STATE-NUM.
  static const unsigned char yystos_[];

  // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
  static const unsigned char yyr1_[];

  // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
  static const unsigned char yyr2_[];


#if YYDEBUG
    /// For a symbol, its name in clear.
    static const char* const yytname_[];

  // YYRLINE[YYN] -- Source line where rule number YYN was defined.
  static const unsigned short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r);
    /// Print the state stack on the debug stream.
    virtual void yystack_print_ ();

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol type, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol type as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol type from \a that.
      void move (by_state& that);

      /// The (internal) type number (corresponding to \a state).
      /// \a empty_symbol when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      enum { empty_state = -1 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::reverse_iterator iterator;
      typedef typename S::const_reverse_iterator const_iterator;
      typedef typename S::size_type size_type;

      stack (size_type n = 200)
        : seq_ (n)
      {}

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (size_type i)
      {
        return seq_[size () - 1 - i];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (int i)
      {
        return operator[] (size_type (i));
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (size_type i) const
      {
        return seq_[size () - 1 - i];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (int i) const
      {
        return operator[] (size_type (i));
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (int n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      size_type
      size () const YY_NOEXCEPT
      {
        return seq_.size ();
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.rbegin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.rend ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, int range)
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (int i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        int range_;
      };

    private:
      stack (const stack&);
      stack& operator= (const stack&);
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1);

    /// Constants.
    enum
    {
      yyeof_ = 0,
      yylast_ = 1745,     ///< Last index in yytable_.
      yynnts_ = 95,  ///< Number of nonterminal symbols.
      yyfinal_ = 9, ///< Termination state number.
      yyterror_ = 1,
      yyerrcode_ = 256,
      yyntokens_ = 120  ///< Number of tokens.
    };


    // User arguments.
    MC_Scanner  &scanner;
    MC_Driver  &driver;
  };


#line 5 "mc_parser.yy"
} // MC
#line 3069 "/home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.hh"





#endif // !YY_YY_HOME_SINAN_REPOS_RESEARCH_ALLOY_BISON_PARSER_BUILD_MC_PARSER_TAB_HH_INCLUDED
