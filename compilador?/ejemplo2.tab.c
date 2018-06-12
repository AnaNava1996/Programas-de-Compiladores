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
#include <stdbool.h>
#include "tabla.h"

Nodo * ini;
Nodo * cab;

int yylex(void);
void yyerror (char *);

#line 79 "ejemplo2.tab.c" /* yacc.c:339  */

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
    PRINTF = 262,
    TIPOVAR = 263,
    NOMBRE = 264,
    IF = 265
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "ejemplo2.y" /* yacc.c:355  */

	int entero;
	double decimal;
	char *texto;
	struct nodo *nodito;

#line 137 "ejemplo2.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_EJEMPLO2_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 154 "ejemplo2.tab.c" /* yacc.c:358  */

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
#define YYLAST   792

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  24
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  346

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   265

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      18,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    15,     2,     2,
      19,    20,    13,    11,    21,    12,     2,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    17,
      22,    16,    23,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    56,    59,    60,    61,    62,    64,    65,
      66,    69,    70,    73,    76,    77,    78,    79,    80,    81,
      82,    83,    87,    88,    89,    90,    91,    92,    93,    95,
      96,    97,    98,   100,   101,   102,   103,   105,   108,   114,
     116,   117,   121,   125,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   153,   154,   162,   170,   179,   187,
     195,   202,   219,   230,   241,   244,   247,   250,   257,   265,
     273,   282,   290,   298,   307,   324,   337,   350,   353,   356,
     359,   366,   374,   382,   383,   391,   399,   400,   416,   425,
     433,   436,   439,   440,   447,   455,   464,   466,   474,   482,
     484,   501,   510,   519,   522,   525,   526,   533,   538,   553,
     555,   558,   575,   588,   600,   616,   640,   658,   669,   680,
     691,   710,   738,   748,   769,   790,   814,   823,   832,   841,
     848,   855,   862,   869,   876,   883,   890,   897,   904,   911,
     918
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTERO", "DECIMAL", "TEXTO", "POTENCIA",
  "PRINTF", "TIPOVAR", "NOMBRE", "IF", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'='", "';'", "'\\n'", "'('", "')'", "','", "'<'", "'>'", "$accept",
  "input", "line", "exp_entera", "exp_decimal", "exp_pow", "exp_texto",
  "operacion_con_variable", "tipo_var", "nombre_var",
  "declaracion_variable", "sobreescribir_variable", "exp_printf",
  "condicional", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,    43,    45,    42,    47,    37,    61,    59,    10,    40,
      41,    44,    60,    62
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
     -16,     1,   -16,   -15,   -16,   -16,   -16,   -16,    -5,   -16,
     -16,    22,   150,   -16,    20,   -16,   250,   727,    24,   734,
     215,    13,    90,    58,    31,    66,   114,   -16,    13,   118,
     150,     3,    17,   113,   317,   487,   201,    50,   363,   130,
     130,   130,   130,    30,   120,   130,   130,   130,   130,    30,
     123,    20,   130,   130,   186,   186,   150,   133,    20,    20,
      20,    20,   137,    72,    20,    20,    20,    20,    20,   -16,
     139,   157,   158,   148,    20,   195,   208,   222,   237,   497,
     132,   150,   150,   150,   150,     9,   150,   150,   150,   150,
     150,   -16,   -16,   -16,    44,   226,   131,   290,   -16,    44,
     226,   290,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   762,   -16,   -16,    44,   226,   290,   -16,    44,
     226,   290,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   767,   -16,   -16,    84,   276,   312,   281,   448,    44,
     226,   290,   -16,    44,   226,   290,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   294,   410,   466,   104,
     115,   294,   410,   466,   104,   115,   166,   167,   173,   -16,
     -16,   166,   167,   173,   -16,   -16,   -16,    20,   -16,   294,
     410,   466,   104,   115,   294,   410,   466,   104,   115,   166,
     167,   173,   -16,   -16,   166,   167,   173,   -16,   -16,   772,
     777,   201,   517,   363,   -16,   -16,   -16,   -16,   329,   175,
      20,    20,   177,    20,    20,   178,   150,   150,   185,    13,
      13,     3,    17,     3,    17,   -16,   -16,   -16,   -16,     9,
       9,   -16,     3,    17,     3,    17,   -16,   -16,   -16,   -16,
     369,   483,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,   150,   150,     9,     9,     9,     9,     9,
     741,   748,   755,   427,   502,   103,    20,   772,   777,   636,
     641,    20,   646,   667,   150,   512,   671,   522,   681,    13,
     182,   184,   525,   549,     9,     9,     9,     9,   389,   416,
     421,   560,   573,   583,   610,   621,   -16,   -16,   -16,   -16,
     -16,   209,   218,   227,   685,   -16,   -16,   695,   -16,   -16,
     631,   699,   -16,   -16,   -16,   -16,   234,   -16,   -16,   525,
     525,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   228,    20,
      20,   -16,   -16,   -16,   -16,   -16,    20,   709,   713,   723,
     238,   246,   266,   -16,   -16,   -16
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    14,    22,    40,    39,     0,   119,
     120,     0,     0,     4,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,     0,
       0,    15,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,    24,    64,    17,    33,     0,    44,    69,    20,
      36,    48,    82,    18,    34,    52,    95,    19,    35,    56,
     108,    21,     0,    60,     5,    29,    25,    45,    68,    32,
      28,    49,    81,    30,    26,    53,    94,    31,    27,    57,
     107,     0,    61,     6,     0,     0,     0,     0,     0,    46,
      47,    41,    70,    50,    51,    42,    83,    54,    55,    96,
      58,    59,   109,    62,    63,     7,    74,    75,    76,    77,
      73,    87,    88,    89,    90,    86,   100,   101,   102,   103,
      99,   113,   114,   115,   116,   112,    10,     0,   126,    66,
      65,    67,    72,    71,    79,    78,    80,    85,    84,    92,
      91,    93,    98,    97,   105,   104,   106,   111,   110,   127,
     128,   129,   130,   131,     9,    11,    12,   132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,    33,    20,    36,    18,    34,    19,    35,     0,
       0,    21,    29,    25,    32,    28,    30,    26,    31,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   122,   123,   124,
     125,     0,     0,     0,     0,   147,   149,     0,   141,   143,
       0,     0,   148,   142,   150,   144,     0,   133,   134,    17,
      20,    18,    19,    37,    38,    43,   117,   118,     0,     0,
       0,   145,   139,   146,   140,   135,     0,     0,     0,     0,
       0,     0,     0,   138,   137,   136
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -16,   -16,   -16,    26,   305,   366,   425,   -14,   -16,   119,
     -16,   -16,   -16,   -16
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    15,   267,   268,    18,    36,    20,    21,    38,
      23,    24,    25,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      37,     2,     3,    27,     4,     5,     6,     7,     8,     9,
      10,    11,     4,    12,    28,    77,    83,    84,    85,    13,
      14,   229,    10,     4,     5,     6,     7,    16,   230,    10,
      88,    89,    12,     4,     5,     6,     7,   137,    31,    14,
      34,    29,    12,    51,   159,   164,   169,   174,    70,    30,
     182,   187,   192,   197,   202,    75,    79,   244,   245,    43,
     208,    58,    59,    60,    61,    94,    99,   103,   107,   111,
      93,   115,   119,   123,   127,   131,    69,   134,   139,   143,
     147,   150,   153,    71,   156,   161,   166,   171,   177,   178,
     179,   184,   189,   194,   199,    39,    40,    41,    42,    43,
      34,    64,    65,    66,    67,   255,    68,   221,   223,   225,
     227,   231,   232,   234,   236,   238,   240,    60,    61,   301,
      22,     4,     5,     6,     7,   302,   303,    10,    66,    67,
      12,    72,    90,     4,     5,     6,     7,    74,   114,    10,
      63,   133,    12,    86,    87,    88,    89,    73,    78,    30,
     250,   155,    92,     4,     5,   176,     7,   204,    98,   102,
     106,   110,    12,   263,   118,   122,   126,   130,   207,    30,
     138,   142,   146,   149,   152,   205,   206,   160,   165,   170,
     175,    43,    49,   183,   188,   193,   198,   203,    56,     4,
       5,   266,     7,   271,   274,    10,   269,   270,    12,   272,
     273,   279,   317,   260,   318,    30,    39,    40,    41,    42,
      43,   209,    52,    53,    54,    55,    56,   210,   211,    45,
      46,    47,    48,    49,   212,   328,    58,    59,    60,    61,
     213,   214,    62,    58,    59,    60,    61,   329,   215,   248,
     249,    49,   275,   277,   216,   217,   330,   336,    64,    65,
      66,    67,   304,   218,   335,   282,   283,   307,   343,   219,
     220,    39,    40,    41,    42,    43,   344,    44,    94,    99,
     103,   107,   115,   119,   123,   127,   288,   139,   143,   147,
     150,   291,   292,   293,   294,   295,   345,    45,    46,    47,
      48,    49,    58,    59,    60,    61,   264,   256,     0,     0,
     310,     0,   258,   253,   254,    56,    17,    41,    42,    43,
     319,   320,   321,   322,     0,   337,   338,    32,     0,    35,
       0,     0,   339,    52,    53,    54,    55,    56,    39,    40,
      41,    42,    43,   257,    76,    80,     0,    91,   280,   281,
      58,    59,    60,    61,    95,   100,   104,   108,   112,   265,
     116,   120,   124,   128,   112,     0,   135,   140,   144,   148,
     151,   154,     0,   157,   162,   167,   172,     0,     0,   180,
     185,   190,   195,   200,    64,    65,    66,    67,    33,    35,
      81,    82,    83,    84,    85,     0,   222,   224,   226,   228,
     255,   233,   235,   237,   239,   241,    33,     0,   316,     0,
     242,   243,   244,   245,    43,    96,    96,    96,    96,    96,
     255,    96,    96,    96,    96,    96,     0,     0,    96,    96,
      33,    33,    33,    47,    48,    49,    19,   246,   247,   248,
     249,    49,   251,   252,   253,   254,    56,   256,    58,    59,
      60,    61,   257,     0,   299,     0,     0,    33,    33,    33,
      33,     0,    33,    33,    33,    33,    33,     0,     0,    64,
      65,    66,    67,     0,    97,   101,   105,   109,   113,   259,
     117,   121,   125,   129,   132,     0,   136,   141,   145,    54,
      55,    56,   261,   158,   163,   168,   173,     0,     0,   181,
     186,   191,   196,   201,    86,    87,    88,    89,    45,    46,
      47,    48,    49,     0,   256,     0,     0,    92,    81,    82,
      83,    84,    85,    64,    65,    66,    67,    91,     0,   300,
       0,   276,   278,    81,    82,    83,    84,    85,    58,    59,
      60,    61,   312,    81,    82,    83,    84,    85,   286,   287,
      85,     0,   314,     0,     0,     0,     0,    95,   100,   104,
     108,   116,   120,   124,   128,   289,   140,   144,   148,   151,
     284,   285,   286,   287,    85,     0,     0,     0,     0,    91,
       0,   284,   285,   286,   287,    85,     0,     0,     0,   311,
     323,     0,    33,    33,   284,   285,   286,   287,    85,     0,
       0,     0,     0,   324,   284,   285,   286,   287,    85,     0,
       0,     0,   262,   325,     0,     0,     0,     0,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    33,
      33,   284,   285,   286,   287,    85,     0,     0,     0,     0,
     326,     0,   284,   285,   286,   287,    85,     0,     0,     0,
      33,   327,    81,    82,    83,    84,    85,    58,    59,    60,
      61,   333,    58,    59,    60,    61,   305,    58,    59,    60,
      61,   306,     0,     0,     0,     0,   308,    97,   101,   105,
     109,   117,   121,   125,   129,   290,   141,   145,    58,    59,
      60,    61,    86,    87,    88,    89,     0,   309,     0,     0,
       0,   313,    86,    87,    88,    89,    58,    59,    60,    61,
       0,   315,     0,     0,     0,   331,    58,    59,    60,    61,
      86,    87,    88,    89,     0,   332,     0,     0,     0,   334,
      58,    59,    60,    61,    58,    59,    60,    61,     0,   340,
       0,     0,     0,   341,    58,    59,    60,    61,    45,    46,
      47,    48,    49,   342,    50,    52,    53,    54,    55,    56,
       0,    57,    39,    40,    41,    42,    43,     0,   296,    45,
      46,    47,    48,    49,     0,   297,    52,    53,    54,    55,
      56,     0,   298,   246,   247,   248,   249,    49,   242,   243,
     244,   245,    43,    39,    40,    41,    42,    43,    45,    46,
      47,    48,    49
};

