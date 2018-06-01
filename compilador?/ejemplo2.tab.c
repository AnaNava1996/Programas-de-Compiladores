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
#line 1 "ejemplo2.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include "tabla.h"

Nodo * ini;
Nodo * cab;

int yylex(void);
void yyerror (char *);

#line 78 "ejemplo2.tab.c" /* yacc.c:339  */

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
   by #include "ejemplo2.tab.h".  */
#ifndef YY_YY_EJEMPLO2_TAB_H_INCLUDED
# define YY_YY_EJEMPLO2_TAB_H_INCLUDED
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
    ENTERO = 258,
    DECIMAL = 259,
    TEXTO = 260,
    POTENCIA = 261,
    TIPOVAR = 262,
    NOMBRE = 263
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "ejemplo2.y" /* yacc.c:355  */

	int entero;
	double decimal;
	char *texto;
	//struct nodo *nodito;

#line 134 "ejemplo2.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_EJEMPLO2_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 151 "ejemplo2.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   358

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  20
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  208

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   263

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      16,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    13,     2,     2,
      17,    19,    11,     9,    18,    10,     2,    12,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    15,
       2,    14,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    48,    51,    52,    53,    54,    55,    56,
      57,    61,    62,    63,    64,    65,    66,    67,    68,    70,
      72,    77,    78,    79,    80,    81,    82,    84,    85,    86,
      87,    89,    90,    91,    92,    94,    98,   102,   106,   110,
     115,   119,   123,   127,   131,   136,   140,   144,   148,   152,
     157,   161,   165,   169,   173,   178,   181,   187,   190,   191,
     195,   199,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   223,   225,   227,   229,   231,   235,   243,   245,
     248,   279,   306,   333,   364,   375,   386
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTERO", "DECIMAL", "TEXTO", "POTENCIA",
  "TIPOVAR", "NOMBRE", "'+'", "'-'", "'*'", "'/'", "'%'", "'='", "';'",
  "'\\n'", "'('", "','", "')'", "$accept", "input", "line", "exp_entera",
  "exp_decimal", "exp_pow", "exp_texto", "tipo_var", "nombre_var",
  "declaracion_variable", "sobreescribir_variable", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,    43,
      45,    42,    47,    37,    61,    59,    10,    40,    44,    41
};
# endif

