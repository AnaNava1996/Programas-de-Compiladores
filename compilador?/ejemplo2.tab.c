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
#define YYLAST   637

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  24
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  307

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
      19,    21,    13,    11,    20,    12,     2,    14,     2,     2,
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
      82,    86,    87,    88,    89,    90,    91,    93,    94,    95,
      96,    98,    99,   100,   101,   103,   106,   112,   114,   115,
     119,   123,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   151,   159,   167,   176,   184,   192,   199,   216,
     227,   238,   241,   244,   247,   254,   262,   270,   279,   287,
     295,   304,   321,   334,   347,   350,   353,   356,   363,   371,
     379,   380,   388,   396,   397,   413,   422,   430,   433,   436,
     437,   444,   452,   461,   463,   471,   479,   481,   498,   507,
     516,   519,   522,   523,   530,   535,   550,   552,   555,   572,
     585,   597,   610,   634,   652,   663,   674,   685,   702,   712,
     733,   754,   778,   785,   792,   799,   806,   813,   820
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTERO", "DECIMAL", "TEXTO", "POTENCIA",
  "PRINTF", "TIPOVAR", "NOMBRE", "IF", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'='", "';'", "'\\n'", "'('", "','", "')'", "'<'", "'>'", "$accept",
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
      44,    41,    60,    62
};
# endif

