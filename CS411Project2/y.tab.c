/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "CS411P2Yacc.y" /* yacc.c:339  */

#include <stdio.h>
int yylex();
void yyerror(char *s);

#line 72 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _void = 258,
    _id = 259,
    _leftparen = 260,
    _rightparen = 261,
    _leftbrace = 262,
    _rightbrace = 263,
    _leftbracket = 264,
    _rightbracket = 265,
    _semicolon = 266,
    _boolean = 267,
    _double = 268,
    _int = 269,
    _string = 270,
    _class = 271,
    _implements = 272,
    _interface = 273,
    _if = 274,
    _else = 275,
    _break = 276,
    _extends = 277,
    _for = 278,
    _newarray = 279,
    _println = 280,
    _readln = 281,
    _return = 282,
    _while = 283,
    _comma = 284,
    _period = 285,
    _intconstant = 286,
    _doubleconstant = 287,
    _stringconstant = 288,
    _booleanconstant = 289,
    _assignop = 290,
    _or = 291,
    _and = 292,
    _equal = 293,
    _notequal = 294,
    _less = 295,
    _lessequal = 296,
    _greater = 297,
    _greaterequal = 298,
    _plus = 299,
    _minus = 300,
    _multiplication = 301,
    _division = 302,
    _mod = 303,
    _not = 304,
    IFOnly = 305
  };