#define YYPACT_NINF -16

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-16)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -16,     5,   -16,   -15,   -16,   -16,   -16,   -16,   -16,   -16,
     296,   -16,   -16,   298,   305,    -3,   312,    -1,   319,    12,
      27,   -16,    -9,    23,    26,   325,   281,   281,   281,   281,
     281,    49,   281,   281,   281,   281,   281,    56,   281,   281,
     281,   296,   296,   296,    59,    62,   281,   281,   296,   296,
      71,   281,    66,    67,   296,   296,   296,   296,    71,   296,
     296,   296,   296,   296,   296,   296,    50,   153,   159,   179,
      50,   153,   159,   179,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   330,   -16,   -16,   -16,    50,   153,   159,
     179,    50,   153,   159,   179,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   335,   -16,   340,   -16,   139,   250,   260,
     270,    50,   153,   159,   179,    50,   153,   159,   179,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   281,    50,   153,   159,
     179,    50,   153,   159,   179,   -16,   -16,   -16,   -16,   -16,
     -16,    71,   -16,   -16,   335,   330,   345,   -16,   -16,    -9,
      23,   179,    -9,    23,   179,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,    -9,    23,   179,    -9,    23,   179,   -16,
     -16,   -16,   -16,   -16,   -16,   285,   169,    -9,    23,   179,
      -9,    23,   179,    71,    71,    71,    71,   335,   330,   345,
     226,    65,    71,    71,    71,    71,    47,    58,    75,   150,
     226,   226,   -16,   -16,   -16,   -16,   -16,   -16
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    11,    21,    58,    57,    88,    89,
       0,     4,     3,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    12,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    31,    62,    38,
      16,    34,    66,    43,    14,    32,    70,    53,    15,    33,
      74,    48,    17,     0,    78,    19,     5,    27,    23,    63,
      36,    30,    26,    67,    41,    28,    24,    71,    51,    29,
      25,    75,    46,     0,    79,     0,     6,     0,     0,     0,
       0,    64,    65,    59,    82,    68,    69,    60,    84,    72,
      73,    76,    77,    80,    81,     7,     0,    37,    35,    83,
      39,    42,    40,    85,    44,    52,    50,    54,    47,    45,
      49,     0,    18,    20,    94,    95,    96,     8,     9,    13,
      31,    38,    16,    34,    43,    14,    32,    53,    15,    33,
      48,    17,    19,    27,    23,    36,    30,    26,    41,    28,
      24,    51,    29,    25,    46,     0,     0,    37,    35,    39,
      42,    40,    44,     0,     0,     0,     0,    90,    91,    92,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    16,    14,    15,    55,    56,    61,    86
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -16,   -16,   -16,   -10,   167,   193,   107,   -16,    63,   -16,
     -16
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    12,    13,    83,    15,    16,    17,   191,    19,
      20
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      22,    21,    56,    57,    58,     2,     3,     9,     4,     5,
       6,     7,     8,     9,    38,    10,    66,    70,    74,    78,
      82,    11,    87,    91,    95,    99,   103,    52,   107,   111,
     115,   119,   121,   123,    61,    62,   127,   131,   135,   138,
     142,   144,    53,    63,   149,   152,   155,   158,   161,   163,
     166,   169,   172,   175,   177,   180,   192,   193,   194,   195,
      58,    28,    29,    30,    18,    86,   204,   192,   193,   194,
     195,    58,   106,    25,     4,   125,   126,   205,    50,     9,
      45,   141,   147,   148,   192,   193,   194,   195,    58,    69,
      73,    77,    81,    85,   206,    90,    94,    98,   102,   105,
       0,   110,   114,   118,    25,    25,    25,     0,     0,   130,
     134,   137,   140,   143,   105,     0,   187,   151,   154,   157,
     160,   162,   165,   168,   171,   174,    25,   179,   182,     0,
       0,   190,     0,    68,    72,    76,    80,    84,     0,    89,
      93,    97,   101,   104,     0,   109,   113,   117,    26,    27,
      28,    29,    30,   129,   133,     0,     0,   183,   146,   192,
     193,   194,   195,    58,    34,    35,    36,     0,    14,   207,
      41,    42,    43,   196,   197,   198,   199,    23,    59,    60,
      61,    62,   200,   201,   202,   203,     0,   184,     0,   105,
      48,    49,    50,    67,    71,    75,    79,     0,     0,    88,
      92,    96,   100,    24,     0,   108,   112,   116,   120,   122,
     124,     0,     0,   128,   132,   136,   139,     0,   145,     0,
       0,   150,   153,   156,   159,     0,   164,   167,   170,   173,
     176,   178,   181,   189,    24,    24,    24,   194,   195,    58,
       0,    24,    24,     0,     0,     0,     0,    24,    24,    24,
      24,     0,    24,    24,    24,    24,    24,    24,    24,    32,
      33,    34,    35,    36,     0,     0,     0,     0,   184,    39,
      40,    41,    42,    43,     0,     0,     0,     0,   185,    46,
      47,    48,    49,    50,     4,     5,     6,     7,   186,     9,
       0,    10,     0,   188,    54,    55,    56,    57,    58,     4,
       5,     0,     7,   183,     9,     0,    10,    26,    27,    28,
      29,    30,     0,    31,    32,    33,    34,    35,    36,     0,
      37,    39,    40,    41,    42,    43,     0,    44,    46,    47,
      48,    49,    50,    51,    64,    65,    48,    49,    50,    32,
      33,    34,    35,    36,    26,    27,    28,    29,    30,    46,
      47,    48,    49,    50,    39,    40,    41,    42,    43
};