#define YYPACT_NINF -24

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-24)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -24,   141,   -24,   -12,   -24,   -24,   -24,   -24,    -7,   -24,
     -24,     7,   154,   -24,   -24,   521,   541,    14,   548,   200,
      13,   263,    27,    38,    73,    79,   -24,    13,    -2,    69,
      -5,    84,   429,   429,   429,   429,    64,   134,   429,   429,
     429,   429,    64,   136,   429,   429,   429,   504,   504,   154,
     138,   429,   429,   429,   429,   143,     3,   429,   429,   429,
     429,   429,   -24,   146,   166,   167,   169,   429,   109,   193,
     577,     2,   209,   154,   154,   154,   154,    20,   154,   154,
     154,   154,   154,   183,   213,   172,   227,   -24,   183,   213,
     227,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   607,   -24,   -24,   183,   213,   227,   -24,   183,   213,
     227,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     612,   -24,   -24,   431,   441,   451,   401,   506,   183,   213,
     227,   -24,   183,   213,   227,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   257,   296,   307,    95,   158,
     257,   296,   307,    95,   158,   186,   195,   203,   -24,   -24,
     186,   195,   203,   -24,   -24,   -24,   429,   -24,   257,   296,
     307,    95,   158,   257,   296,   307,    95,   158,   186,   195,
     203,   -24,   -24,   186,   195,   203,   -24,   -24,   109,   617,
     577,   126,   436,   -24,   -24,   -24,   -24,   617,    28,   208,
     429,   429,   214,   154,   154,   228,    13,    13,    69,    -5,
      69,    -5,   -24,   -24,   -24,   -24,    20,   -24,    69,    -5,
      69,    -5,   -24,   -24,   -24,   -24,   461,   510,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,   154,
     154,    20,    20,    20,    20,    20,   556,   563,   570,   593,
     600,   236,   429,    50,   292,   154,   622,   313,   317,    13,
     229,   232,   322,    20,    20,    20,    20,   471,   481,   491,
     104,   222,   234,   247,   252,   -24,   -24,   -24,   -24,   -24,
     262,   362,   -24,   -24,   367,   -24,   -24,   278,   -24,   -24,
     322,   322,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   281,
     -24,   -24,   -24,   429,   416,   286,   -24
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    14,    21,    38,    37,     0,   116,
     117,     0,     0,     4,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,    15,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,    31,     0,    42,    66,    19,    34,
      46,    79,    17,    32,    50,    92,    18,    33,    54,   105,
      20,     0,    58,     5,    27,    23,    43,    65,    30,    26,
      47,    78,    28,    24,    51,    91,    29,    25,    55,   104,
       0,    59,     6,     0,     0,     0,     0,     0,    44,    45,
      39,    67,    48,    49,    40,    80,    52,    53,    93,    56,
      57,   106,    60,    61,     7,    71,    72,    73,    74,    70,
      84,    85,    86,    87,    83,    97,    98,    99,   100,    96,
     110,   111,   112,   113,   109,    10,     0,   123,    63,    62,
      64,    69,    68,    76,    75,    77,    82,    81,    89,    88,
      90,    95,    94,   102,   101,   103,   108,   107,   124,   125,
     126,   127,     0,     9,    11,    12,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    31,
      19,    34,    17,    32,    18,    33,     0,    20,    27,    23,
      30,    26,    28,    24,    29,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
       0,     0,   135,   137,     0,   136,   138,     0,   129,   130,
      16,    19,    17,    18,    35,    36,    41,   114,   115,     0,
     133,   134,   131,     0,     0,     0,   132
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -24,   -24,   -24,    53,   311,    -1,   365,   -23,   -24,   135,
     -24,   -24,   -24,   -24
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    14,    68,   197,    85,    70,    19,    20,   192,
      22,    23,    24,    25
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      17,     4,     5,     6,     7,    71,    26,    10,    80,    81,
      12,    31,    27,    51,    52,    53,    54,    67,   202,   166,
     167,   126,    10,     4,   203,   204,    28,    17,   148,   153,
     158,   163,   216,    44,   171,   176,   181,   186,   191,    51,
      52,    53,    54,    17,   198,    62,    31,    31,    31,   251,
      17,    17,    17,    17,    15,    63,    17,    17,    17,    17,
      17,    51,    52,    53,    54,    29,    17,     4,     5,     6,
       7,   282,    31,    31,    31,    31,    12,    31,    31,    31,
      31,    31,    75,    76,    77,    83,    88,    92,    96,   100,
      64,   104,   108,   112,   116,   120,    65,   123,   128,   132,
     136,   139,   142,    82,   145,   150,   155,   160,    53,    54,
     168,   173,   178,   183,   188,   263,   264,   265,   266,    77,
      32,    33,    34,    35,    36,   294,   208,   210,   212,   214,
     217,   218,   220,   222,   224,   226,    21,    51,    52,    53,
      54,     2,     3,   249,     4,     5,     6,     7,     8,     9,
      10,    11,   103,    12,   122,    56,   144,     4,     5,    13,
       7,   165,    66,    72,   193,    17,    12,    87,    91,    95,
      99,    59,    60,   107,   111,   115,   119,   253,   254,   127,
     131,   135,   138,   141,   194,   195,   149,   154,   159,   164,
     196,   236,   172,   177,   182,   187,   230,   231,    36,    17,
      17,    36,    31,    31,    38,    39,    40,    41,    42,   199,
      42,    51,    52,    53,    54,   200,   201,    55,    49,   246,
      57,    58,    59,    60,   252,   205,   234,   235,    42,   281,
     255,   206,   207,   263,   264,   265,   266,    77,    31,    31,
     239,   240,    49,   295,   259,   263,   264,   265,   266,    77,
     288,    17,   280,   289,    31,   296,   256,   256,   263,   264,
     265,   266,    77,   263,   264,   265,   266,    77,   297,   262,
      34,    35,    36,   298,    57,    58,    59,    60,   299,    61,
     304,    83,    88,    92,    96,   104,   108,   112,   116,   267,
     128,   132,   136,   139,   270,   271,   272,   273,   274,   302,
     303,   250,    17,    51,    52,    53,    54,   306,   256,    40,
      41,    42,    16,   283,     0,     0,   290,   291,   292,   293,
      47,    48,    49,    30,    78,    79,    80,    81,    78,    79,
      80,    81,     0,     0,   285,   265,   266,    77,   286,    69,
       0,   260,   261,    84,    89,    93,    97,   101,     0,   105,
     109,   113,   117,   101,     0,   124,   129,   133,   137,   140,
     143,     0,   146,   151,   156,   161,    18,     0,   169,   174,
     179,   184,   189,    51,    52,    53,    54,     0,    78,    79,
      80,    81,     0,   300,   209,   211,   213,   215,   301,   219,
     221,   223,   225,   227,   287,     0,     0,    86,    90,    94,
      98,   102,     0,   106,   110,   114,   118,   121,     0,   125,
     130,   134,    51,    52,    53,    54,   147,   152,   157,   162,
       0,   244,   170,   175,   180,   185,   190,    51,    52,    53,
      54,     0,     4,     5,     6,     7,     0,   305,    10,     0,
       0,    12,    32,    33,    34,    35,    36,    57,    58,    59,
      60,   241,    38,    39,    40,    41,    42,     0,     0,     0,
       0,   242,    45,    46,    47,    48,    49,     0,     0,     0,
       0,   243,    73,    74,    75,    76,    77,   247,     0,     0,
       0,   241,   228,   229,   230,   231,    36,     0,     0,     0,
       0,   241,   232,   233,   234,   235,    42,     0,     0,     0,
       0,   242,   237,   238,   239,   240,    49,     4,     5,     0,
       7,   243,     0,    10,   257,   258,    12,    57,    58,    59,
      60,    78,    79,    80,    81,     0,   245,     0,     0,     0,
     242,   248,    32,    33,    34,    35,    36,     0,    37,    84,
      89,    93,    97,   105,   109,   113,   117,   268,   129,   133,
     137,   140,    38,    39,    40,    41,    42,     0,    43,    45,
      46,    47,    48,    49,     0,    50,   284,    32,    33,    34,
      35,    36,     0,   275,    38,    39,    40,    41,    42,     0,
     276,    45,    46,    47,    48,    49,     0,   277,    45,    46,
      47,    48,    49,    86,    90,    94,    98,   106,   110,   114,
     118,   269,   130,   134,    51,    52,    53,    54,     0,     0,
     278,    57,    58,    59,    60,     0,     0,   279,   232,   233,
     234,   235,    42,   228,   229,   230,   231,    36,    38,    39,
      40,    41,    42,    73,    74,    75,    76,    77
};