static const yytype_int16 yycheck[] =
{
      14,     0,     1,    18,     3,     4,     5,     6,     7,     8,
       9,    10,     3,    12,    19,    29,    13,    14,    15,    18,
      19,    12,     9,     3,     4,     5,     6,     1,    19,     9,
      13,    14,    12,     3,     4,     5,     6,    51,    12,    19,
      14,    19,    12,    19,    58,    59,    60,    61,    17,    19,
      64,    65,    66,    67,    68,    29,    30,    13,    14,    15,
      74,    11,    12,    13,    14,    39,    40,    41,    42,    43,
      20,    45,    46,    47,    48,    49,    18,    51,    52,    53,
      54,    55,    56,    17,    58,    59,    60,    61,    16,    17,
      64,    65,    66,    67,    68,    11,    12,    13,    14,    15,
      74,    11,    12,    13,    14,    21,    16,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    13,    14,    16,
       1,     3,     4,     5,     6,    22,    23,     9,    13,    14,
      12,    17,    19,     3,     4,     5,     6,    19,    18,     9,
      21,    18,    12,    11,    12,    13,    14,    28,    29,    19,
      19,    18,    20,     3,     4,    18,     6,    18,    39,    40,
      41,    42,    12,   177,    45,    46,    47,    48,    20,    19,
      51,    52,    53,    54,    55,    18,    18,    58,    59,    60,
      61,    15,    15,    64,    65,    66,    67,    68,    15,     3,
       4,    16,     6,    16,    16,     9,   210,   211,    12,   213,
     214,    16,    20,   177,    20,    19,    11,    12,    13,    14,
      15,    16,    11,    12,    13,    14,    15,    22,    23,    11,
      12,    13,    14,    15,    16,    16,    11,    12,    13,    14,
      22,    23,    17,    11,    12,    13,    14,    19,    16,    13,
      14,    15,   216,   217,    22,    23,    19,    19,    11,    12,
      13,    14,   266,    16,    20,   229,   230,   271,    20,    22,
      23,    11,    12,    13,    14,    15,    20,    17,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,    20,    11,    12,    13,
      14,    15,    11,    12,    13,    14,   177,    21,    -1,    -1,
     274,    -1,    21,    13,    14,    15,     1,    13,    14,    15,
     284,   285,   286,   287,    -1,   329,   330,    12,    -1,    14,
      -1,    -1,   336,    11,    12,    13,    14,    15,    11,    12,
      13,    14,    15,    21,    29,    30,    -1,    20,   219,   220,
      11,    12,    13,    14,    39,    40,    41,    42,    43,    20,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    -1,    -1,    64,
      65,    66,    67,    68,    11,    12,    13,    14,    12,    74,
      11,    12,    13,    14,    15,    -1,    81,    82,    83,    84,
      21,    86,    87,    88,    89,    90,    30,    -1,   279,    -1,
      11,    12,    13,    14,    15,    39,    40,    41,    42,    43,
      21,    45,    46,    47,    48,    49,    -1,    -1,    52,    53,
      54,    55,    56,    13,    14,    15,     1,    11,    12,    13,
      14,    15,    11,    12,    13,    14,    15,    21,    11,    12,
      13,    14,    21,    -1,    17,    -1,    -1,    81,    82,    83,
      84,    -1,    86,    87,    88,    89,    90,    -1,    -1,    11,
      12,    13,    14,    -1,    39,    40,    41,    42,    43,    21,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    13,
      14,    15,   177,    58,    59,    60,    61,    -1,    -1,    64,
      65,    66,    67,    68,    11,    12,    13,    14,    11,    12,
      13,    14,    15,    -1,    21,    -1,    -1,    20,    11,    12,
      13,    14,    15,    11,    12,    13,    14,    20,    -1,    17,
      -1,   216,   217,    11,    12,    13,    14,    15,    11,    12,
      13,    14,    20,    11,    12,    13,    14,    15,    13,    14,
      15,    -1,    20,    -1,    -1,    -1,    -1,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    20,
      -1,    11,    12,    13,    14,    15,    -1,    -1,    -1,   274,
      20,    -1,   216,   217,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    20,    11,    12,    13,    14,    15,    -1,
      -1,    -1,   177,    20,    -1,    -1,    -1,    -1,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      20,    -1,    11,    12,    13,    14,    15,    -1,    -1,    -1,
     274,    20,    11,    12,    13,    14,    15,    11,    12,    13,
      14,    20,    11,    12,    13,    14,    20,    11,    12,    13,
      14,    20,    -1,    -1,    -1,    -1,    20,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    11,    12,
      13,    14,    11,    12,    13,    14,    -1,    20,    -1,    -1,
      -1,    20,    11,    12,    13,    14,    11,    12,    13,    14,
      -1,    20,    -1,    -1,    -1,    20,    11,    12,    13,    14,
      11,    12,    13,    14,    -1,    20,    -1,    -1,    -1,    20,
      11,    12,    13,    14,    11,    12,    13,    14,    -1,    20,
      -1,    -1,    -1,    20,    11,    12,    13,    14,    11,    12,
      13,    14,    15,    20,    17,    11,    12,    13,    14,    15,
      -1,    17,    11,    12,    13,    14,    15,    -1,    17,    11,
      12,    13,    14,    15,    -1,    17,    11,    12,    13,    14,
      15,    -1,    17,    11,    12,    13,    14,    15,    11,    12,
      13,    14,    15,    11,    12,    13,    14,    15,    11,    12,
      13,    14,    15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    12,    18,    19,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    18,    19,    19,
      19,    27,    28,    29,    27,    28,    30,    31,    33,    11,
      12,    13,    14,    15,    17,    11,    12,    13,    14,    15,
      17,    19,    11,    12,    13,    14,    15,    17,    11,    12,
      13,    14,    17,    33,    11,    12,    13,    14,    16,    18,
      17,    17,    17,    33,    19,    27,    28,    31,    33,    27,
      28,    11,    12,    13,    14,    15,    11,    12,    13,    14,
      19,    20,    20,    20,    27,    28,    29,    30,    33,    27,
      28,    30,    33,    27,    28,    30,    33,    27,    28,    30,
      33,    27,    28,    30,    18,    27,    28,    30,    33,    27,
      28,    30,    33,    27,    28,    30,    33,    27,    28,    30,
      33,    27,    30,    18,    27,    28,    30,    31,    33,    27,
      28,    30,    33,    27,    28,    30,    33,    27,    28,    33,
      27,    28,    33,    27,    28,    18,    27,    28,    30,    31,
      33,    27,    28,    30,    31,    33,    27,    28,    30,    31,
      33,    27,    28,    30,    31,    33,    18,    16,    17,    27,
      28,    30,    31,    33,    27,    28,    30,    31,    33,    27,
      28,    30,    31,    33,    27,    28,    30,    31,    33,    27,
      28,    30,    31,    33,    18,    18,    18,    20,    31,    16,
      22,    23,    16,    22,    23,    16,    22,    23,    16,    22,
      23,    27,    28,    27,    28,    27,    28,    27,    28,    12,
      19,    27,    27,    28,    27,    28,    27,    28,    27,    28,
      27,    28,    11,    12,    13,    14,    11,    12,    13,    14,
      19,    11,    12,    13,    14,    21,    21,    21,    21,    21,
      27,    28,    30,    31,    33,    20,    16,    27,    28,    31,
      31,    16,    31,    31,    16,    27,    28,    27,    28,    16,
      33,    33,    27,    27,    11,    12,    13,    14,    27,    28,
      30,    27,    27,    27,    27,    27,    17,    17,    17,    17,
      17,    16,    22,    23,    31,    20,    20,    31,    20,    20,
      27,    28,    20,    20,    20,    20,    33,    20,    20,    27,
      27,    27,    27,    20,    20,    20,    20,    20,    16,    19,
      19,    20,    20,    20,    20,    20,    19,    31,    31,    31,
      20,    20,    20,    20,    20,    20
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    24,    25,    25,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    27,    27,    27,    27,    27,    27,
      27,    27,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    29,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    32,
      33,    34,    34,    34,    34,    34,    34,    35,    35,    35,
      35,    35,    36,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     3,     3,     3,     2,     3,
       3,     3,     3,     2,     1,     2,     3,     3,     3,     3,
       3,     3,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     6,     6,     1,
       1,     3,     3,     6,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     6,     6,     1,
       1,     5,     5,     5,     5,     5,     3,     3,     3,     3,
       3,     3,     4,     6,     6,     7,    11,    10,    10,     7,
       7,     6,     6,     6,     6,     7,     7,     6,     6,     6,
       6
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
#line 59 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: falta un ;\n");}
#line 1534 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 60 "ejemplo2.y" /* yacc.c:1646  */
    { printf ("\tresultado: %d\n", (yyvsp[-2].entero)); }
#line 1540 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 61 "ejemplo2.y" /* yacc.c:1646  */
    { printf ("\tresultado: %f\n", (yyvsp[-2].decimal)); }
#line 1546 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 62 "ejemplo2.y" /* yacc.c:1646  */
    { if((yyvsp[-2].texto)==NULL)	{printf(" ");}
												else 			{printf ("\tresultado: %s\n", (yyvsp[-2].texto));} }
#line 1553 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 64 "ejemplo2.y" /* yacc.c:1646  */
    { /*{ printf("nueva variable:%s \n",$1);*/ printf("\n");}
#line 1559 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 65 "ejemplo2.y" /* yacc.c:1646  */
    { printf("\n");}
#line 1565 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 66 "ejemplo2.y" /* yacc.c:1646  */
    { if((yyvsp[-2].nodito)==NULL)				{	printf("\tError\n");}		
												else if(tipovarNodo((yyvsp[-2].nodito))==1)	{	printf("\tResultadoplo: %f\n",*(yyvsp[-2].nodito)->t_float);	}
												else if(tipovarNodo((yyvsp[-2].nodito))==2) {	printf("\tResultadoplo: %s\n",(yyvsp[-2].nodito)->t_string);	}		}
#line 1573 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 69 "ejemplo2.y" /* yacc.c:1646  */
    { printf("\n");}
#line 1579 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "ejemplo2.y" /* yacc.c:1646  */
    {	if ((yyvsp[-2].entero)==2)	{printf(" ");}
												else if((yyvsp[-2].entero)==0)	{printf("FALSE\n");}
												else if((yyvsp[-2].entero)==1)	{printf("TRUE\n");}		}
#line 1587 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 73 "ejemplo2.y" /* yacc.c:1646  */
    { yyerrok;                  }
#line 1593 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 76 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[0].entero); }
#line 1599 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 77 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[0].entero) * (-1);  }
#line 1605 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-1].entero);		 }
#line 1611 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 79 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) + (yyvsp[0].entero);    }
#line 1617 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 80 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) * (yyvsp[0].entero);    }
#line 1623 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 81 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) / (yyvsp[0].entero);    }
#line 1629 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 82 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) - (yyvsp[0].entero);    }
#line 1635 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 83 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) % (yyvsp[0].entero);    }
#line 1641 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 87 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[0].decimal); }
#line 1647 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 88 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[0].decimal) * (-1);  }
#line 1653 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 89 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-1].decimal);			}
#line 1659 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 90 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) + (yyvsp[0].decimal);    }
#line 1665 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 91 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) * (yyvsp[0].decimal);    }
#line 1671 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 92 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) / (yyvsp[0].decimal);    }
#line 1677 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 93 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) - (yyvsp[0].decimal);    }
#line 1683 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 95 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) + (yyvsp[0].entero);    }
#line 1689 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 96 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) * (yyvsp[0].entero);    }
#line 1695 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 97 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) / (yyvsp[0].entero);    }
#line 1701 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 98 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) - (yyvsp[0].entero);    }
#line 1707 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 100 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].entero) + (yyvsp[0].decimal);    }
#line 1713 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 101 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].entero) * (yyvsp[0].decimal);    }
#line 1719 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 102 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].entero) / (yyvsp[0].decimal);    }
#line 1725 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 103 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].entero) - (yyvsp[0].decimal);    }
#line 1731 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 105 "ejemplo2.y" /* yacc.c:1646  */
    { 
										(yyval.decimal)=powInt((yyvsp[-3].entero),(yyvsp[-1].entero));		
										}
#line 1739 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 108 "ejemplo2.y" /* yacc.c:1646  */
    { 
										(yyval.decimal)=powFloat((yyvsp[-3].decimal),(yyvsp[-1].entero));		
										}
#line 1747 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 114 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.texto) = (yyvsp[0].texto);}
#line 1753 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 116 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.texto) = (yyvsp[0].texto);}
#line 1759 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 117 "ejemplo2.y" /* yacc.c:1646  */
    {
					(yyval.texto)=sumaString((yyvsp[-2].texto),(yyvsp[0].texto));
					}
#line 1767 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 121 "ejemplo2.y" /* yacc.c:1646  */
    { 
					(yyval.texto)=restaString((yyvsp[-2].texto),(yyvsp[0].texto));
					}
#line 1775 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 125 "ejemplo2.y" /* yacc.c:1646  */
    {
						(yyval.texto)=powString((yyvsp[-3].texto),(yyvsp[-1].entero));
					}
#line 1783 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 129 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1789 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 130 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1795 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 131 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1801 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 132 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1807 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 133 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1813 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 134 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1819 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 135 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1825 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 136 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1831 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 137 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1837 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 138 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1843 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 139 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1849 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 140 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1855 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 141 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1861 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 142 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1867 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 143 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1873 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 144 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1879 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 145 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1885 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 146 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1891 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 147 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1897 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 148 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1903 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 153 "ejemplo2.y" /* yacc.c:1646  */
    {	(yyval.nodito)=(yyvsp[-1].nodito);	}
#line 1909 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 154 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[-2].texto),ini)==1){	//////////////////////////////-------SUMAS------//////////////////////////////
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)+(yyvsp[0].decimal),""); 	}//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)+(yyvsp[0].decimal),""); 	}	//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");}  (yyval.nodito)=NULL;	}
		else {	printf("\tError, una de las variables no existe\n");  (yyval.nodito)=NULL;	}		}