static const yytype_int16 yycheck[] =
{
      10,    16,    11,    12,    13,     0,     1,     8,     3,     4,
       5,     6,     7,     8,    17,    10,    26,    27,    28,    29,
      30,    16,    32,    33,    34,    35,    36,    15,    38,    39,
      40,    41,    42,    43,    11,    12,    46,    47,    48,    49,
      50,    51,    15,    17,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     9,    10,    11,    12,
      13,    11,    12,    13,     1,    16,    19,     9,    10,    11,
      12,    13,    16,    10,     3,    16,    14,    19,    13,     8,
      17,    10,    16,    16,     9,    10,    11,    12,    13,    26,
      27,    28,    29,    30,    19,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    -1,    -1,    46,
      47,    48,    49,    50,    51,    -1,   126,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,   141,    -1,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,     9,    10,
      11,    12,    13,    46,    47,    -1,    -1,    18,    51,     9,
      10,    11,    12,    13,    11,    12,    13,    -1,     1,    19,
      11,    12,    13,   183,   184,   185,   186,    10,     9,    10,
      11,    12,   192,   193,   194,   195,    -1,    18,    -1,   126,
      11,    12,    13,    26,    27,    28,    29,    -1,    -1,    32,
      33,    34,    35,    10,    -1,    38,    39,    40,    41,    42,
      43,    -1,    -1,    46,    47,    48,    49,    -1,    51,    -1,
      -1,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,   126,    41,    42,    43,    11,    12,    13,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    18,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    18,     9,
      10,    11,    12,    13,     3,     4,     5,     6,    18,     8,
      -1,    10,    -1,   126,     9,    10,    11,    12,    13,     3,
       4,    -1,     6,    18,     8,    -1,    10,     9,    10,    11,
      12,    13,    -1,    15,     9,    10,    11,    12,    13,    -1,
      15,     9,    10,    11,    12,    13,    -1,    15,     9,    10,
      11,    12,    13,    14,     9,    10,    11,    12,    13,     9,
      10,    11,    12,    13,     9,    10,    11,    12,    13,     9,
      10,    11,    12,    13,     9,    10,    11,    12,    13
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,     0,     1,     3,     4,     5,     6,     7,     8,
      10,    16,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    16,    23,    24,    25,    28,     9,    10,    11,    12,
      13,    15,     9,    10,    11,    12,    13,    15,    17,     9,
      10,    11,    12,    13,    15,    28,     9,    10,    11,    12,
      13,    14,    15,    15,     9,    10,    11,    12,    13,     9,
      10,    11,    12,    17,     9,    10,    23,    24,    26,    28,
      23,    24,    26,    28,    23,    24,    26,    28,    23,    24,
      26,    28,    23,    24,    26,    28,    16,    23,    24,    26,
      28,    23,    24,    26,    28,    23,    24,    26,    28,    23,
      24,    26,    28,    23,    26,    28,    16,    23,    24,    26,
      28,    23,    24,    26,    28,    23,    24,    26,    28,    23,
      24,    23,    24,    23,    24,    16,    14,    23,    24,    26,
      28,    23,    24,    26,    28,    23,    24,    28,    23,    24,
      28,    10,    23,    28,    23,    24,    26,    16,    16,    23,
      24,    28,    23,    24,    28,    23,    24,    28,    23,    24,
      28,    23,    28,    23,    24,    28,    23,    24,    28,    23,
      24,    28,    23,    24,    28,    23,    24,    23,    24,    28,
      23,    24,    28,    18,    18,    18,    18,    23,    24,    26,
      23,    28,     9,    10,    11,    12,    23,    23,    23,    23,
      23,    23,    23,    23,    19,    19,    19,    19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    20,    21,    21,    22,    22,    22,    22,    22,    22,
      22,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    25,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    27,    28,
      29,    29,    29,    29,    30,    30,    30
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     3,     3,     3,     3,     3,
       2,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     6,     6,     1,     1,     3,
       3,     6,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     6,     3,     1,     1,
       4,     4,     4,     2,     3,     3,     3
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
        case 4:
#line 51 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: falta un ;");}
#line 1380 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 52 "ejemplo2.y" /* yacc.c:1646  */
    { printf ("\tresultado: %d\n", (yyvsp[-2].entero)); }
#line 1386 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 53 "ejemplo2.y" /* yacc.c:1646  */
    { printf ("\tresultado: %f\n", (yyvsp[-2].decimal)); }
#line 1392 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 54 "ejemplo2.y" /* yacc.c:1646  */
    { printf ("\tresultado: %s\n", (yyvsp[-2].texto)); }
#line 1398 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 55 "ejemplo2.y" /* yacc.c:1646  */
    {/*{ printf("nueva variable:%s \n",$1);*/ printf("\n");}
#line 1404 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 56 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1410 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 57 "ejemplo2.y" /* yacc.c:1646  */
    { yyerrok;                  }
#line 1416 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 61 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[0].entero); }
#line 1422 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 62 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[0].entero) * (-1);  }
#line 1428 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 63 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) + (yyvsp[0].entero);    }
#line 1434 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 64 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) * (yyvsp[0].entero);    }
#line 1440 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) / (yyvsp[0].entero);    }
#line 1446 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) - (yyvsp[0].entero);    }
#line 1452 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 67 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) % (yyvsp[0].entero);    }
#line 1458 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 68 "ejemplo2.y" /* yacc.c:1646  */
    { if(tipovar((yyvsp[-2].texto),ini)==0) {(yyval.entero)= retornaInt((yyvsp[-2].texto),ini) % (yyvsp[0].entero); }
										else{printf("\tError de sintaxis: el modulo es entre enteros\n");}   }
#line 1465 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 70 "ejemplo2.y" /* yacc.c:1646  */
    { if(tipovar((yyvsp[0].texto),ini)==0) {(yyval.entero)= (yyvsp[-2].entero) % retornaInt((yyvsp[0].texto),ini); } 
										else{printf("\tError de sintaxis: el modulo es entre enteros\n");}  }
#line 1472 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 72 "ejemplo2.y" /* yacc.c:1646  */
    { if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==0)) {(yyval.entero)= retornaInt((yyvsp[-2].texto),ini) % retornaInt((yyvsp[0].texto),ini); }
										else{printf("\tError de sintaxis: el modulo es entre enteros\n");}   }