static const yytype_int16 yycheck[] =
{
       1,     3,     4,     5,     6,    28,    18,     9,    13,    14,
      12,    12,    19,    11,    12,    13,    14,    19,    16,    16,
      17,    44,     9,     3,    22,    23,    19,    28,    51,    52,
      53,    54,    12,    19,    57,    58,    59,    60,    61,    11,
      12,    13,    14,    44,    67,    18,    47,    48,    49,    21,
      51,    52,    53,    54,     1,    17,    57,    58,    59,    60,
      61,    11,    12,    13,    14,    12,    67,     3,     4,     5,
       6,    21,    73,    74,    75,    76,    12,    78,    79,    80,
      81,    82,    13,    14,    15,    32,    33,    34,    35,    36,
      17,    38,    39,    40,    41,    42,    17,    44,    45,    46,
      47,    48,    49,    19,    51,    52,    53,    54,    13,    14,
      57,    58,    59,    60,    61,    11,    12,    13,    14,    15,
      11,    12,    13,    14,    15,    21,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,     1,    11,    12,    13,
      14,     0,     1,   166,     3,     4,     5,     6,     7,     8,
       9,    10,    18,    12,    18,    20,    18,     3,     4,    18,
       6,    18,    27,    28,    18,   166,    12,    32,    33,    34,
      35,    13,    14,    38,    39,    40,    41,   200,   201,    44,
      45,    46,    47,    48,    18,    18,    51,    52,    53,    54,
      21,    19,    57,    58,    59,    60,    13,    14,    15,   200,
     201,    15,   203,   204,    11,    12,    13,    14,    15,    16,
      15,    11,    12,    13,    14,    22,    23,    17,    15,   166,
      11,    12,    13,    14,    16,    16,    13,    14,    15,   252,
      16,    22,    23,    11,    12,    13,    14,    15,   239,   240,
      13,    14,    15,    21,    16,    11,    12,    13,    14,    15,
      21,   252,    16,    21,   255,    21,   203,   204,    11,    12,
      13,    14,    15,    11,    12,    13,    14,    15,    21,   216,
      13,    14,    15,    21,    11,    12,    13,    14,    16,    16,
     303,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    21,
      19,   166,   303,    11,    12,    13,    14,    21,   255,    13,
      14,    15,     1,    21,    -1,    -1,   263,   264,   265,   266,
      13,    14,    15,    12,    11,    12,    13,    14,    11,    12,
      13,    14,    -1,    -1,    21,    13,    14,    15,    21,    28,
      -1,   206,   207,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,     1,    -1,    57,    58,
      59,    60,    61,    11,    12,    13,    14,    -1,    11,    12,
      13,    14,    -1,    21,    73,    74,    75,    76,    21,    78,
      79,    80,    81,    82,   259,    -1,    -1,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    -1,    44,
      45,    46,    11,    12,    13,    14,    51,    52,    53,    54,
      -1,    20,    57,    58,    59,    60,    61,    11,    12,    13,
      14,    -1,     3,     4,     5,     6,    -1,    21,     9,    -1,
      -1,    12,    11,    12,    13,    14,    15,    11,    12,    13,
      14,    20,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    20,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    20,    11,    12,    13,    14,    15,   166,    -1,    -1,
      -1,    20,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    20,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    20,    11,    12,    13,    14,    15,     3,     4,    -1,
       6,    20,    -1,     9,   203,   204,    12,    11,    12,    13,
      14,    11,    12,    13,    14,    -1,    20,    -1,    -1,    -1,
      20,   166,    11,    12,    13,    14,    15,    -1,    17,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,    11,    12,    13,    14,    15,    -1,    17,    11,
      12,    13,    14,    15,    -1,    17,   255,    11,    12,    13,
      14,    15,    -1,    17,    11,    12,    13,    14,    15,    -1,
      17,    11,    12,    13,    14,    15,    -1,    17,    11,    12,
      13,    14,    15,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,    11,    12,    13,    14,    -1,    -1,
      17,    11,    12,    13,    14,    -1,    -1,    17,    11,    12,
      13,    14,    15,    11,    12,    13,    14,    15,    11,    12,
      13,    14,    15,    11,    12,    13,    14,    15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    12,    18,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    18,    19,    19,    27,
      28,    29,    11,    12,    13,    14,    15,    17,    11,    12,
      13,    14,    15,    17,    19,    11,    12,    13,    14,    15,
      17,    11,    12,    13,    14,    17,    33,    11,    12,    13,
      14,    16,    18,    17,    17,    17,    33,    19,    27,    28,
      30,    31,    33,    11,    12,    13,    14,    15,    11,    12,
      13,    14,    19,    27,    28,    29,    30,    33,    27,    28,
      30,    33,    27,    28,    30,    33,    27,    28,    30,    33,
      27,    28,    30,    18,    27,    28,    30,    33,    27,    28,
      30,    33,    27,    28,    30,    33,    27,    28,    30,    33,
      27,    30,    18,    27,    28,    30,    31,    33,    27,    28,
      30,    33,    27,    28,    30,    33,    27,    28,    33,    27,
      28,    33,    27,    28,    18,    27,    28,    30,    31,    33,
      27,    28,    30,    31,    33,    27,    28,    30,    31,    33,
      27,    28,    30,    31,    33,    18,    16,    17,    27,    28,
      30,    31,    33,    27,    28,    30,    31,    33,    27,    28,
      30,    31,    33,    27,    28,    30,    31,    33,    27,    28,
      30,    31,    33,    18,    18,    18,    21,    28,    31,    16,
      22,    23,    16,    22,    23,    16,    22,    23,    27,    28,
      27,    28,    27,    28,    27,    28,    12,    27,    27,    28,
      27,    28,    27,    28,    27,    28,    27,    28,    11,    12,
      13,    14,    11,    12,    13,    14,    19,    11,    12,    13,
      14,    20,    20,    20,    20,    20,    27,    28,    30,    31,
      33,    21,    16,    31,    31,    16,    27,    28,    28,    16,
      33,    33,    27,    11,    12,    13,    14,    27,    28,    30,
      27,    27,    27,    27,    27,    17,    17,    17,    17,    17,
      16,    31,    21,    21,    28,    21,    21,    33,    21,    21,
      27,    27,    27,    27,    21,    21,    21,    21,    21,    16,
      21,    21,    21,    19,    31,    21,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    24,    25,    25,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    27,    27,    27,    27,    27,    27,
      27,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    29,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    32,    33,    34,    34,
      34,    34,    34,    34,    35,    35,    35,    35,    36,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     3,     3,     3,     2,     3,
       3,     3,     3,     2,     1,     2,     3,     3,     3,     3,
       3,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     6,     6,     1,     1,     3,
       3,     6,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     6,     6,     1,     1,     5,     5,
       5,     5,     5,     3,     3,     3,     3,     3,     4,     6,
       6,     7,    11,     7,     7,     6,     6,     6,     6
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
#line 1484 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 60 "ejemplo2.y" /* yacc.c:1646  */
    { printf ("\tresultado: %d\n", (yyvsp[-2].entero)); }
#line 1490 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 61 "ejemplo2.y" /* yacc.c:1646  */
    { printf ("\tresultado: %f\n", (yyvsp[-2].decimal)); }
#line 1496 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 62 "ejemplo2.y" /* yacc.c:1646  */
    { if((yyvsp[-2].texto)==NULL)	{printf(" ");}
												else 			{printf ("\tresultado: %s\n", (yyvsp[-2].texto));} }
#line 1503 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 64 "ejemplo2.y" /* yacc.c:1646  */
    { /*{ printf("nueva variable:%s \n",$1);*/ printf("\n");}
#line 1509 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 65 "ejemplo2.y" /* yacc.c:1646  */
    { printf("\n");}
#line 1515 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 66 "ejemplo2.y" /* yacc.c:1646  */
    { if((yyvsp[-2].nodito)==NULL)				{	printf("\tError\n");}		
												else if(tipovarNodo((yyvsp[-2].nodito))==1)	{	printf("\tResultadoplo: %f\n",*(yyvsp[-2].nodito)->t_float);	}
												else if(tipovarNodo((yyvsp[-2].nodito))==2) {	printf("\tResultadoplo: %s\n",(yyvsp[-2].nodito)->t_string);	}		}
#line 1523 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 69 "ejemplo2.y" /* yacc.c:1646  */
    { printf("\n");}
#line 1529 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "ejemplo2.y" /* yacc.c:1646  */
    {	if ((yyvsp[-2].entero)==2)	{printf(" ");}
												else if((yyvsp[-2].entero)==0)	{printf("FALSE\n");}
												else if((yyvsp[-2].entero)==1)	{printf("TRUE\n");}		}
#line 1537 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 73 "ejemplo2.y" /* yacc.c:1646  */
    { yyerrok;                  }
#line 1543 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 76 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[0].entero); }
#line 1549 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 77 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[0].entero) * (-1);  }
#line 1555 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) + (yyvsp[0].entero);    }
#line 1561 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 79 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) * (yyvsp[0].entero);    }
#line 1567 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 80 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) / (yyvsp[0].entero);    }
#line 1573 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 81 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) - (yyvsp[0].entero);    }
#line 1579 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 82 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) % (yyvsp[0].entero);    }
#line 1585 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 86 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[0].decimal); }
#line 1591 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 87 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[0].decimal) * (-1);  }
#line 1597 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 88 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) + (yyvsp[0].decimal);    }
#line 1603 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 89 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) * (yyvsp[0].decimal);    }
#line 1609 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 90 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) / (yyvsp[0].decimal);    }
#line 1615 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 91 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) - (yyvsp[0].decimal);    }
#line 1621 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 93 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) + (yyvsp[0].entero);    }
#line 1627 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 94 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) * (yyvsp[0].entero);    }
#line 1633 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 95 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) / (yyvsp[0].entero);    }
#line 1639 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 96 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].decimal) - (yyvsp[0].entero);    }
#line 1645 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 98 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].entero) + (yyvsp[0].decimal);    }
#line 1651 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 99 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].entero) * (yyvsp[0].decimal);    }
#line 1657 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 100 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].entero) / (yyvsp[0].decimal);    }
#line 1663 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 101 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.decimal) = (yyvsp[-2].entero) - (yyvsp[0].decimal);    }
#line 1669 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 103 "ejemplo2.y" /* yacc.c:1646  */
    { 
										(yyval.decimal)=powInt((yyvsp[-3].entero),(yyvsp[-1].entero));		
										}
#line 1677 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 106 "ejemplo2.y" /* yacc.c:1646  */
    { 
										(yyval.decimal)=powFloat((yyvsp[-3].decimal),(yyvsp[-1].entero));		
										}
#line 1685 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 112 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.texto) = (yyvsp[0].texto);}
#line 1691 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 114 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.texto) = (yyvsp[0].texto);}
#line 1697 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 115 "ejemplo2.y" /* yacc.c:1646  */
    {
					(yyval.texto)=sumaString((yyvsp[-2].texto),(yyvsp[0].texto));
					}
#line 1705 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 119 "ejemplo2.y" /* yacc.c:1646  */
    { 
					(yyval.texto)=restaString((yyvsp[-2].texto),(yyvsp[0].texto));
					}
#line 1713 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 123 "ejemplo2.y" /* yacc.c:1646  */
    {
						(yyval.texto)=powString((yyvsp[-3].texto),(yyvsp[-1].entero));
					}
#line 1721 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 127 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1727 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 128 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1733 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 129 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1739 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 130 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1745 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 131 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1751 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 132 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1757 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 133 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1763 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 134 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1769 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 135 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1775 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 136 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1781 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 137 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1787 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 138 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1793 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 139 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1799 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 140 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1805 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 141 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1811 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 142 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1817 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 143 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1823 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 144 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1829 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 145 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1835 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 146 "ejemplo2.y" /* yacc.c:1646  */
    {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");(yyval.texto)=NULL;}
#line 1841 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 151 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[-2].texto),ini)==1){	//////////////////////////////-------SUMAS------//////////////////////////////
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)+(yyvsp[0].decimal),""); 	}//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)+(yyvsp[0].decimal),""); 	}	//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");}  (yyval.nodito)=NULL;	}
		else {	printf("\tError, una de las variables no existe\n");  (yyval.nodito)=NULL;	}		}