#line 1922 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 162 "ejemplo2.y" /* yacc.c:1646  */
    { 
		if(existe((yyvsp[-2].texto),ini)==1){
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)+(yyvsp[0].entero),""); } //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)+(yyvsp[0].entero),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");  (yyval.nodito)=NULL; }	}
		else {	printf("\tError, una de las variables no existe\n");   (yyval.nodito)=NULL;	}	}
#line 1935 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 170 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[-2].texto),ini)==1){	
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				printf("\tError de sintaxis: no se puede sumar numero con string\n");   (yyval.nodito)=NULL;	}
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				printf("\tError de sintaxis: no se puede sumar numero con string\n");  (yyval.nodito)=NULL; }	
			if(tipovar((yyvsp[-2].texto),ini)==2)	{
				(yyval.nodito) = declarar(2,"",0,0,sumaString(retornaString((yyvsp[-2].texto),ini),(yyvsp[0].texto))); } } //declaro un nodo auxiliar tipo string
		else {	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}	}
#line 1949 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 179 "ejemplo2.y" /* yacc.c:1646  */
    {        
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)+(yyvsp[-2].decimal),""); } //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)+(yyvsp[-2].decimal),""); } //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n"); (yyval.nodito)=NULL; }	}
		else {	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	} 	}
#line 1962 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 187 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)+(yyvsp[-2].entero),""); } //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)+(yyvsp[-2].entero),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n"); (yyval.nodito)=NULL; }	}
				else {	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	 }	}