#line 1479 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 77 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[0].decimal); }
#line 1485 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 78 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[0].decimal) * (-1);  }
#line 1491 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 79 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) + (yyvsp[0].decimal);    }
#line 1497 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 80 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) * (yyvsp[0].decimal);    }
#line 1503 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 81 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) / (yyvsp[0].decimal);    }
#line 1509 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 82 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) - (yyvsp[0].decimal);    }
#line 1515 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 84 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) + (yyvsp[0].entero);    }
#line 1521 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 85 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) * (yyvsp[0].entero);    }
#line 1527 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 86 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) / (yyvsp[0].entero);    }
#line 1533 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 87 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) - (yyvsp[0].entero);    }
#line 1539 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 89 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].entero) + (yyvsp[0].decimal);    }
#line 1545 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 90 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].entero) * (yyvsp[0].decimal);    }
#line 1551 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 91 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].entero) / (yyvsp[0].decimal);    }
#line 1557 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 92 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].entero) - (yyvsp[0].decimal);    }
#line 1563 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 94 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[-2].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) + (yyvsp[0].decimal); }
											if(tipovar((yyvsp[-2].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) + (yyvsp[0].decimal); }	
											if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");}	}
#line 1571 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 98 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[0].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[0].texto),ini) + (yyvsp[-2].decimal); }
											if(tipovar((yyvsp[0].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[0].texto),ini) + (yyvsp[-2].decimal); }	
											if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");}	}
#line 1579 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 102 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[-2].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) + (yyvsp[0].entero); }
											if(tipovar((yyvsp[-2].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) + (yyvsp[0].entero); }	
											if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");}  }
#line 1587 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 106 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[0].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[0].texto),ini) + (yyvsp[-2].entero); }
											if(tipovar((yyvsp[0].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[0].texto),ini) + (yyvsp[-2].entero); }
											if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n"); }	}
#line 1595 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 110 "ejemplo2.y" /* yacc.c:1646  */
    { 	if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==0))	{(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) + retornaInt((yyvsp[0].texto),ini);}
											if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==1))	{(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) + retornaFloat((yyvsp[0].texto),ini);}
											if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==0))	{(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) + retornaInt((yyvsp[0].texto),ini);}
											if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==1))	{(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) + retornaFloat((yyvsp[0].texto),ini);}	}