#line 1854 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 159 "ejemplo2.y" /* yacc.c:1646  */
    { 
		if(existe((yyvsp[-2].texto),ini)==1){
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)+(yyvsp[0].entero),""); } //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)+(yyvsp[0].entero),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");  (yyval.nodito)=NULL; }	}
		else {	printf("\tError, una de las variables no existe\n");   (yyval.nodito)=NULL;	}	}
#line 1867 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 167 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[-2].texto),ini)==1){	
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				printf("\tError de sintaxis: no se puede sumar numero con string\n");   (yyval.nodito)=NULL;	}
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				printf("\tError de sintaxis: no se puede sumar numero con string\n");  (yyval.nodito)=NULL; }	
			if(tipovar((yyvsp[-2].texto),ini)==2)	{
				(yyval.nodito) = declarar(2,"",0,0,sumaString(retornaString((yyvsp[-2].texto),ini),(yyvsp[0].texto))); } } //declaro un nodo auxiliar tipo string
		else {	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}	}
#line 1881 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 176 "ejemplo2.y" /* yacc.c:1646  */
    {        
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)+(yyvsp[-2].decimal),""); } //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)+(yyvsp[-2].decimal),""); } //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n"); (yyval.nodito)=NULL; }	}
		else {	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	} 	}
#line 1894 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 184 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)+(yyvsp[-2].entero),""); } //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)+(yyvsp[-2].entero),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n"); (yyval.nodito)=NULL; }	}
				else {	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	 }	}