#line 1975 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 195 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(	(tipovar((yyvsp[0].texto),ini)==0) || (tipovar((yyvsp[0].texto),ini)==1) )	{	
				printf("\tError de sintaxis: no se puede sumar numero con string\n"); (yyval.nodito)=NULL;	}
			if(tipovar((yyvsp[0].texto),ini)==2)	{
				(yyval.nodito) = declarar(2,"",0,0,sumaString((yyvsp[-2].texto),retornaString((yyvsp[0].texto),ini))); } } //declaro un nodo auxiliar tipo string
		else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	 }		}
#line 1987 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 202 "ejemplo2.y" /* yacc.c:1646  */
    {	
			if((existe((yyvsp[-2].texto),ini))&&(existe((yyvsp[0].texto),ini))){
				if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==0)){
					(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)+retornaInt((yyvsp[-2].texto),ini),""); } //declaro un nodo auxiliar tipo float
				if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==1)){
					(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)+retornaFloat((yyvsp[-2].texto),ini),"");  }//declaro un nodo auxiliar tipo float
				if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==1)){
					(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)+retornaFloat((yyvsp[0].texto),ini),""); } //declaro un nodo auxiliar tipo float
				if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==0)){
					(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)+retornaInt((yyvsp[0].texto),ini),""); }  //declaro un nodo auxiliar tipo float
				if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==2)){ printf("\tError, suma de tipos distintos\n"); (yyval.nodito)=NULL; }
				if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==2)){ printf("\tError, suma de tipos distintos\n"); (yyval.nodito)=NULL; }
				if((tipovar((yyvsp[-2].texto),ini)==2)&&(tipovar((yyvsp[0].texto),ini)==0)){ printf("\tError, suma de tipos distintos\n"); (yyval.nodito)=NULL; }
				if((tipovar((yyvsp[-2].texto),ini)==2)&&(tipovar((yyvsp[0].texto),ini)==1)){ printf("\tError, suma de tipos distintos\n"); (yyval.nodito)=NULL; }
				if((tipovar((yyvsp[-2].texto),ini)==2)&&(tipovar((yyvsp[0].texto),ini)==2)){
					(yyval.nodito) = declarar(2,"",0,0,sumaString(retornaString((yyvsp[-2].texto),ini),retornaString((yyvsp[0].texto),ini)));}	}
			else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}		}
#line 2009 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 219 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(existe((yyvsp[-2].texto),ini)==1){
			if(tipovarNodo((yyvsp[0].nodito))==1){
				if(tipovar((yyvsp[-2].texto),ini)==0)		{(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)+*(yyvsp[0].nodito)->t_float,"");}
				else if(tipovar((yyvsp[-2].texto),ini)==1) {(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)+*(yyvsp[0].nodito)->t_float,"");}
				else if(tipovar((yyvsp[-2].texto),ini)==2)	{ printf("\tError, suma de tipos distintos\n"); (yyval.nodito)=NULL; }		}
			else if(tipovarNodo((yyvsp[0].nodito))==2){
				if(tipovar((yyvsp[-2].texto),ini)==0)		{printf("\tError, suma de tipos distintos\n"); (yyval.nodito)=NULL;}
				else if(tipovar((yyvsp[-2].texto),ini)==1)	{printf("\tError, suma de tipos distintos\n"); (yyval.nodito)=NULL;}
				else if(tipovar((yyvsp[-2].texto),ini)==2)	{(yyval.nodito) = declarar(2,"",0,0,sumaString(retornaString((yyvsp[-2].texto),ini),(yyvsp[0].nodito)->t_string));}	}	}
		else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}	}
#line 2025 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 230 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovarNodo((yyvsp[-2].nodito))==1){//nodo guardó un numero
				if(tipovar((yyvsp[0].texto),ini)==0)		{(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)+*(yyvsp[-2].nodito)->t_float,"");}
				else if(tipovar((yyvsp[0].texto),ini)==1) {(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)+*(yyvsp[-2].nodito)->t_float,"");}
				else if(tipovar((yyvsp[0].texto),ini)==2)	{ printf("\tError, suma de tipos distintos\n"); (yyval.nodito)=NULL; }		}
			else if(tipovarNodo((yyvsp[-2].nodito))==2){//nodo guarda string
				if(tipovar((yyvsp[0].texto),ini)==0)		{printf("\tError, suma de tipos distintos\n"); (yyval.nodito)=NULL;}
			else if(tipovar((yyvsp[0].texto),ini)==1)	{printf("\tError, suma de tipos distintos\n"); (yyval.nodito)=NULL;}
			else if(tipovar((yyvsp[0].texto),ini)==2)	{(yyval.nodito) = declarar(2,"",0,0,sumaString((yyvsp[-2].nodito)->t_string,retornaString((yyvsp[0].texto),ini)));}		}	}
		else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}		}
#line 2041 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 241 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, *(yyvsp[-2].nodito)->t_float + (yyvsp[0].entero),"");}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2049 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 244 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, *(yyvsp[-2].nodito)->t_float + (yyvsp[0].decimal),"");}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2057 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 247 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==2){(yyval.nodito)=declarar(2,"",0, 0 , sumaString((yyvsp[-2].nodito)->t_string,(yyvsp[0].texto)));}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2065 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 250 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(	(tipovarNodo((yyvsp[-2].nodito))==1)	&&	(tipovarNodo((yyvsp[0].nodito))==1)	){
			(yyval.nodito) = declarar(1,"",0,(*(yyvsp[-2].nodito)->t_float)+(*(yyvsp[0].nodito)->t_float),""); }	
		}
#line 2074 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 257 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[-2].texto),ini)==1){	//////////////////////////////////////////////-------RESTAS-------//////////////////////////////
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)-(yyvsp[0].decimal),""); 	}//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)-(yyvsp[0].decimal),"");	} //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n"); (yyval.nodito)=NULL; }	}
		else {	printf("\tError, una de las variables no existe\n");  (yyval.nodito)=NULL;	}	}
#line 2087 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 265 "ejemplo2.y" /* yacc.c:1646  */
    { 
		if(existe((yyvsp[-2].texto),ini)==1){
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)-(yyvsp[0].entero),""); }  //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)-(yyvsp[0].entero),""); 	}//declaro un nodo auxiliar tipo float	
			if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;	}		}
#line 2100 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 273 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[-2].texto),ini)==1){	
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}	
			if(tipovar((yyvsp[-2].texto),ini)==2)	{
				(yyval.nodito) = declarar(2,"",0,0,restaString(retornaString((yyvsp[-2].texto),ini),(yyvsp[0].texto))); 	}	}//declaro un nodo auxiliar tipo string
		else {	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;	}		}
#line 2114 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 282 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)-(yyvsp[-2].decimal),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,(yyvsp[-2].decimal)-retornaFloat((yyvsp[0].texto),ini),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;	}		}
#line 2127 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 290 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,(yyvsp[-2].entero)-retornaInt((yyvsp[0].texto),ini),"");	}  //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,(yyvsp[-2].entero)-retornaFloat((yyvsp[0].texto),ini),"");} //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");  (yyval.nodito)=NULL;	}		}
#line 2140 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 298 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}	
			if(tipovar((yyvsp[0].texto),ini)==2)	{
				(yyval.nodito) = declarar(2,"",0,0,restaString((yyvsp[-2].texto),retornaString((yyvsp[0].texto),ini)));	}	} //declaro un nodo auxiliar tipo string
		else{	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;	 }		}
#line 2154 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 307 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if((existe((yyvsp[-2].texto),ini))&&(existe((yyvsp[0].texto),ini))){
			if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==0)){
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)-retornaInt((yyvsp[0].texto),ini),"");		}  //declaro un nodo auxiliar tipo float
			if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==1)){
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)-retornaFloat((yyvsp[0].texto),ini),"");		}//declaro un nodo auxiliar tipo float
			if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==1)){
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)-retornaFloat((yyvsp[0].texto),ini),""); 	} //declaro un nodo auxiliar tipo float
			if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==0)){
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)-retornaInt((yyvsp[0].texto),ini),"");  	}//declaro un nodo auxiliar tipo float
			if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==2)){ printf("\tError, suma de tipos distintos\n");	(yyval.nodito)=NULL; }
			if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==2)){ printf("\tError, suma de tipos distintos\n"); 	(yyval.nodito)=NULL; }
			if((tipovar((yyvsp[-2].texto),ini)==2)&&(tipovar((yyvsp[0].texto),ini)==0)){ printf("\tError, suma de tipos distintos\n"); 	(yyval.nodito)=NULL; }
			if((tipovar((yyvsp[-2].texto),ini)==2)&&(tipovar((yyvsp[0].texto),ini)==1)){ printf("\tError, suma de tipos distintos\n"); 	(yyval.nodito)=NULL; }
			if((tipovar((yyvsp[-2].texto),ini)==2)&&(tipovar((yyvsp[0].texto),ini)==2)){
				(yyval.nodito) = declarar(2,"",0,0,restaString(retornaString((yyvsp[-2].texto),ini),retornaString((yyvsp[0].texto),ini)));	}	}
		else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;		}		}