#line 1604 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 115 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[-2].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) - (yyvsp[0].decimal); }
											if(tipovar((yyvsp[-2].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) - (yyvsp[0].decimal); }	
											if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");}	}
#line 1612 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 119 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[0].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[0].texto),ini) - (yyvsp[-2].decimal); }
											if(tipovar((yyvsp[0].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[0].texto),ini) - (yyvsp[-2].decimal); }	
											if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");}	}
#line 1620 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 123 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[-2].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) - (yyvsp[0].entero); }
											if(tipovar((yyvsp[-2].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) - (yyvsp[0].entero); }	
											if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");}  }
#line 1628 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 127 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[0].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[0].texto),ini) - (yyvsp[-2].entero); }
											if(tipovar((yyvsp[0].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[0].texto),ini) - (yyvsp[-2].entero); }
											if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n"); }	}
#line 1636 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 131 "ejemplo2.y" /* yacc.c:1646  */
    { 	if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==0))	{(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) - retornaInt((yyvsp[0].texto),ini);}
											if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==1))	{(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) - retornaFloat((yyvsp[0].texto),ini);}
											if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==0))	{(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) - retornaInt((yyvsp[0].texto),ini);}
											if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==1))	{(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) - retornaFloat((yyvsp[0].texto),ini);}	}
#line 1645 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 136 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[-2].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) / (yyvsp[0].decimal); }
											if(tipovar((yyvsp[-2].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) / (yyvsp[0].decimal); }	
											if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede dividir numero con string\n");}	}
#line 1653 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 140 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[0].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[0].texto),ini) / (yyvsp[-2].decimal); }
											if(tipovar((yyvsp[0].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[0].texto),ini) / (yyvsp[-2].decimal); }	
											if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede dividir numero con string\n");}	}
#line 1661 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 144 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[-2].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) / (yyvsp[0].entero); }
											if(tipovar((yyvsp[-2].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) / (yyvsp[0].entero); }	
											if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede dividir numero con string\n");}  }
#line 1669 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 148 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[0].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[0].texto),ini) / (yyvsp[-2].entero); }
											if(tipovar((yyvsp[0].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[0].texto),ini) / (yyvsp[-2].entero); }
											if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede dividir numero con string\n"); }	}
#line 1677 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 152 "ejemplo2.y" /* yacc.c:1646  */
    { 	if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==0))	{(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) / retornaInt((yyvsp[0].texto),ini);}
											if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==1))	{(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) / retornaFloat((yyvsp[0].texto),ini);}
											if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==0))	{(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) / retornaInt((yyvsp[0].texto),ini);}
											if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==1))	{(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) / retornaFloat((yyvsp[0].texto),ini);}	}
#line 1686 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 157 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[-2].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) * (yyvsp[0].decimal); }
											if(tipovar((yyvsp[-2].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) * (yyvsp[0].decimal); }	
											if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede multiplicar numero con string\n");}	}
#line 1694 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 161 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[0].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[0].texto),ini) * (yyvsp[-2].decimal); }
											if(tipovar((yyvsp[0].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[0].texto),ini) * (yyvsp[-2].decimal); }	
											if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede multiplicar numero con string\n");}	}
#line 1702 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 165 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[-2].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) * (yyvsp[0].entero); }
											if(tipovar((yyvsp[-2].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) * (yyvsp[0].entero); }	
											if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede multiplicar numero con string\n");}  }
#line 1710 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 169 "ejemplo2.y" /* yacc.c:1646  */
    {	if(tipovar((yyvsp[0].texto),ini)==0)	{	(yyval.decimal) = retornaInt((yyvsp[0].texto),ini) * (yyvsp[-2].entero); }
											if(tipovar((yyvsp[0].texto),ini)==1)	{	(yyval.decimal) = retornaFloat((yyvsp[0].texto),ini) * (yyvsp[-2].entero); }
											if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede multiplicar numero con string\n"); }	}
#line 1718 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 173 "ejemplo2.y" /* yacc.c:1646  */
    { 	if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==0))	{(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) * retornaInt((yyvsp[0].texto),ini);}
											if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==1))	{(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) * retornaFloat((yyvsp[0].texto),ini);}
											if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==0))	{(yyval.decimal) = retornaFloat((yyvsp[-2].texto),ini) * retornaInt((yyvsp[0].texto),ini);}
											if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==1))	{(yyval.decimal) = retornaInt((yyvsp[-2].texto),ini) * retornaFloat((yyvsp[0].texto),ini);}	}