#line 1907 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 192 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(	(tipovar((yyvsp[0].texto),ini)==0) || (tipovar((yyvsp[0].texto),ini)==1) )	{	
				printf("\tError de sintaxis: no se puede sumar numero con string\n"); (yyval.nodito)=NULL;	}
			if(tipovar((yyvsp[0].texto),ini)==2)	{
				(yyval.nodito) = declarar(2,"",0,0,sumaString((yyvsp[-2].texto),retornaString((yyvsp[0].texto),ini))); } } //declaro un nodo auxiliar tipo string
		else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	 }		}
#line 1919 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 199 "ejemplo2.y" /* yacc.c:1646  */
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
#line 1941 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 216 "ejemplo2.y" /* yacc.c:1646  */
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
#line 1957 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 227 "ejemplo2.y" /* yacc.c:1646  */
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
#line 1973 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 238 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, *(yyvsp[-2].nodito)->t_float + (yyvsp[0].entero),"");}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 1981 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 241 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, *(yyvsp[-2].nodito)->t_float + (yyvsp[0].decimal),"");}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 1989 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 244 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==2){(yyval.nodito)=declarar(2,"",0, 0 , sumaString((yyvsp[-2].nodito)->t_string,(yyvsp[0].texto)));}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 1997 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 247 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(	(tipovarNodo((yyvsp[-2].nodito))==1)	&&	(tipovarNodo((yyvsp[0].nodito))==1)	){
			(yyval.nodito) = declarar(1,"",0,(*(yyvsp[-2].nodito)->t_float)+(*(yyvsp[0].nodito)->t_float),""); }	
		}
#line 2006 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 254 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[-2].texto),ini)==1){	//////////////////////////////////////////////-------RESTAS-------//////////////////////////////
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)-(yyvsp[0].decimal),""); 	}//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)-(yyvsp[0].decimal),"");	} //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n"); (yyval.nodito)=NULL; }	}
		else {	printf("\tError, una de las variables no existe\n");  (yyval.nodito)=NULL;	}	}
#line 2019 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 262 "ejemplo2.y" /* yacc.c:1646  */
    { 
		if(existe((yyvsp[-2].texto),ini)==1){
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)-(yyvsp[0].entero),""); }  //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)-(yyvsp[0].entero),""); 	}//declaro un nodo auxiliar tipo float	
			if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;	}		}
#line 2032 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 270 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[-2].texto),ini)==1){	
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}	
			if(tipovar((yyvsp[-2].texto),ini)==2)	{
				(yyval.nodito) = declarar(2,"",0,0,restaString(retornaString((yyvsp[-2].texto),ini),(yyvsp[0].texto))); 	}	}//declaro un nodo auxiliar tipo string
		else {	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;	}		}
#line 2046 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 279 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)-(yyvsp[-2].decimal),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,(yyvsp[-2].decimal)-retornaFloat((yyvsp[0].texto),ini),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;	}		}
#line 2059 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 287 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,(yyvsp[-2].entero)-retornaInt((yyvsp[0].texto),ini),"");	}  //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,(yyvsp[-2].entero)-retornaFloat((yyvsp[0].texto),ini),"");} //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");  (yyval.nodito)=NULL;	}		}
#line 2072 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 295 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				printf("\tError de sintaxis: no se puede restar numero con string\n");	(yyval.nodito)=NULL;	}	
			if(tipovar((yyvsp[0].texto),ini)==2)	{
				(yyval.nodito) = declarar(2,"",0,0,restaString((yyvsp[-2].texto),retornaString((yyvsp[0].texto),ini)));	}	} //declaro un nodo auxiliar tipo string
		else{	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;	 }		}