#line 2176 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 324 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(existe((yyvsp[-2].texto),ini)==1){
			if(tipovarNodo((yyvsp[0].nodito))==1){
				if(tipovar((yyvsp[-2].texto),ini)==0)		{(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)-*(yyvsp[0].nodito)->t_float,"");}
				else if(tipovar((yyvsp[-2].texto),ini)==1) {(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)-*(yyvsp[0].nodito)->t_float,"");}
				else if(tipovar((yyvsp[-2].texto),ini)==2)	{ printf("\tError, suma de tipos distintos\n");	(yyval.nodito)=NULL; }		}
			else if(tipovarNodo((yyvsp[0].nodito))==2){
				if(tipovar((yyvsp[-2].texto),ini)==0)		{printf("\tError, suma de tipos distintos\n");	(yyval.nodito)=NULL;}
				else if(tipovar((yyvsp[-2].texto),ini)==1)	{printf("\tError, suma de tipos distintos\n");	(yyval.nodito)=NULL;}
				else if(tipovar((yyvsp[-2].texto),ini)==2)	{
					(yyval.nodito) = declarar(2,"",0,0,restaString(retornaString((yyvsp[-2].texto),ini),(yyvsp[0].nodito)->t_string));}			}
			}	//en caso de no existir una variable, devuelvo nulo para anular toda la operación anterior 
		else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;		}		}
#line 2194 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 337 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovarNodo((yyvsp[-2].nodito))==1){
				if(tipovar((yyvsp[0].texto),ini)==0)		{(yyval.nodito) = declarar(1,"",0, *(yyvsp[-2].nodito)->t_float - retornaInt((yyvsp[0].texto),ini),"");}
				else if(tipovar((yyvsp[0].texto),ini)==1) {(yyval.nodito) = declarar(1,"",0, *(yyvsp[-2].nodito)->t_float - retornaFloat((yyvsp[0].texto),ini),"");}
				else if(tipovar((yyvsp[0].texto),ini)==2)	{ printf("\tError, suma de tipos distintos\n"); (yyval.nodito)=NULL; }		}
			else if(tipovarNodo((yyvsp[-2].nodito))==2){
				if(tipovar((yyvsp[0].texto),ini)==0)		{printf("\tError, suma de tipos distintos\n");	(yyval.nodito)=NULL;}
				else if(tipovar((yyvsp[0].texto),ini)==1)	{printf("\tError, suma de tipos distintos\n");	(yyval.nodito)=NULL;}
				else if(tipovar((yyvsp[0].texto),ini)==2)	{
					(yyval.nodito) = declarar(2,"",0,0,restaString((yyvsp[-2].nodito)->t_string,retornaString((yyvsp[0].texto),ini)));}		}
			}//en caso de no existir una variable, devuelvo nulo para anular toda la operación anterior 
		else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}		}
#line 2212 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 350 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, *(yyvsp[-2].nodito)->t_float - (yyvsp[0].entero),"");}
		else{printf("\tNo se pueden restar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2220 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 353 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, *(yyvsp[-2].nodito)->t_float - (yyvsp[0].decimal),"");}
		else{printf("\tNo se pueden restar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2228 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 356 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==2){(yyval.nodito)=declarar(2,"",0, 0 , restaString((yyvsp[-2].nodito)->t_string,(yyvsp[0].texto)));}
		else{printf("\tNo se pueden restar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2236 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 359 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(	(tipovarNodo((yyvsp[-2].nodito))==1)	&&	(tipovarNodo((yyvsp[0].nodito))==1)	){
			(yyval.nodito) = declarar(1,"",0,(*(yyvsp[-2].nodito)->t_float)-(*(yyvsp[0].nodito)->t_float),""); }	
		}
#line 2245 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 366 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[-2].texto),ini)==1){	///////////////////////////////////////------Multiplicación-------//////////////////////////////////////
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)*(yyvsp[0].decimal),""); 	}//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)*(yyvsp[0].decimal),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	} 	}
		else {	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;		}			}
#line 2258 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 374 "ejemplo2.y" /* yacc.c:1646  */
    { 
		if(existe((yyvsp[-2].texto),ini)==1){
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)*(yyvsp[0].entero),"");  }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)*(yyvsp[0].entero),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");	(yyval.nodito)=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");(yyval.nodito)=NULL;		}			}
#line 2271 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 382 "ejemplo2.y" /* yacc.c:1646  */
    {	printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	}
#line 2277 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 383 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)*(yyvsp[-2].decimal),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)*(yyvsp[-2].decimal),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: strings no se multiplican\n");		(yyval.nodito)=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;	}			}
#line 2290 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 391 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)*(yyvsp[-2].entero),""); } //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)*(yyvsp[-2].entero),""); }//declaro un nodo auxiliar tipo float	
			if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");  (yyval.nodito)=NULL;	}				}
#line 2303 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 399 "ejemplo2.y" /* yacc.c:1646  */
    {	printf("\tError de sintaxis: strings no se multiplican\n");	}
#line 2309 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 400 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if((existe((yyvsp[-2].texto),ini))&&(existe((yyvsp[0].texto),ini))){
			if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==0)){
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)*retornaInt((yyvsp[-2].texto),ini),"");		}  //declaro un nodo auxiliar tipo float
			if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==1)){
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)*retornaFloat((yyvsp[-2].texto),ini),"");		}//declaro un nodo auxiliar tipo float
			if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==1)){
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)*retornaFloat((yyvsp[0].texto),ini),""); 	} //declaro un nodo auxiliar tipo float
			if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==0)){
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)*retornaInt((yyvsp[0].texto),ini),"");  }//declaro un nodo auxiliar tipo float
			if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==2)){ printf("\tError, operación de tipos distintos\n"); 	(yyval.nodito)=NULL;	}
			if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==2)){ printf("\tError, operación de tipos distintos\n"); 	(yyval.nodito)=NULL;	}
			if((tipovar((yyvsp[-2].texto),ini)==2)&&(tipovar((yyvsp[0].texto),ini)==0)){ printf("\tError, operación de tipos distintos\n"); 	(yyval.nodito)=NULL;	}
			if((tipovar((yyvsp[-2].texto),ini)==2)&&(tipovar((yyvsp[0].texto),ini)==1)){ printf("\tError, operación de tipos distintos\n"); 	(yyval.nodito)=NULL;	}
			if((tipovar((yyvsp[-2].texto),ini)==2)&&(tipovar((yyvsp[0].texto),ini)==2)){ printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	}				}
		else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}				}
#line 2330 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 416 "ejemplo2.y" /* yacc.c:1646  */
    {	
			if(existe((yyvsp[-2].texto),ini)==1){
				if(tipovarNodo((yyvsp[0].nodito))==1){
					if(tipovar((yyvsp[-2].texto),ini)==0)		{(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)*(*(yyvsp[0].nodito)->t_float),"");}
					else if(tipovar((yyvsp[-2].texto),ini)==1) {(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)*(*(yyvsp[0].nodito)->t_float),"");}
					else if(tipovar((yyvsp[-2].texto),ini)==2)	{ printf("\tError, operación de tipos distintos\n");	(yyval.nodito)=NULL;	 }				}
				else if(tipovarNodo((yyvsp[0].nodito))==2){ printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	}		}
			else{	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL; }
											}
#line 2344 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 425 "ejemplo2.y" /* yacc.c:1646  */
    {	
			if(existe((yyvsp[0].texto),ini)==1){
				if(tipovarNodo((yyvsp[-2].nodito))==1){
					if(tipovar((yyvsp[0].texto),ini)==0)		{(yyval.nodito) = declarar(1,"",0,(*(yyvsp[-2].nodito)->t_float)*retornaInt((yyvsp[0].texto),ini),"");}
					else if(tipovar((yyvsp[0].texto),ini)==1) {(yyval.nodito) = declarar(1,"",0,(*(yyvsp[-2].nodito)->t_float)*retornaFloat((yyvsp[0].texto),ini),"");}
					else if(tipovar((yyvsp[0].texto),ini)==2)	{ printf("\tError, operación de tipos distintos\n"); 	(yyval.nodito)=NULL;	} 		}
				else if(tipovarNodo((yyvsp[-2].nodito))==2){ printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	}		}
			else{	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL; }			}
#line 2357 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 433 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, (*(yyvsp[-2].nodito)->t_float) * ((yyvsp[0].entero)),"");}
		else{printf("\tNo se pueden multiplicar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2365 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 436 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, (*(yyvsp[-2].nodito)->t_float) * ((yyvsp[0].decimal)),"");}
		else{printf("\tNo se pueden multiplicar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2373 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 439 "ejemplo2.y" /* yacc.c:1646  */
    {	printf("\tNo se pueden multiplicar strings\n");	 (yyval.nodito)=NULL;	}
#line 2379 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 440 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(	(tipovarNodo((yyvsp[-2].nodito))==1)	&&	(tipovarNodo((yyvsp[0].nodito))==1)	){
			(yyval.nodito) = declarar(1,"",0,(*(yyvsp[-2].nodito)->t_float)*(*(yyvsp[0].nodito)->t_float),""); }	
		}
#line 2388 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 447 "ejemplo2.y" /* yacc.c:1646  */
    {
			if(existe((yyvsp[-2].texto),ini)==1){	//////////////////////////////------DIVICIÓN-------//////////////////////////////
				if(tipovar((yyvsp[-2].texto),ini)==0)	{	
					(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)/(yyvsp[0].decimal),""); 	}//declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[-2].texto),ini)==1)	{	
					(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)/(yyvsp[0].decimal),"");	} //declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: strings no se dividen\n");	(yyval.nodito)=NULL; }	}
			else {	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;	}				}