#line 1727 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 178 "ejemplo2.y" /* yacc.c:1646  */
    { 
										(yyval.decimal)=powInt((yyvsp[-3].entero),(yyvsp[-1].entero));		
										}
#line 1735 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 181 "ejemplo2.y" /* yacc.c:1646  */
    { 
										(yyval.decimal)=powFloat((yyvsp[-3].decimal),(yyvsp[-1].entero));		
										}
#line 1743 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 187 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.texto) = (yyvsp[0].texto);}
#line 1749 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 190 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.texto) = (yyvsp[0].texto);}
#line 1755 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 191 "ejemplo2.y" /* yacc.c:1646  */
    {
					(yyval.texto)=sumaString((yyvsp[-2].texto),(yyvsp[0].texto));
					}
#line 1763 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 195 "ejemplo2.y" /* yacc.c:1646  */
    { 
					(yyval.texto)=restaString((yyvsp[-2].texto),(yyvsp[0].texto));
					}
#line 1771 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 199 "ejemplo2.y" /* yacc.c:1646  */
    {
						(yyval.texto)=powString((yyvsp[-3].texto),(yyvsp[-1].entero));
					}
#line 1779 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 202 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1785 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 203 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1791 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 204 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1797 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 205 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1803 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 206 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1809 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 207 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1815 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 208 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1821 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 209 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1827 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 210 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1833 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 211 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1839 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 212 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1845 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 213 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1851 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 214 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1857 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 215 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1863 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 216 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1869 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 217 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1875 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 218 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1881 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 219 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1887 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 220 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1893 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 221 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)="Error";}
#line 1899 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 223 "ejemplo2.y" /* yacc.c:1646  */
    {if(tipovar((yyvsp[0].texto),ini)==2)	{ (yyval.texto)=sumaString((yyvsp[-2].texto),retornaString((yyvsp[0].texto),ini));	}
								else{	printf("\tError de sintaxis, no son cadenas las dos variables\n");}	}
#line 1906 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 225 "ejemplo2.y" /* yacc.c:1646  */
    {if(tipovar((yyvsp[-2].texto),ini)==2)	{ (yyval.texto)=sumaString(retornaString((yyvsp[-2].texto),ini),(yyvsp[0].texto));	}
								else{	printf("\tError de sintaxis, no son cadenas las dos variables\n");}	}
#line 1913 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 227 "ejemplo2.y" /* yacc.c:1646  */
    {if(tipovar((yyvsp[0].texto),ini)==2)	{ (yyval.texto)=restaString((yyvsp[-2].texto),retornaString((yyvsp[0].texto),ini));	}
								else{	printf("\tError de sintaxis, no son cadenas las dos variables\n");}	}
#line 1920 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 229 "ejemplo2.y" /* yacc.c:1646  */
    {if(tipovar((yyvsp[-2].texto),ini)==2)	{ (yyval.texto)=restaString(retornaString((yyvsp[-2].texto),ini),(yyvsp[0].texto));	}
								else{	printf("\tError de sintaxis, no son cadenas las dos variables\n");}	}
#line 1927 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 231 "ejemplo2.y" /* yacc.c:1646  */
    {
						if(tipovar((yyvsp[-3].texto),ini)==2){
							(yyval.texto)=powString(retornaString((yyvsp[-3].texto),ini),(yyvsp[-1].entero));}
					}