#line 2086 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 304 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2108 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 321 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2126 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 334 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2144 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 347 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, *(yyvsp[-2].nodito)->t_float - (yyvsp[0].entero),"");}
		else{printf("\tNo se pueden restar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2152 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 350 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, *(yyvsp[-2].nodito)->t_float - (yyvsp[0].decimal),"");}
		else{printf("\tNo se pueden restar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2160 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 353 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==2){(yyval.nodito)=declarar(2,"",0, 0 , restaString((yyvsp[-2].nodito)->t_string,(yyvsp[0].texto)));}
		else{printf("\tNo se pueden restar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2168 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 356 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(	(tipovarNodo((yyvsp[-2].nodito))==1)	&&	(tipovarNodo((yyvsp[0].nodito))==1)	){
			(yyval.nodito) = declarar(1,"",0,(*(yyvsp[-2].nodito)->t_float)-(*(yyvsp[0].nodito)->t_float),""); }	
		}
#line 2177 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 363 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[-2].texto),ini)==1){	///////////////////////////////////////------Multiplicación-------//////////////////////////////////////
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)*(yyvsp[0].decimal),""); 	}//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)*(yyvsp[0].decimal),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	} 	}
		else {	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;		}			}
#line 2190 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 371 "ejemplo2.y" /* yacc.c:1646  */
    { 
		if(existe((yyvsp[-2].texto),ini)==1){
			if(tipovar((yyvsp[-2].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)*(yyvsp[0].entero),"");  }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)*(yyvsp[0].entero),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");	(yyval.nodito)=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");(yyval.nodito)=NULL;		}			}
#line 2203 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 379 "ejemplo2.y" /* yacc.c:1646  */
    {	printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	}
#line 2209 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 380 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)*(yyvsp[-2].decimal),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)*(yyvsp[-2].decimal),""); }//declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: strings no se multiplican\n");		(yyval.nodito)=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;	}			}
#line 2222 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 388 "ejemplo2.y" /* yacc.c:1646  */
    {
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovar((yyvsp[0].texto),ini)==0)	{	
				(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)*(yyvsp[-2].entero),""); } //declaro un nodo auxiliar tipo float
			if(tipovar((yyvsp[0].texto),ini)==1)	{	
				(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)*(yyvsp[-2].entero),""); }//declaro un nodo auxiliar tipo float	
			if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");  (yyval.nodito)=NULL;	}				}
#line 2235 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 396 "ejemplo2.y" /* yacc.c:1646  */
    {	printf("\tError de sintaxis: strings no se multiplican\n");	}
#line 2241 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 397 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2262 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 413 "ejemplo2.y" /* yacc.c:1646  */
    {	
			if(existe((yyvsp[-2].texto),ini)==1){
				if(tipovarNodo((yyvsp[0].nodito))==1){
					if(tipovar((yyvsp[-2].texto),ini)==0)		{(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)*(*(yyvsp[0].nodito)->t_float),"");}
					else if(tipovar((yyvsp[-2].texto),ini)==1) {(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)*(*(yyvsp[0].nodito)->t_float),"");}
					else if(tipovar((yyvsp[-2].texto),ini)==2)	{ printf("\tError, operación de tipos distintos\n");	(yyval.nodito)=NULL;	 }				}
				else if(tipovarNodo((yyvsp[0].nodito))==2){ printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	}		}
			else{	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL; }
											}
#line 2276 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 422 "ejemplo2.y" /* yacc.c:1646  */
    {	
			if(existe((yyvsp[0].texto),ini)==1){
				if(tipovarNodo((yyvsp[-2].nodito))==1){
					if(tipovar((yyvsp[0].texto),ini)==0)		{(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)*(*(yyvsp[-2].nodito)->t_float),"");}
					else if(tipovar((yyvsp[0].texto),ini)==1) {(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)*(*(yyvsp[-2].nodito)->t_float),"");}
					else if(tipovar((yyvsp[0].texto),ini)==2)	{ printf("\tError, operación de tipos distintos\n"); 	(yyval.nodito)=NULL;	} 		}
				else if(tipovarNodo((yyvsp[-2].nodito))==2){ printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	}		}
			else{	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL; }			}
#line 2289 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 430 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, (*(yyvsp[-2].nodito)->t_float) * ((yyvsp[0].entero)),"");}
		else{printf("\tNo se pueden multiplicar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2297 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 433 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, (*(yyvsp[-2].nodito)->t_float) * ((yyvsp[0].decimal)),"");}
		else{printf("\tNo se pueden multiplicar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2305 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 436 "ejemplo2.y" /* yacc.c:1646  */
    {	printf("\tNo se pueden multiplicar strings\n");	 (yyval.nodito)=NULL;	}
#line 2311 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 437 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(	(tipovarNodo((yyvsp[-2].nodito))==1)	&&	(tipovarNodo((yyvsp[0].nodito))==1)	){
			(yyval.nodito) = declarar(1,"",0,(*(yyvsp[-2].nodito)->t_float)*(*(yyvsp[0].nodito)->t_float),""); }	
		}
#line 2320 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 444 "ejemplo2.y" /* yacc.c:1646  */
    {
			if(existe((yyvsp[-2].texto),ini)==1){	//////////////////////////////------DIVICIÓN-------//////////////////////////////
				if(tipovar((yyvsp[-2].texto),ini)==0)	{	
					(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)/(yyvsp[0].decimal),""); 	}//declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[-2].texto),ini)==1)	{	
					(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)/(yyvsp[0].decimal),"");	} //declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: strings no se dividen\n");	(yyval.nodito)=NULL; }	}
			else {	printf("\tError, una de las variables no existe\n");	(yyval.nodito)=NULL;	}				}