#line 2401 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 455 "ejemplo2.y" /* yacc.c:1646  */
    { 
			if(existe((yyvsp[-2].texto),ini)==1){
				if(tipovar((yyvsp[-2].texto),ini)==0)	{	
					(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)/(yyvsp[0].entero),""); 	} //declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[-2].texto),ini)==1)	{	
					(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)/(yyvsp[0].entero),"");	} //declaro un nodo auxiliar tipo float	
				if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede dividir numero con string\n");	(yyval.nodito)=NULL;	}	}
			else {	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}			}
#line 2414 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 464 "ejemplo2.y" /* yacc.c:1646  */
    {	printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	}
#line 2420 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 466 "ejemplo2.y" /* yacc.c:1646  */
    {
			if(existe((yyvsp[0].texto),ini)==1){
				if(tipovar((yyvsp[0].texto),ini)==0)	{	
					(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)/(yyvsp[-2].decimal),""); 	}//declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[0].texto),ini)==1)	{	
					(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)/(yyvsp[-2].decimal),""); 	}//declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: strings no se dividen\n");		(yyval.nodito)=NULL;	}	}
			else {	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}			}
#line 2433 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 474 "ejemplo2.y" /* yacc.c:1646  */
    {
			if(existe((yyvsp[0].texto),ini)==1){
				if(tipovar((yyvsp[0].texto),ini)==0)	{	
					(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)/(yyvsp[-2].entero),"");  }//declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[0].texto),ini)==1)	{	
					(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)/(yyvsp[-2].entero),"");	} //declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: strings no se dividen\n");		(yyval.nodito)=NULL;	}	}
			else {	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}			}
#line 2446 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 482 "ejemplo2.y" /* yacc.c:1646  */
    {	printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	}
#line 2452 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 484 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if((existe((yyvsp[-2].texto),ini))&&(existe((yyvsp[0].texto),ini))){
			if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==0)){
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)/retornaInt((yyvsp[-2].texto),ini),"");  }//declaro un nodo auxiliar tipo float
			if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==1)){
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)/retornaFloat((yyvsp[-2].texto),ini),"");	}//declaro un nodo auxiliar tipo float
			if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==1)){
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)/retornaFloat((yyvsp[0].texto),ini),"");  }//declaro un nodo auxiliar tipo float
			if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==0)){
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)/retornaInt((yyvsp[0].texto),ini),"");  }//declaro un nodo auxiliar tipo float
			if((tipovar((yyvsp[-2].texto),ini)==0)&&(tipovar((yyvsp[0].texto),ini)==2)){ printf("\tError, operación de tipos distintos\n"); 	(yyval.nodito)=NULL;	}
			if((tipovar((yyvsp[-2].texto),ini)==1)&&(tipovar((yyvsp[0].texto),ini)==2)){ printf("\tError, operación de tipos distintos\n");	(yyval.nodito)=NULL;	}
			if((tipovar((yyvsp[-2].texto),ini)==2)&&(tipovar((yyvsp[0].texto),ini)==0)){ printf("\tError, operación de tipos distintos\n"); 	(yyval.nodito)=NULL;	}
			if((tipovar((yyvsp[-2].texto),ini)==2)&&(tipovar((yyvsp[0].texto),ini)==1)){ printf("\tError, operación de tipos distintos\n"); 	(yyval.nodito)=NULL;	}
			if((tipovar((yyvsp[-2].texto),ini)==2)&&(tipovar((yyvsp[0].texto),ini)==2)){ printf("\tError de sintaxis: strings no se dividen\n");	(yyval.nodito)=NULL;	}
			}//en caso de no existir una variable, devuelvo nulo para anular toda la operación anterior 
		else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}											}
#line 2474 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 501 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(existe((yyvsp[-2].texto),ini)==1){
			if(tipovarNodo((yyvsp[0].nodito))==1){
				if(tipovar((yyvsp[-2].texto),ini)==0)		{(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)/(*(yyvsp[0].nodito)->t_float),"");}
				else if(tipovar((yyvsp[-2].texto),ini)==1) {(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)/(*(yyvsp[0].nodito)->t_float),"");}
				else if(tipovar((yyvsp[-2].texto),ini)==2)	{ printf("\tError, operación de tipos distintos\n"); 	(yyval.nodito)=NULL;	}	}
				else if(tipovarNodo((yyvsp[0].nodito))==2){ printf("\tError de sintaxis: strings no se dividen\n");	(yyval.nodito)=NULL;	}
			}//en caso de no existir una variable, devuelvo nulo para anular toda la operación anterior 
		else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}				}
#line 2488 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 510 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovarNodo((yyvsp[-2].nodito))==1){
				if(tipovar((yyvsp[0].texto),ini)==0)		{(yyval.nodito) = declarar(1,"",0,(*(yyvsp[-2].nodito)->t_float)/retornaInt((yyvsp[0].texto),ini),"");}
				else if(tipovar((yyvsp[0].texto),ini)==1) {(yyval.nodito) = declarar(1,"",0,(*(yyvsp[-2].nodito)->t_float)/retornaFloat((yyvsp[0].texto),ini),"");}
				else if(tipovar((yyvsp[0].texto),ini)==2)	{ printf("\tError, operación de tipos distintos\n"); 	(yyval.nodito)=NULL;	}		}
			else if(tipovarNodo((yyvsp[-2].nodito))==2){ printf("\tError de sintaxis: strings no se dividen\n");	(yyval.nodito)=NULL;	}
			}//en caso de no existir una variable, devuelvo nulo para anular toda la operación anterior 
		else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}		}
#line 2502 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 519 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, *(yyvsp[-2].nodito)->t_float / (yyvsp[0].entero),"");}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2510 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 522 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, *(yyvsp[-2].nodito)->t_float / (yyvsp[0].decimal),"");}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2518 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 525 "ejemplo2.y" /* yacc.c:1646  */
    {	printf("\tNo se pueden dividir strings\n");	 (yyval.nodito)=NULL;	}
#line 2524 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 526 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(	(tipovarNodo((yyvsp[-2].nodito))==1)	&&	(tipovarNodo((yyvsp[0].nodito))==1)	){
			(yyval.nodito) = declarar(1,"",0,(*(yyvsp[-2].nodito)->t_float)/(*(yyvsp[0].nodito)->t_float),""); }	
		}
#line 2533 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 533 "ejemplo2.y" /* yacc.c:1646  */
    {	//////////////////////////////------POTENCIA------//////////////////////////////
						if(tipovarNodo((yyvsp[-3].nodito))==2)		{	
							(yyval.nodito)=declarar(2,"",0,0,powString((yyvsp[-3].nodito)->t_string,(yyvsp[-1].entero)));		}
						else if(tipovarNodo((yyvsp[-3].nodito))==1)	{	
							(yyval.nodito)=declarar(1,"",0,powFloat(*(yyvsp[-3].nodito)->t_float,(yyvsp[-1].entero)),"");	}			}
#line 2543 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 538 "ejemplo2.y" /* yacc.c:1646  */
    {
						if(existe((yyvsp[-3].texto),ini)==1){
							if(tipovar((yyvsp[-3].texto),ini)==0)		{
								(yyval.nodito)=declarar(1,"",0,powInt(retornaInt((yyvsp[-3].texto),ini),(yyvsp[-1].entero)),"");		}
							else if(tipovar((yyvsp[-3].texto),ini)==1)	{	
								(yyval.nodito)=declarar(1,"",0,powFloat(retornaFloat((yyvsp[-3].texto),ini),(yyvsp[-1].entero)),"");		}
							else if(tipovar((yyvsp[-3].texto),ini)==2)	{	
								(yyval.nodito)=declarar(2,"",0,0,powString(retornaString((yyvsp[-3].texto),ini),(yyvsp[-1].entero)));	}	}//devuelvo nulo para anular toda la operación anterior 
						else{	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;	 }
	}
#line 2558 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 553 "ejemplo2.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[0].entero);}
#line 2564 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 555 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.texto) = (yyvsp[0].texto);}
#line 2570 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 558 "ejemplo2.y" /* yacc.c:1646  */
    {//DECLARAR UN VALOR Y ASIGNARLE UN ENTERO
						if(existe((yyvsp[-3].texto),ini)==1){
							printf("\tError de sintaxis: La variable ya existe\n");
							//imprimeValores($2,ini);
							}
						else if((yyvsp[-4].entero)==0){ 
							agregar(0, (yyvsp[-3].texto), (yyvsp[-1].entero), 0,"", cab,ini);
							//imprimeValores($2,ini);
							recorrer(ini);}
						else if((yyvsp[-4].entero)==1){
							agregar(1, (yyvsp[-3].texto), 0, (yyvsp[-1].entero),"", cab,ini);
							//imprimeValores($2,ini);
							recorrer(ini);	}
						else if((yyvsp[-4].entero)==2){
							printf("\tError de sintaxis: No se puede asignar valor int a variable tipo String\n");	}
						(yyval.texto)=(yyvsp[-3].texto);
					}