#endif
/* Tokens.  */
#define _void 258
#define _id 259
#define _leftparen 260
#define _rightparen 261
#define _leftbrace 262
#define _rightbrace 263
#define _leftbracket 264
#define _rightbracket 265
#define _semicolon 266
#define _boolean 267
#define _double 268
#define _int 269
#define _string 270
#define _class 271
#define _implements 272
#define _interface 273
#define _if 274
#define _else 275
#define _break 276
#define _extends 277
#define _for 278
#define _newarray 279
#define _println 280
#define _readln 281
#define _return 282
#define _while 283
#define _comma 284
#define _period 285
#define _intconstant 286
#define _doubleconstant 287
#define _stringconstant 288
#define _booleanconstant 289
#define _assignop 290
#define _or 291
#define _and 292
#define _equal 293
#define _notequal 294
#define _less 295
#define _lessequal 296
#define _greater 297
#define _greaterequal 298
#define _plus 299
#define _minus 300
#define _multiplication 301
#define _division 302
#define _mod 303
#define _not 304
#define IFOnly 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 223 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   323

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    24,    24,    28,    29,    32,    33,    34,    35,    38,
      39,    42,    45,    48,    49,    50,    51,    52,    53,    56,
      57,    60,    61,    65,    66,    69,    72,    73,    76,    77,
      80,    81,    84,    85,    88,    89,    92,    95,    96,    99,
     100,   103,   106,   107,   110,   111,   112,   113,   114,   115,
     116,   117,   120,   121,   124,   125,   128,   131,   134,   137,
     140,   143,   144,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   173,   174,   177,   178,   181,
     182,   185,   188,   189,   192,   193,   194,   195
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_void", "_id", "_leftparen",
  "_rightparen", "_leftbrace", "_rightbrace", "_leftbracket",
  "_rightbracket", "_semicolon", "_boolean", "_double", "_int", "_string",
  "_class", "_implements", "_interface", "_if", "_else", "_break",
  "_extends", "_for", "_newarray", "_println", "_readln", "_return",
  "_while", "_comma", "_period", "_intconstant", "_doubleconstant",
  "_stringconstant", "_booleanconstant", "_assignop", "_or", "_and",
  "_equal", "_notequal", "_less", "_lessequal", "_greater",
  "_greaterequal", "_plus", "_minus", "_multiplication", "_division",
  "_mod", "_not", "IFOnly", "\"()\"", "$accept", "Program", "Decls",
  "Decl", "VariableDecls", "VariableDecl", "Variable", "Type",
  "FunctionDecl", "Formals", "Variables", "ClassDecl", "extend",
  "implement", "Fields", "Field", "ids", "InterfaceDecl", "Prototypes",
  "Prototype", "StmtBlock", "Stmts", "Stmt", "ExprA", "IfStmt",
  "WhileStmt", "ForStmt", "BreakStmt", "ReturnStmt", "PrintStmt", "Exprs",
  "Expr", "Lvalue", "LvalueX", "Call", "ProdPDANDID", "Actuals",
  "Constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -96

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-96)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     218,     2,   -96,   -96,   -96,   -96,   -96,    11,    19,    32,
     218,   -96,   -96,    22,    12,   -96,   -96,   -96,    40,    27,
      44,   -96,   -96,   -96,    73,    74,    68,    81,    70,   -96,
      68,   -96,   -96,    13,    82,    71,   -96,    95,    94,   212,
      99,   -96,   107,    68,   -96,    86,   -96,   118,   -96,    15,
     -96,   107,   -96,   -96,   -96,   120,   276,   121,   122,   -96,
      68,   -96,   -96,   -96,   -96,   -96,    68,    68,   -96,    85,
     119,   123,     8,     3,   -96,   126,   117,   127,   128,   131,
      87,     3,   141,   -96,   -96,   -96,   -96,     3,     3,   -96,
     -96,   140,   -96,   -96,   -96,   -96,   -96,   -96,   230,    -7,
     -96,   -96,   142,   143,     3,   148,   150,   139,     3,   -96,
       3,   125,     3,   -96,   146,     3,   -96,   -96,   -96,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,   129,   -96,   -96,   133,   230,   154,
     -96,     3,   -96,   152,   153,   134,    14,   -96,   165,   255,
     266,   275,   275,    50,    50,    50,    50,    28,    28,   -96,
     -96,   -96,   204,   230,   -96,     3,   -96,   160,   116,     3,
      68,   156,   116,   -96,   230,   -96,   149,   217,    38,   -96,
     -96,   116,     3,   -96,   -96,   162,   116,   -96
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    18,    15,    14,    13,    16,     0,     0,     0,
       2,     3,     5,     0,     0,     6,     7,     8,     0,    26,
       0,     1,     4,    11,    12,     0,    22,     0,    28,    37,
      22,    17,    23,     0,     0,    21,    27,     0,     0,     0,
       0,    12,     0,     0,    34,    29,    30,     0,    36,     0,
      38,     0,     9,    20,    24,     0,     0,     0,     0,    19,
      42,    35,    25,    32,    33,    31,    22,    22,    10,    52,
       0,     0,    85,     0,    41,     0,     0,     0,     0,     0,
       0,    52,     0,    94,    95,    96,    97,     0,     0,    51,
      43,     0,    45,    46,    47,    48,    49,    50,    53,    65,
      66,    64,     0,     0,    92,     0,     0,     0,     0,    58,
      52,     0,     0,    83,     0,     0,    73,    82,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    40,    39,    93,    61,     0,
      91,    92,    67,     0,     0,     0,     0,    59,     0,    81,
      80,    78,    79,    74,    75,    76,    77,    68,    69,    70,
      71,    72,     0,    63,    88,     0,    89,     0,    52,     0,
       0,     0,    52,    87,    62,    90,    54,     0,     0,    60,
      56,    52,    52,    84,    55,     0,    52,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   163,   -96,   -51,   -12,     0,   161,   -26,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -39,   -96,   -95,   -80,   -96,   -96,   -96,   -96,   -96,   -96,
      60,   -62,   -96,   -96,   -96,    84,    33,   -96
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    60,    12,    13,    33,    15,    34,
      35,    16,    28,    38,    56,    65,    45,    17,    39,    50,
      89,    69,    90,    91,    92,    93,    94,    95,    96,    97,
     137,    98,    99,   134,   100,   106,   139,   101
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      14,   114,   132,    53,    40,    63,    18,    72,    73,    68,
      14,   107,    59,   104,    32,    19,    24,    41,    32,    58,
     171,    25,    25,    20,    25,   116,   117,    78,   133,    80,
     144,    54,    21,    23,    83,    84,    85,    86,   105,    49,
      70,    71,   138,   165,   183,    26,   143,    25,    87,    27,
     138,    29,    88,   148,    32,    32,    14,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,     2,   176,   129,   130,   131,   180,    30,   138,
       3,     4,     5,     6,    31,    36,   184,    37,    42,    72,
      73,   187,    52,    74,   127,   128,   129,   130,   131,    44,
      43,    46,   185,   174,    75,    51,    76,   177,    77,    78,
      79,    80,    81,    82,    52,    55,    83,    84,    85,    86,
      72,    73,    57,    52,    61,   102,    66,    67,   109,   103,
      87,   108,   110,   111,    88,    75,   112,    76,   113,    77,
      78,    79,    80,    81,    82,   142,   115,    83,    84,    85,
      86,   118,   140,   135,   136,   141,   145,   147,   168,   105,
     166,    87,   165,   170,   169,    88,   175,   179,   186,   181,
     178,   172,   146,    22,   167,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   173,    47,     2,    64,   164,     0,
      48,     1,     2,     0,     3,     4,     5,     6,   182,     0,
       3,     4,     5,     6,     7,     0,     8,     0,     0,     0,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,     1,
       2,     0,     0,     0,    62,     0,     0,     0,     3,     4,
       5,     6,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   123,   124,   125,   126,   127,
     128,   129,   130,   131
};