#line 2333 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 452 "ejemplo2.y" /* yacc.c:1646  */
    { 
			if(existe((yyvsp[-2].texto),ini)==1){
				if(tipovar((yyvsp[-2].texto),ini)==0)	{	
					(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)/(yyvsp[0].entero),""); 	} //declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[-2].texto),ini)==1)	{	
					(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)/(yyvsp[0].entero),"");	} //declaro un nodo auxiliar tipo float	
				if(tipovar((yyvsp[-2].texto),ini)==2)	{	printf("\tError de sintaxis: no se puede dividir numero con string\n");	(yyval.nodito)=NULL;	}	}
			else {	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}			}
#line 2346 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 461 "ejemplo2.y" /* yacc.c:1646  */
    {	printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	}
#line 2352 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 463 "ejemplo2.y" /* yacc.c:1646  */
    {
			if(existe((yyvsp[0].texto),ini)==1){
				if(tipovar((yyvsp[0].texto),ini)==0)	{	
					(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)/(yyvsp[-2].decimal),""); 	}//declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[0].texto),ini)==1)	{	
					(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)/(yyvsp[-2].decimal),""); 	}//declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: strings no se dividen\n");		(yyval.nodito)=NULL;	}	}
			else {	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}			}
#line 2365 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 471 "ejemplo2.y" /* yacc.c:1646  */
    {
			if(existe((yyvsp[0].texto),ini)==1){
				if(tipovar((yyvsp[0].texto),ini)==0)	{	
					(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)/(yyvsp[-2].entero),"");  }//declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[0].texto),ini)==1)	{	
					(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)/(yyvsp[-2].entero),"");	} //declaro un nodo auxiliar tipo float
				if(tipovar((yyvsp[0].texto),ini)==2)	{	printf("\tError de sintaxis: strings no se dividen\n");		(yyval.nodito)=NULL;	}	}
			else {	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}			}
#line 2378 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 479 "ejemplo2.y" /* yacc.c:1646  */
    {	printf("\tError de sintaxis: strings no se multiplican\n");	(yyval.nodito)=NULL;	}
#line 2384 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 481 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2406 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 498 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(existe((yyvsp[-2].texto),ini)==1){
			if(tipovarNodo((yyvsp[0].nodito))==1){
				if(tipovar((yyvsp[-2].texto),ini)==0)		{(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[-2].texto),ini)/(*(yyvsp[0].nodito)->t_float),"");}
				else if(tipovar((yyvsp[-2].texto),ini)==1) {(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[-2].texto),ini)/(*(yyvsp[0].nodito)->t_float),"");}
				else if(tipovar((yyvsp[-2].texto),ini)==2)	{ printf("\tError, operación de tipos distintos\n"); 	(yyval.nodito)=NULL;	}	}
				else if(tipovarNodo((yyvsp[0].nodito))==2){ printf("\tError de sintaxis: strings no se dividen\n");	(yyval.nodito)=NULL;	}
			}//en caso de no existir una variable, devuelvo nulo para anular toda la operación anterior 
		else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}				}
#line 2420 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 507 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(existe((yyvsp[0].texto),ini)==1){
			if(tipovarNodo((yyvsp[-2].nodito))==1){
				if(tipovar((yyvsp[0].texto),ini)==0)		{(yyval.nodito) = declarar(1,"",0,retornaInt((yyvsp[0].texto),ini)/(*(yyvsp[-2].nodito)->t_float),"");}
				else if(tipovar((yyvsp[0].texto),ini)==1) {(yyval.nodito) = declarar(1,"",0,retornaFloat((yyvsp[0].texto),ini)/(*(yyvsp[-2].nodito)->t_float),"");}
				else if(tipovar((yyvsp[0].texto),ini)==2)	{ printf("\tError, operación de tipos distintos\n"); 	(yyval.nodito)=NULL;	}		}
			else if(tipovarNodo((yyvsp[-2].nodito))==2){ printf("\tError de sintaxis: strings no se dividen\n");	(yyval.nodito)=NULL;	}
			}//en caso de no existir una variable, devuelvo nulo para anular toda la operación anterior 
		else{	printf("\tError, una de las variables no existe\n"); (yyval.nodito)=NULL;	}		}
#line 2434 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 516 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, *(yyvsp[-2].nodito)->t_float / (yyvsp[0].entero),"");}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2442 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 519 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(tipovarNodo((yyvsp[-2].nodito))==1){(yyval.nodito)=declarar(1,"",0, *(yyvsp[-2].nodito)->t_float / (yyvsp[0].decimal),"");}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 (yyval.nodito)=NULL;	}	}
#line 2450 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 522 "ejemplo2.y" /* yacc.c:1646  */
    {	printf("\tNo se pueden dividir strings\n");	 (yyval.nodito)=NULL;	}
#line 2456 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 523 "ejemplo2.y" /* yacc.c:1646  */
    {	
		if(	(tipovarNodo((yyvsp[-2].nodito))==1)	&&	(tipovarNodo((yyvsp[0].nodito))==1)	){
			(yyval.nodito) = declarar(1,"",0,(*(yyvsp[-2].nodito)->t_float)/(*(yyvsp[0].nodito)->t_float),""); }	
		}
#line 2465 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 530 "ejemplo2.y" /* yacc.c:1646  */
    {	//////////////////////////////------POTENCIA------//////////////////////////////
						if(tipovarNodo((yyvsp[-3].nodito))==2)		{	
							(yyval.nodito)=declarar(2,"",0,0,powString((yyvsp[-3].nodito)->t_string,(yyvsp[-1].entero)));		}
						else if(tipovarNodo((yyvsp[-3].nodito))==1)	{	
							(yyval.nodito)=declarar(1,"",0,powFloat(*(yyvsp[-3].nodito)->t_float,(yyvsp[-1].entero)),"");	}			}