#line 1936 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 235 "ejemplo2.y" /* yacc.c:1646  */
    {
						if((tipovar((yyvsp[-2].texto),ini)==2)&&(tipovar((yyvsp[0].texto),ini)==2)){
							(yyval.texto)=sumaString(retornaString((yyvsp[-2].texto),ini),retornaString((yyvsp[0].texto),ini));}
					}
#line 1945 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 243 "ejemplo2.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[0].entero);}
#line 1951 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 245 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.texto) = (yyvsp[0].texto);}
#line 1957 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 248 "ejemplo2.y" /* yacc.c:1646  */
    {//DECLARAR UN VALOR Y ASIGNARLE UN ENTERO
						if((yyvsp[-3].entero)==0){ 
							if(existe((yyvsp[-2].texto),ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								//imprimeValores($2,ini);
								}
							else{
								agregar(0, (yyvsp[-2].texto), (yyvsp[0].entero), 0,"", cab,ini);
								//imprimeValores($2,ini);
								recorrer(ini);}
						}
						else if((yyvsp[-3].entero)==1){
							if(existe((yyvsp[-2].texto),ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								//imprimeValores($2,ini);
								}
							else{
								agregar(1, (yyvsp[-2].texto), 0, (yyvsp[0].entero),"", cab,ini);
								//imprimeValores($2,ini);
								recorrer(ini);}							
						}
						else if((yyvsp[-3].entero)==2){
							if(existe((yyvsp[-2].texto),ini)==1){
								printf("\tError de sintaxis: No se puede asignar valor int a variable tipo String\n");
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								printf("\tError de sintaxis: No se puede asignar valor int a variable tipo String\n");}							
						}
					(yyval.texto)=(yyvsp[-2].texto);
					}
#line 1993 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 279 "ejemplo2.y" /* yacc.c:1646  */
    {//DECLARAR UN VALOR Y ASIGNARLE UN DECIMAL
						if((yyvsp[-3].entero)==0){ 
							if(existe((yyvsp[-2].texto),ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								agregar(0, (yyvsp[-2].texto), (yyvsp[0].decimal), 0,"", cab,ini);
								recorrer(ini);}
						}
						else if((yyvsp[-3].entero)==1){
							if(existe((yyvsp[-2].texto),ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								agregar(1, (yyvsp[-2].texto), 0, (yyvsp[0].decimal),"", cab,ini);
								recorrer(ini);}							
						}
						else if((yyvsp[-3].entero)==2){
							if(existe((yyvsp[-2].texto),ini)==1){
								printf("\tError de sintaxis: No se puede asignar valor float a variable tipo String\n");
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								printf("\tError de sintaxis: No se puede asignar valor float a variable tipo String\n");}							
						}
					(yyval.texto)=(yyvsp[-2].texto);
					}
#line 2025 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 306 "ejemplo2.y" /* yacc.c:1646  */
    {//DECLARAR UN VALOR Y ASIGNARLE UNA CADENA
						if((yyvsp[-3].entero)==0){ 
							if(existe((yyvsp[-2].texto),ini)==1){
								printf("\tError de sintaxis: No se puede asignar valor String a variable tipo int\n");
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								printf("\tError de sintaxis: No se puede asignar valor float a variable tipo String\n");}	
						}
						else if((yyvsp[-3].entero)==1){
							if(existe((yyvsp[-2].texto),ini)==1){
								printf("\tError de sintaxis: No se puede asignar valor String a variable tipo float\n");
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								printf("\tError de sintaxis: No se puede asignar valor float a variable tipo String\n");}						
						}
						else if((yyvsp[-3].entero)==2){
							if(existe((yyvsp[-2].texto),ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								agregar(2, (yyvsp[-2].texto), 0, 0,(yyvsp[0].texto), cab,ini);
								recorrer(ini);}							
						}
					(yyval.texto)=(yyvsp[-2].texto);
					}
#line 2057 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 333 "ejemplo2.y" /* yacc.c:1646  */
    {//DECLARAR SIN DAR UN VALOR;
						if((yyvsp[-1].entero)==0){ //si tipo var es INT
							if(existe((yyvsp[0].texto),ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								agregar(0, (yyvsp[0].texto), 0, 0,"", cab,ini);
								recorrer(ini);}
						}
						else if((yyvsp[-1].entero)==1){//si tipo var es FLOAT
							if(existe((yyvsp[0].texto),ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								agregar(1, (yyvsp[0].texto), 0, 0,"", cab,ini);
								recorrer(ini);}							
						}
						else if((yyvsp[-1].entero)==2){//si tipo var es STRING
							if(existe((yyvsp[0].texto),ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								agregar(2, (yyvsp[0].texto), 0, 0,"", cab,ini);
								recorrer(ini);}							
						}
						(yyval.texto)=(yyvsp[0].texto);
					}
#line 2089 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 364 "ejemplo2.y" /* yacc.c:1646  */
    {
						if(existe((yyvsp[-2].texto),ini)==1){//void sobreescribirValor(char * nombre,int varInt, float varFloat , char * varString, Nodo * ini)
							if(tipovar((yyvsp[-2].texto),ini)==0)	{sobreescribirValor((yyvsp[-2].texto),(yyvsp[0].entero), 0, "", ini);}
							if(tipovar((yyvsp[-2].texto),ini)==1)	{sobreescribirValor((yyvsp[-2].texto),0, (yyvsp[0].entero), "", ini);}
							if(tipovar((yyvsp[-2].texto),ini)==2)	{printf("\tError de sintaxis: La variable no es entero ni float\n");
							imprimeValores((yyvsp[-2].texto),ini);}
							}
						else{
							printf("\tError de sintaxis: La variable no existe\n");}	
						(yyval.texto)=(yyvsp[-2].texto);							
					}
#line 2105 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 375 "ejemplo2.y" /* yacc.c:1646  */
    {
						if(existe((yyvsp[-2].texto),ini)==1){//void sobreescribirValor(char * nombre,int varInt, float varFloat , char * varString, Nodo * ini)
							if(tipovar((yyvsp[-2].texto),ini)==0)	{sobreescribirValor((yyvsp[-2].texto), (yyvsp[0].decimal), 0, "", ini);}
							if(tipovar((yyvsp[-2].texto),ini)==1)	{sobreescribirValor((yyvsp[-2].texto), 0, (yyvsp[0].decimal), "", ini);}
							if(tipovar((yyvsp[-2].texto),ini)==2)	{printf("\tError de sintaxis: La variable no es entero ni float\n");}
							imprimeValores((yyvsp[-2].texto),ini);
							}
						else{
							printf("\tError de sintaxis: La variable no existe\n");}
						(yyval.texto)=(yyvsp[-2].texto);								
					}
#line 2121 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 386 "ejemplo2.y" /* yacc.c:1646  */
    {
						(yyval.texto)=(yyvsp[-2].texto);
						if(existe((yyvsp[-2].texto),ini)==1){//void sobreescribirValor(char * nombre,int varInt, float varFloat , char * varString, Nodo * ini)
							if(tipovar((yyvsp[-2].texto),ini)==0)	{printf("\tError de sintaxis: La variable no es de tipo String\n");}
							if(tipovar((yyvsp[-2].texto),ini)==1)	{printf("\tError de sintaxis: La variable no es de tipo String\n");}
							if(tipovar((yyvsp[-2].texto),ini)==2)	{sobreescribirValor((yyvsp[-2].texto), 0, 0, (yyvsp[0].texto), ini);}
							}
						else{
							printf("\tError de sintaxis: La variable no existe\n");}	
						(yyval.texto)=(yyvsp[-2].texto);						
					}
#line 2137 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;


#line 2141 "ejemplo2.tab.c" /* yacc.c:1646  */
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
#line 401 "ejemplo2.y" /* yacc.c:1906  */


int main() {
	////////////////
	ini = NULL;
	ini = malloc(sizeof(Nodo));
	if (ini == NULL) {
	    return 1;
	}
	ini->nombre = "inicio";
	ini->next = NULL;
	cab = ini;

	////////////////
  yyparse();
  return 0;
}
             
void yyerror (char *s)
{
  printf ("--%s--\n", s);
}
            
int yywrap()  
{  
  return 1;  
}  