#line 2592 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 575 "ejemplo2.y" /* yacc.c:1646  */
    {//DECLARAR UN VALOR Y ASIGNARLE UN DECIMAL
						if(existe((yyvsp[-3].texto),ini)==1){
							printf("\tError de sintaxis: La variable ya existe\n");		}	 
						else if((yyvsp[-4].entero)==0){ 
							agregar(0, (yyvsp[-3].texto), (yyvsp[-1].decimal), 0,"", cab,ini);
							recorrer(ini);	}
						else if((yyvsp[-4].entero)==1){
							agregar(1, (yyvsp[-3].texto), 0, (yyvsp[-1].decimal),"", cab,ini);
							recorrer(ini);	}
						else if((yyvsp[-4].entero)==2){
							printf("\tError de sintaxis: No se puede asignar valor float a variable tipo String\n");	}
						(yyval.texto)=(yyvsp[-3].texto);
					}
#line 2610 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 588 "ejemplo2.y" /* yacc.c:1646  */
    {//DECLARAR UN VALOR Y ASIGNARLE UNA CADENA
						if(existe((yyvsp[-3].texto),ini)==1){
							printf("\tError de sintaxis: La variable ya existe\n");		}						
						else if((yyvsp[-4].entero)==0){ 
							printf("\tError de sintaxis: No se puede asignar String a variable tipo int\n");	}
						else if((yyvsp[-4].entero)==1){
							printf("\tError de sintaxis: No se puede asignar String a variable tipo float\n");	}
						else if((yyvsp[-4].entero)==2){
							if((yyvsp[-1].texto)==NULL)	{printf("\tExpresión no valida\n");}
							else	{agregar(2, (yyvsp[-3].texto), 0, 0,(yyvsp[-1].texto), cab,ini);	recorrer(ini);	}	}
						(yyval.texto)=(yyvsp[-3].texto);
					}
#line 2627 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 600 "ejemplo2.y" /* yacc.c:1646  */
    {//DECLARAR UN VALOR Y ASIGNARLE UN NODO
						if(existe((yyvsp[-3].texto),ini)==1){
							printf("\tError de sintaxis: La variable ya existe\n");		}
						else if((yyvsp[-1].nodito)==NULL){
							printf("\tExpresión no válida para asignar\n");	}	
						else{
							if (tipovarNodo((yyvsp[-1].nodito))==2)	{				
								if((yyvsp[-4].entero)==0){	printf("\tError de sintaxis: No se puede asignar String a variable tipo int\n");	}
								if((yyvsp[-4].entero)==1){	printf("\tError de sintaxis: No se puede asignar String a variable tipo float\n");	}
								if((yyvsp[-4].entero)==2){	agregar(2, (yyvsp[-3].texto), 0, 0,(yyvsp[-1].nodito)->t_string, cab,ini);	recorrer(ini);	}	}
							else if (tipovarNodo((yyvsp[-1].nodito))==1)	{
								if((yyvsp[-4].entero)==0){	agregar(0, (yyvsp[-3].texto), *(yyvsp[-1].nodito)->t_float, 0,"", cab,ini);	recorrer(ini);	}
								if((yyvsp[-4].entero)==1){	agregar(1, (yyvsp[-3].texto), 0, *(yyvsp[-1].nodito)->t_float,"", cab,ini);	recorrer(ini);	}
								if((yyvsp[-4].entero)==2){	printf("\tError de sintaxis: No se puede asignar int o float a variable tipo string\n");	}	}	}
						(yyval.texto)=(yyvsp[-3].texto);
					}
#line 2648 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 616 "ejemplo2.y" /* yacc.c:1646  */
    {//DECLARAR UNA VARIABLE Y ASIGNARLE EL VALOR DE OTRA VARIABLE
						if(existe((yyvsp[-1].texto),ini)==1){// si la $4 existe
							if((tipovar((yyvsp[-1].texto),ini)==0)||(tipovar((yyvsp[-1].texto),ini)==1)){//si la $4 es un numero
								if((yyvsp[-4].entero)==0){ //si tipo var es INT
									agregar(0, (yyvsp[-3].texto), retornaInt((yyvsp[-1].texto),ini)+retornaFloat((yyvsp[-1].texto),ini), 0,"", cab,ini);
									recorrer(ini);	}
								else if((yyvsp[-4].entero)==1){//si tipo var es FLOAT
									agregar(1, (yyvsp[-3].texto), 0, retornaInt((yyvsp[-1].texto),ini)+retornaFloat((yyvsp[-1].texto),ini),"", cab,ini);
									recorrer(ini);	}
								else if((yyvsp[-4].entero)==2){//si tipo var es STRING
									printf("\tError, la variable que se desea asignar es de otro tipo\n");}	
								}
							else if(tipovar((yyvsp[-1].texto),ini)==2){//si $4 es string
								if((yyvsp[-4].entero)==0){ //si tipo var es INT
									printf("\tError, la variable que se desea asignar es de otro tipo\n");	}
								else if((yyvsp[-4].entero)==1){//si tipo var es FLOAT
									printf("\tError, la variable que se desea asignar es de otro tipo\n");	}
								else if((yyvsp[-4].entero)==2){//si tipo var es STRING
									agregar(2, (yyvsp[-3].texto), 0, 0,retornaString((yyvsp[-1].texto),ini), cab,ini);
									recorrer(ini);}								
								}
							(yyval.texto)=(yyvsp[-3].texto);}
						else {printf("\tLa variable que se quiere asignar no existe\n");}//si $4 no existe
					}
#line 2677 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 640 "ejemplo2.y" /* yacc.c:1646  */
    {//DECLARAR SIN DAR UN VALOR;
						if(existe((yyvsp[-1].texto),ini)==1){
							printf("\tError de sintaxis: La variable ya existe\n");		}
						else if((yyvsp[-2].entero)==0){ //si tipo var es INT
							agregar(0, (yyvsp[-1].texto), 0, 0,"", cab,ini);
							recorrer(ini);	}
						else if((yyvsp[-2].entero)==1){//si tipo var es FLOAT
							agregar(1, (yyvsp[-1].texto), 0, 0,"", cab,ini);
							recorrer(ini);	}
						else if((yyvsp[-2].entero)==2){//si tipo var es STRING
							agregar(2, (yyvsp[-1].texto), 0, 0,"", cab,ini);
							recorrer(ini);	}
						(yyval.texto)=(yyvsp[-1].texto);
					}
#line 2696 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 658 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2712 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 669 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2728 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 680 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2744 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 691 "ejemplo2.y" /* yacc.c:1646  */
    {
						if((yyvsp[0].nodito)==NULL){
							printf("\tExpresión no valida para gregar, se conserva el valor anterior\n");}
						else{
							if(existe((yyvsp[-2].texto),ini)==1){//void sobreescribirValor(char * nombre,int varInt, float varFloat , char * varString, Nodo * ini)
								if(tipovar((yyvsp[-2].texto),ini)==0)	{
									if(tipovarNodo((yyvsp[0].nodito))==1){
										sobreescribirValor((yyvsp[-2].texto), *(yyvsp[0].nodito)->t_float, 0, "", ini);}}
								if(tipovar((yyvsp[-2].texto),ini)==1)	{
									if(tipovarNodo((yyvsp[0].nodito))==1){
										sobreescribirValor((yyvsp[-2].texto), 0, *(yyvsp[0].nodito)->t_float, "", ini);}}
								if(tipovar((yyvsp[-2].texto),ini)==2)	{
									if(tipovarNodo((yyvsp[0].nodito))==2){
										sobreescribirValor((yyvsp[-2].texto), 0, 0, (yyvsp[0].nodito)->t_string, ini);}}
								}
							else{	printf("\tError de sintaxis: La variable no existe\n");}	}
						(yyval.texto)=(yyvsp[-2].texto);						
					}
#line 2767 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 710 "ejemplo2.y" /* yacc.c:1646  */
    {
						if(existe((yyvsp[0].texto),ini)==0){
							printf("\tLa variable no existe\n");}
						else{
							if(existe((yyvsp[-2].texto),ini)==1){//void sobreescribirValor(char * nombre,int varInt, float varFloat , char * varString, Nodo * ini)
								if(tipovar((yyvsp[-2].texto),ini)==0)	{
									if(tipovar((yyvsp[0].texto),ini)==0){
										sobreescribirValor((yyvsp[-2].texto), retornaInt((yyvsp[0].texto),ini), 0, "", ini);}
									else if(tipovar((yyvsp[0].texto),ini)==1){
										sobreescribirValor((yyvsp[-2].texto), retornaFloat((yyvsp[0].texto),ini), 0, "", ini);}
									else{printf("\tError de tipo de variable\n");}		}
								else if(tipovar((yyvsp[-2].texto),ini)==1)	{
									if(tipovar((yyvsp[0].texto),ini)==0){
										sobreescribirValor((yyvsp[-2].texto), 0, retornaInt((yyvsp[0].texto),ini), "", ini);}
									else if(tipovar((yyvsp[0].texto),ini)==1){
										sobreescribirValor((yyvsp[-2].texto), 0, retornaFloat((yyvsp[0].texto),ini), "", ini);}
									else{printf("\tError de tipo de variable\n");}	}
								if(tipovar((yyvsp[-2].texto),ini)==2)	{
									if(tipovar((yyvsp[0].texto),ini)==2){
										sobreescribirValor((yyvsp[-2].texto), 0, 0, retornaString((yyvsp[0].texto),ini), ini);}
									else	{printf("\tError de tipo de variable\n");}		}		}
							else{	printf("\tError de sintaxis: La variable no existe\n");}
						(yyval.texto)=(yyvsp[-2].texto);						
						}	
			}