#line 2475 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 535 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2490 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 550 "ejemplo2.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[0].entero);}
#line 2496 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 552 "ejemplo2.y" /* yacc.c:1646  */
    { (yyval.texto) = (yyvsp[0].texto);}
#line 2502 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 555 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2524 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 572 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2542 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 585 "ejemplo2.y" /* yacc.c:1646  */
    {//DECLARAR UN VALOR Y ASIGNARLE UNA CADENA
						if(existe((yyvsp[-3].texto),ini)==1){
							printf("\tError de sintaxis: La variable ya existe\n");		}						
						else if((yyvsp[-4].entero)==0){ 
							printf("\tError de sintaxis: No se puede asignar String a variable tipo int\n");	}
						else if((yyvsp[-4].entero)==1){
							printf("\tError de sintaxis: No se puede asignar String a variable tipo float\n");	}
						else if((yyvsp[-4].entero)==2){
							if((yyvsp[-1].texto)==NULL)	{printf(" ");}
							else	{agregar(2, (yyvsp[-3].texto), 0, 0,(yyvsp[-1].texto), cab,ini);	recorrer(ini);	}	}
						(yyval.texto)=(yyvsp[-3].texto);
					}
#line 2559 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 597 "ejemplo2.y" /* yacc.c:1646  */
    {//DECLARAR UN VALOR Y ASIGNARLE UN NODO
						if(existe((yyvsp[-3].texto),ini)==1){
							printf("\tError de sintaxis: La variable ya existe\n");		}	
						else if (tipovarNodo((yyvsp[-1].nodito))==2)	{				
							if((yyvsp[-4].entero)==0){	printf("\tError de sintaxis: No se puede asignar String a variable tipo int\n");	}
							if((yyvsp[-4].entero)==1){	printf("\tError de sintaxis: No se puede asignar String a variable tipo float\n");	}
							if((yyvsp[-4].entero)==2){	agregar(2, (yyvsp[-3].texto), 0, 0,(yyvsp[-1].nodito)->t_string, cab,ini);	recorrer(ini);	}	}
						else if (tipovarNodo((yyvsp[-1].nodito))==1)	{
							if((yyvsp[-4].entero)==0){	agregar(0, (yyvsp[-3].texto), *(yyvsp[-1].nodito)->t_float, 0,"", cab,ini);	recorrer(ini);	}
							if((yyvsp[-4].entero)==1){	agregar(1, (yyvsp[-3].texto), 0, *(yyvsp[-1].nodito)->t_float,"", cab,ini);	recorrer(ini);	}
							if((yyvsp[-4].entero)==2){	printf("\tError de sintaxis: No se puede asignar int o float a variable tipo string\n");	}	}
						(yyval.texto)=(yyvsp[-3].texto);
					}
#line 2577 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 610 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2606 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 634 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2625 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 652 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2641 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 663 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2657 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 674 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2673 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 685 "ejemplo2.y" /* yacc.c:1646  */
    {
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
						else{	printf("\tError de sintaxis: La variable no existe\n");}	
						(yyval.texto)=(yyvsp[-2].texto);						
					}
#line 2693 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 702 "ejemplo2.y" /* yacc.c:1646  */
    {//esta funcion es util para ver los valores de determinada variable...
					if(existe((yyvsp[-1].texto),ini)==1){
						imprimeValores((yyvsp[-1].texto),ini);
						(yyval.texto)=(yyvsp[-1].texto);}//esto no importa, es para que devuelva algo
					else{
						printf("\tLa variable no existe\n");}
}
#line 2705 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 712 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2730 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 733 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2755 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 754 "ejemplo2.y" /* yacc.c:1646  */
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
#line 2783 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 778 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(	(tipovarNodo((yyvsp[-7].nodito))==1) && (tipovarNodo((yyvsp[-2].nodito))==1)	){	
					if((*(yyvsp[-7].nodito)->t_float)==(*(yyvsp[-2].nodito)->t_float))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 2794 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 785 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-1].nodito))==1)	{	
					if((yyvsp[-4].decimal)==(*(yyvsp[-1].nodito)->t_float))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 2805 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 792 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-4].nodito))==1)	{	
					if((*(yyvsp[-4].nodito)->t_float)==(yyvsp[-1].decimal))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 2816 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 799 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-1].nodito))<1)	{	
					if((yyvsp[-3].decimal)==(*(yyvsp[-1].nodito)->t_float))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 2827 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 806 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-3].nodito))==1)	{	
					if((*(yyvsp[-3].nodito)->t_float)<(yyvsp[-1].decimal))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 2838 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 813 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-1].nodito))>1)	{	
					if((yyvsp[-3].decimal)==(*(yyvsp[-1].nodito)->t_float))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 2849 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 820 "ejemplo2.y" /* yacc.c:1646  */
    {
			if		(tipovarNodo((yyvsp[-3].nodito))==1)	{	
					if((*(yyvsp[-3].nodito)->t_float)>(yyvsp[-1].decimal))	{	(yyval.entero)=1;	}
					else { (yyval.entero)=0; }	}
			else {	printf("\tError de variable\n"); (yyval.entero)=2;	}
	}
#line 2860 "ejemplo2.tab.c" /* yacc.c:1646  */
    break;


#line 2864 "ejemplo2.tab.c" /* yacc.c:1646  */
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
#line 839 "ejemplo2.y" /* yacc.c:1906  */


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