static const yytype_int16 yycheck[] =
{
       0,    81,     9,    42,    30,    56,     4,     4,     5,    60,
      10,    73,    51,     5,    26,     4,     4,     4,    30,     4,
       6,     9,     9,     4,     9,    87,    88,    24,    35,    26,
     110,    43,     0,    11,    31,    32,    33,    34,    30,    39,
      66,    67,   104,    29,     6,     5,   108,     9,    45,    22,
     112,     7,    49,   115,    66,    67,    56,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,     4,   168,    46,    47,    48,   172,     5,   141,
      12,    13,    14,    15,    10,     4,   181,    17,     6,     4,
       5,   186,     7,     8,    44,    45,    46,    47,    48,     4,
      29,     7,   182,   165,    19,     6,    21,   169,    23,    24,
      25,    26,    27,    28,     7,    29,    31,    32,    33,    34,
       4,     5,     4,     7,     4,     6,     5,     5,    11,     6,
      45,     5,     5,     5,    49,    19,     5,    21,    51,    23,
      24,    25,    26,    27,    28,     6,     5,    31,    32,    33,
      34,    11,     4,    11,    11,     5,    31,    11,     6,    30,
       6,    45,    29,    29,    11,    49,     6,    11,     6,    20,
     170,     6,   112,    10,   141,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    10,     3,     4,    56,   134,    -1,
       8,     3,     4,    -1,    12,    13,    14,    15,    11,    -1,
      12,    13,    14,    15,    16,    -1,    18,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     3,
       4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    12,    13,    14,    15,    16,    18,    53,
      54,    55,    57,    58,    59,    60,    63,    69,     4,     4,
       4,     0,    55,    11,     4,     9,     5,    22,    64,     7,
       5,    10,    58,    59,    61,    62,     4,    17,    65,    70,
      61,     4,     6,    29,     4,    68,     7,     3,     8,    59,
      71,     6,     7,    72,    58,    29,    66,     4,     4,    72,
      56,     4,     8,    57,    60,    67,     5,     5,    57,    73,
      61,    61,     4,     5,     8,    19,    21,    23,    24,    25,
      26,    27,    28,    31,    32,    33,    34,    45,    49,    72,
      74,    75,    76,    77,    78,    79,    80,    81,    83,    84,
      86,    89,     6,     6,     5,    30,    87,    83,     5,    11,
       5,     5,     5,    51,    75,     5,    83,    83,    11,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     9,    35,    85,    11,    11,    82,    83,    88,
       4,     5,     6,    83,    75,    31,    82,    11,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    87,    29,     6,    88,     6,    11,
      29,     6,     6,    10,    83,     6,    74,    83,    59,    11,
      74,    20,    11,     6,    74,    75,     6,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    55,    55,    56,
      56,    57,    58,    59,    59,    59,    59,    59,    59,    60,
      60,    61,    61,    62,    62,    63,    64,    64,    65,    65,
      66,    66,    67,    67,    68,    68,    69,    70,    70,    71,
      71,    72,    73,    73,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    76,    76,    77,    78,    79,    80,
      81,    82,    82,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    84,    84,    85,    85,    86,
      86,    87,    88,    88,    89,    89,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     0,
       2,     2,     2,     1,     1,     1,     1,     3,     1,     6,
       6,     1,     0,     1,     3,     7,     0,     2,     0,     2,
       0,     2,     1,     1,     1,     3,     5,     0,     2,     6,
       6,     4,     0,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     5,     7,     5,     9,     2,     3,
       5,     1,     3,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     6,     1,     2,     3,     2,     4,
       5,     2,     0,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 24 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 28 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 29 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 32 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 33 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 34 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 35 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 38 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 39 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 42 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 45 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 48 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 49 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 50 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 51 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 52 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 53 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 56 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 57 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 60 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 61 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 65 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 66 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 69 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 72 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 73 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 76 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 77 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 80 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 81 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 84 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 85 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 88 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 89 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 92 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 95 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 96 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 99 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 100 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 103 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 106 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 107 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 110 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 111 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 112 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 113 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 114 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 115 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 116 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 117 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 120 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 121 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 124 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 125 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 128 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 131 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 134 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 137 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 140 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 143 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 144 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 147 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 148 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 149 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 150 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 151 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 152 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 153 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 154 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 155 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 156 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 157 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 158 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 159 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 160 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 161 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 162 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 163 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 164 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 165 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 166 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 167 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 168 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 173 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 174 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 177 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 178 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 181 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 182 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 188 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 189 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 192 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 193 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 194 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 195 "CS411P2Yacc.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2032 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 197 "CS411P2Yacc.y" /* yacc.c:1906  */


int main(){

    yyparse();
    printf("\n");
    return 0;
}

void yyerror (char *s) {fprintf(stderr, "%s\n", s);}

int yywrap (void) {return 1;}