#line 2797 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 738 "ejemplo2.y" /* yacc.c:1646  */
    {//esta funcion es util para ver los valores de determinada variable...
					if(existe((yyvsp[-1].texto),ini)==1){
						imprimeValores((yyvsp[-1].texto),ini);
						(yyval.texto)=(yyvsp[-1].texto);}//esto no importa, es para que devuelva algo
					else{
						printf("\tLa variable no existe\n");}
}
#line 2809 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 748 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(  (existe((yyvsp[-3].texto),ini)==0) ||  (existe((yyvsp[-1].texto),ini)==0)  ){//si alguna de las dos variables no existe devuelve false
			printf("\tError: Una de las variables no existe\n");
			(yyval.entero)=2;}//2 será el error
		else{
			if		(	(tipovar((yyvsp[-3].texto),ini)==0) && (tipovar((yyvsp[-1].texto),ini)==0)	){	
					if(retornaInt((yyvsp[-3].texto),ini)<retornaInt((yyvsp[-1].texto),ini))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else if	(	(tipovar((yyvsp[-3].texto),ini)==1) && (tipovar((yyvsp[-1].texto),ini)==1)	){	
					if(retornaFloat((yyvsp[-3].texto),ini)<retornaFloat((yyvsp[-1].texto),ini))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}		
			else if	(	(tipovar((yyvsp[-3].texto),ini)==0) && (tipovar((yyvsp[-1].texto),ini)==1)	){	
					if(retornaInt((yyvsp[-3].texto),ini)<retornaFloat((yyvsp[-1].texto),ini))	{	(yyval.entero)=1;	}
					else{ (yyval.entero)=0; }	}		
			else if	(	(tipovar((yyvsp[-3].texto),ini)==1) && (tipovar((yyvsp[-1].texto),ini)==0)	){	
					if(retornaFloat((yyvsp[-3].texto),ini)<retornaInt((yyvsp[-1].texto),ini))	{	(yyval.entero)=1;	}
					else{ (yyval.entero)=0; }	}
			else {	printf("\tError de tipo de datos\n"); (yyval.entero)=2;	}
			}		
	}
#line 2834 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 769 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(  (existe((yyvsp[-3].texto),ini)==0) ||  (existe((yyvsp[-1].texto),ini)==0)  ){//si alguna de las dos variables no existe devuelve false
			printf("\tError: Una de las variables no existe\n");
			(yyval.entero)=2;}//2 será el error
		else{
			if		(	(tipovar((yyvsp[-3].texto),ini)==0) && (tipovar((yyvsp[-1].texto),ini)==0)	){	
					if(retornaInt((yyvsp[-3].texto),ini)>retornaInt((yyvsp[-1].texto),ini))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else if	(	(tipovar((yyvsp[-3].texto),ini)==1) && (tipovar((yyvsp[-1].texto),ini)==1)	){	
					if(retornaFloat((yyvsp[-3].texto),ini)>retornaFloat((yyvsp[-1].texto),ini))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}		
			else if	(	(tipovar((yyvsp[-3].texto),ini)==0) && (tipovar((yyvsp[-1].texto),ini)==1)	){	
					if(retornaInt((yyvsp[-3].texto),ini)>retornaFloat((yyvsp[-1].texto),ini))	{	(yyval.entero)=1;	}
					else{ (yyval.entero)=0; }	}		
			else if	(	(tipovar((yyvsp[-3].texto),ini)==1) && (tipovar((yyvsp[-1].texto),ini)==0)	){	
					if(retornaFloat((yyvsp[-3].texto),ini)>retornaInt((yyvsp[-1].texto),ini))	{	(yyval.entero)=1;	}
					else{ (yyval.entero)=0; }	}
			else {	printf("\tError de tipo de datos\n"); (yyval.entero)=2;	}
			}		
	}
#line 2859 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 790 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(  (existe((yyvsp[-4].texto),ini)==0) ||  (existe((yyvsp[-1].texto),ini)==0)  ){//si alguna de las dos variables no existe devuelve false
			printf("\tError: Una de las variables no existe\n");
			(yyval.entero)=2;}//2 será el error
		else{
			if		(	(tipovar((yyvsp[-4].texto),ini)==0) && (tipovar((yyvsp[-1].texto),ini)==0)	){	
					if(retornaInt((yyvsp[-4].texto),ini)==retornaInt((yyvsp[-1].texto),ini))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else if	(	(tipovar((yyvsp[-4].texto),ini)==1) && (tipovar((yyvsp[-1].texto),ini)==1)	){	
					if(retornaFloat((yyvsp[-4].texto),ini)==retornaFloat((yyvsp[-1].texto),ini))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}		
			else if	(	(tipovar((yyvsp[-4].texto),ini)==0) && (tipovar((yyvsp[-1].texto),ini)==1)	){	
					if(retornaInt((yyvsp[-4].texto),ini)==retornaFloat((yyvsp[-1].texto),ini))	{	(yyval.entero)=1;	}
					else{ (yyval.entero)=0; }	}		
			else if	(	(tipovar((yyvsp[-4].texto),ini)==1) && (tipovar((yyvsp[-1].texto),ini)==0)	){	
					if(retornaFloat((yyvsp[-4].texto),ini)==retornaInt((yyvsp[-1].texto),ini))	{	(yyval.entero)=1;	}
					else{ (yyval.entero)=0; }	}
			else if (	(tipovar((yyvsp[-4].texto),ini)==2)  &&  (tipovar((yyvsp[-1].texto),ini)==2)	)	{
				if(precisionCompare( retornaString((yyvsp[-4].texto),ini) , retornaString((yyvsp[-1].texto),ini) )==0){	(yyval.entero)=1;	}
				else {	(yyval.entero)=0;	}		}					
			else {	printf("\tError de tipo de datos\n"); (yyval.entero)=2;	}
			}		
	}
#line 2887 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 814 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(((yyvsp[-7].nodito)==NULL)||((yyvsp[-2].nodito)==NULL)){printf("\tError en la expresión\n");}
		else{
			if		(	(tipovarNodo((yyvsp[-7].nodito))==1) && (tipovarNodo((yyvsp[-2].nodito))==1)	){	
					if((*(yyvsp[-7].nodito)->t_float)==(*(yyvsp[-2].nodito)->t_float))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}	}
	}
#line 2900 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 823 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(((yyvsp[-6].nodito)==NULL)||((yyvsp[-2].nodito)==NULL)){printf("\tError en la expresión\n");}
		else{
			if		(	(tipovarNodo((yyvsp[-6].nodito))==1) && (tipovarNodo((yyvsp[-2].nodito))==1)	){	
					if((*(yyvsp[-6].nodito)->t_float)>(*(yyvsp[-2].nodito)->t_float))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}	}
	}
#line 2913 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 832 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(((yyvsp[-6].nodito)==NULL)||((yyvsp[-2].nodito)==NULL)){printf("\tError en la expresión\n");}
		else{
			if		(	(tipovarNodo((yyvsp[-6].nodito))==1) && (tipovarNodo((yyvsp[-2].nodito))==1)	){	
					if((*(yyvsp[-6].nodito)->t_float)<(*(yyvsp[-2].nodito)->t_float))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}	}
	}
#line 2926 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 841 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-1].nodito))==1)	{	
					if((yyvsp[-4].decimal)==(*(yyvsp[-1].nodito)->t_float))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 2937 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 848 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-4].nodito))==1)	{	
					if((*(yyvsp[-4].nodito)->t_float)==(yyvsp[-1].decimal))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 2948 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 855 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-1].nodito))<1)	{	
					if((yyvsp[-3].decimal)==(*(yyvsp[-1].nodito)->t_float))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 2959 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 862 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-3].nodito))==1)	{	
					if((*(yyvsp[-3].nodito)->t_float)<(yyvsp[-1].decimal))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 2970 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 869 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-1].nodito))>1)	{	
					if((yyvsp[-3].decimal)==(*(yyvsp[-1].nodito)->t_float))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 2981 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 876 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-3].nodito))==1)	{	
					if((*(yyvsp[-3].nodito)->t_float)>(yyvsp[-1].decimal))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 2992 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 883 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-1].nodito))==1)	{	
					if((yyvsp[-4].entero)==(*(yyvsp[-1].nodito)->t_float))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 3003 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 890 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-4].nodito))==1)	{	
					if((*(yyvsp[-4].nodito)->t_float)==(yyvsp[-1].entero))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 3014 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 897 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-1].nodito))<1)	{	
					if((yyvsp[-3].entero)==(*(yyvsp[-1].nodito)->t_float))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 3025 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 904 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-3].nodito))==1)	{	
					if((*(yyvsp[-3].nodito)->t_float)<(yyvsp[-1].entero))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 3036 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 911 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-1].nodito))>1)	{	
					if((yyvsp[-3].entero)==(*(yyvsp[-1].nodito)->t_float))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 3047 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 918 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-3].nodito))==1)	{	
					if((*(yyvsp[-3].nodito)->t_float)>(yyvsp[-1].entero))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 3058 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;


#line 3062 "ejemplo2.tab.c" /* yacc.c:1646  */
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
#line 939 "ejemplo2.y" /* yacc.c:1906  */


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
