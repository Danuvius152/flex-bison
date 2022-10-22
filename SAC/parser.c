/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lang.y"

	// this part is copied to the beginning of the parser 
	#include <stdio.h>
	#include "lang.h"
	#include "lexer.h"
	void yyerror(char *);
	int yylex(void);
  struct def_list * root;

#line 80 "parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    TM_NAT = 258,
    TM_IDENT = 259,
    TM__RETURN = 260,
    TM_VOID = 261,
    TM_CHAR = 262,
    TM_U8 = 263,
    TM_INT = 264,
    TM_INT64 = 265,
    TM_UINT = 266,
    TM_UINT64 = 267,
    TM_LP = 268,
    TM_RP = 269,
    TM_LB = 270,
    TM_RB = 271,
    TM_LC = 272,
    TM_RC = 273,
    TM_SEMICOL = 274,
    TM_COMMA = 275,
    TM_COLON = 276,
    TM_WITH = 277,
    TM_REQUIRE = 278,
    TM_ENSURE = 279,
    TM_INV = 280,
    TM_FORALL = 281,
    TM_EXISTS = 282,
    TM_LET = 283,
    TM_SIZEOF = 284,
    TM_STRUCT = 285,
    TM_UNION = 286,
    TM_ENUM = 287,
    TM_COMMENT = 288,
    TM_COMMENT_BEGIN = 289,
    TM_COMMENT_END = 290,
    TM_IF = 291,
    TM_ELSE = 292,
    TM_WHILE = 293,
    TM_DO = 294,
    TM_SWITCH = 295,
    TM_CASE = 296,
    TM_DEFAULT = 297,
    TM_FOR = 298,
    TM_BREAK = 299,
    TM_CONTINUE = 300,
    TM_RETURN = 301,
    TM_ASGNOP = 302,
    TM_ADD_ASSIGN = 303,
    TM_SUB_ASSIGN = 304,
    TM_MUL_ASSIGN = 305,
    TM_DIV_ASSIGN = 306,
    TM_MOD_ASSIGN = 307,
    TM_BAND_ASSIGN = 308,
    TM_BOR_ASSIGN = 309,
    TM_XOR_ASSIGN = 310,
    TM_SHL_ASSIGN = 311,
    TM_SHR_ASSIGN = 312,
    TM_OR = 313,
    TM_AND = 314,
    TM_NOTBOOL = 315,
    TM_NOTINT = 316,
    TM_SHL = 317,
    TM_SHR = 318,
    TM_BAND = 319,
    TM_BOR = 320,
    TM_XOR = 321,
    TM_NEWLINE = 322,
    TM_INC = 323,
    TM_DEC = 324,
    TM_FIELDOF = 325,
    TM_FIELDOFPTR = 326,
    TM_LT = 327,
    TM_LE = 328,
    TM_GT = 329,
    TM_GE = 330,
    TM_EQ = 331,
    TM_NE = 332,
    TM_PLUS = 333,
    TM_MINUS = 334,
    TM_MUL = 335,
    TM_DIV = 336,
    TM_MOD = 337,
    LOWER_THAN_ELSE = 338
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "lang.y"

unsigned int n;
char *i;
struct type *t;
struct expr *e;
struct expr_list *exl;
struct var_list  *vl;
struct var_dec_list  *vdl;
struct def_list  *dl;
struct enum_list *enl;
struct RA_list   *rl;
struct Case_list *cl;
struct field_dec_list *fdl;
struct Afuncdef *afd;
struct ASepdef  *asd;
struct var_dec   *vd;
struct field_dec *fd;
struct def  *d;
struct cmd  *c;
struct simple_cmd *sc;
struct Case *cas;
struct RAssertion *r;
void *none;

#line 241 "parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  429

#define YYUNDEFTOK  2
#define YYMAXUTOK   338


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   104,   104,   113,   116,   123,   126,   133,   137,   141,
     145,   149,   153,   157,   161,   165,   169,   173,   177,   181,
     188,   192,   196,   200,   204,   208,   212,   216,   220,   224,
     228,   232,   240,   243,   249,   253,   260,   264,   271,   275,
     283,   286,   293,   300,   304,   311,   315,   323,   327,   334,
     338,   342,   346,   350,   354,   358,   362,   366,   370,   374,
     378,   382,   386,   390,   394,   398,   402,   406,   410,   414,
     418,   422,   426,   430,   434,   438,   442,   446,   450,   454,
     458,   462,   466,   470,   478,   482,   489,   493,   497,   501,
     505,   509,   513,   517,   521,   525,   529,   533,   537,   541,
     545,   549,   553,   557,   561,   565,   569,   573,   577,   581,
     585,   589,   593,   597,   601,   605,   609,   613,   617,   621,
     629,   633,   637,   641,   645,   649,   653,   657,   661,   665,
     669,   673,   677,   681,   685,   689,   696,   700,   707,   711,
     719,   723,   727,   731,   735,   739,   743,   747,   751,   755,
     759,   763,   767,   771,   775,   779,   783,   787,   791,   795,
     799,   803,   807,   811,   815,   819,   823,   827,   831,   835,
     839,   846,   853,   857,   861
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TM_NAT", "TM_IDENT", "TM__RETURN",
  "TM_VOID", "TM_CHAR", "TM_U8", "TM_INT", "TM_INT64", "TM_UINT",
  "TM_UINT64", "TM_LP", "TM_RP", "TM_LB", "TM_RB", "TM_LC", "TM_RC",
  "TM_SEMICOL", "TM_COMMA", "TM_COLON", "TM_WITH", "TM_REQUIRE",
  "TM_ENSURE", "TM_INV", "TM_FORALL", "TM_EXISTS", "TM_LET", "TM_SIZEOF",
  "TM_STRUCT", "TM_UNION", "TM_ENUM", "TM_COMMENT", "TM_COMMENT_BEGIN",
  "TM_COMMENT_END", "TM_IF", "TM_ELSE", "TM_WHILE", "TM_DO", "TM_SWITCH",
  "TM_CASE", "TM_DEFAULT", "TM_FOR", "TM_BREAK", "TM_CONTINUE",
  "TM_RETURN", "TM_ASGNOP", "TM_ADD_ASSIGN", "TM_SUB_ASSIGN",
  "TM_MUL_ASSIGN", "TM_DIV_ASSIGN", "TM_MOD_ASSIGN", "TM_BAND_ASSIGN",
  "TM_BOR_ASSIGN", "TM_XOR_ASSIGN", "TM_SHL_ASSIGN", "TM_SHR_ASSIGN",
  "TM_OR", "TM_AND", "TM_NOTBOOL", "TM_NOTINT", "TM_SHL", "TM_SHR",
  "TM_BAND", "TM_BOR", "TM_XOR", "TM_NEWLINE", "TM_INC", "TM_DEC",
  "TM_FIELDOF", "TM_FIELDOFPTR", "TM_LT", "TM_LE", "TM_GT", "TM_GE",
  "TM_EQ", "TM_NE", "TM_PLUS", "TM_MINUS", "TM_MUL", "TM_DIV", "TM_MOD",
  "LOWER_THAN_ELSE", "$accept", "NT_WHOLE", "NT_DEF_LIST", "NT_CMDS",
  "NT_DEF", "NT_TYPE", "NT_VAR_LIST", "NT_VAR_DEC_LIST", "NT_AFUNCDEF",
  "NT_ASEPDEF", "NT_FIELD_DEC_LIST", "NT_FIELD_DEC", "NT_VAR_DEC",
  "NT_ENUM_LIST", "NT_RA_LIST", "NT_RASSERTION", "NT_EXPR_LIST", "NT_EXPR",
  "NT_SIMPLE_CMD", "NT_CASE", "NT_CASE_LIST", "NT_CMD", "NT_BLOCK",
  "NT_cmd", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338
};
# endif

#define YYPACT_NINF (-172)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1821,  -172,  -172,  -172,  -172,  -172,  -172,  -172,    35,    40,
      44,   -23,   -20,    54,  -172,  1821,     9,  -172,    32,   106,
     107,   109,   123,   124,  -172,  -172,    42,  -172,  -172,  1828,
    1828,   131,   126,   127,  1602,   399,   132,   137,   149,    10,
     136,  1828,   138,   135,   141,   399,   399,    15,    24,    13,
    -172,  -172,   150,   530,   154,   399,   399,   399,   399,   399,
     399,  1091,  -172,  -172,  -172,    22,   153,  -172,   155,   131,
     167,   159,  1131,   173,   407,  -172,    94,    69,   175,    19,
    1828,   798,    -2,   917,  1828,    67,    67,  2051,    67,    67,
      67,   399,  -172,   399,   399,   399,   399,   399,   399,   399,
     164,   187,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,  -172,  -172,  -172,  -172,  -172,   146,   399,
     147,   407,  -172,   570,   777,   179,   182,   486,   399,   184,
     183,   188,   810,   399,   399,   180,   189,  1063,   190,  -172,
    -172,   407,   197,   777,   407,  -172,   407,  -172,    75,  -172,
    -172,   196,   175,   399,  -172,     3,  1159,  1910,  1956,    30,
      30,  2051,  1611,  2008,  -172,  -172,    51,    51,    51,    51,
    2100,  2100,    25,    25,    67,    67,    67,   777,  -172,   777,
     193,  -172,   199,  -172,   139,   777,   209,   210,   777,   777,
     777,   777,   777,   777,  1184,  1237,   399,   399,   195,   185,
    1211,   272,  -172,  -172,  -172,  1279,  1858,  1858,  -172,  -172,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,  -172,  -172,  -172,  -172,   197,   205,  1305,   204,   211,
     407,  -172,  -172,  -172,  -172,  -172,  1331,  1357,  -172,   777,
       5,   942,  1384,   212,   217,    87,    87,  2076,    87,    87,
      87,   777,   777,   777,   777,   777,   777,   777,   777,  -172,
     226,   227,   777,   777,   777,   777,   777,   777,   777,   777,
     777,   777,   777,  -172,   970,   995,   399,    78,   850,   219,
    -172,  1858,  1858,  1858,  1858,  1858,  1858,  1858,  1858,  1858,
    1858,  1858,  -172,   777,   777,  -172,  -172,   222,  -172,  -172,
     228,  1425,   777,  -172,     4,   777,   777,  1452,  1935,  1978,
    1252,  1252,  2076,  1688,  2030,  -172,  -172,   536,   536,   536,
     536,  2121,  2121,   145,   145,    87,    87,    87,   486,   486,
    1493,   399,   225,    78,   229,   296,  1520,   862,  1565,  1590,
    -172,  -172,   777,  -172,   237,   486,   242,  1883,  1883,  -172,
     220,  -172,  -172,  1636,   407,  -172,  -172,   486,   244,   564,
     598,  1661,   777,  -172,  -172,   399,   218,   632,   486,   407,
    -172,  -172,   486,   486,   245,   486,   246,   660,  1713,  1023,
     399,   883,   243,  -172,  -172,  -172,  -172,   486,  -172,   486,
     486,   247,  -172,   486,  1738,   666,  1806,   890,  -172,  -172,
    -172,   486,  -172,  -172,   486,   250,   694,   728,  1831,  -172,
    -172,   486,   486,   253,   486,   254,   756,  -172,  -172,   486,
    -172,   486,   486,   256,  -172,  -172,  -172,   486,  -172
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     2,     3,    44,    15,     0,    27,
      28,    29,     0,     0,     1,     4,    43,    30,    19,    40,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,     0,    45,     0,     0,     0,     0,    44,     0,
      34,    86,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    41,     0,     0,
       0,     0,    84,     0,     5,    14,     0,     0,    43,     0,
       0,     0,     0,     0,     0,    94,    95,   115,    93,    92,
     114,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    18,    16,    46,    17,     0,     0,
       0,     5,   170,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,     0,   172,
     169,     5,    32,     0,     5,    12,     5,    13,     0,    35,
      89,     0,     0,     0,    87,     0,     0,   108,   107,   112,
     113,   109,   110,   111,   118,   119,   101,   103,   102,   104,
     105,   106,    96,    97,    98,    99,   100,     0,    85,     0,
       0,    50,    52,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   165,   166,   167,     0,   132,   134,    10,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,   135,   141,     6,    32,     0,     0,     0,     0,
       5,    11,    90,   116,    91,   117,     0,     0,   171,     0,
       0,     0,     0,     0,     0,    56,    57,    77,    55,    54,
      76,     0,     0,     0,     0,     0,     0,     0,     0,   173,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   174,     0,     0,     0,   138,     0,     0,
     168,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,    33,     0,     0,     8,     9,     0,    39,    38,
       0,    47,     0,    49,     0,     0,     0,     0,    70,    69,
      74,    75,    71,    72,    73,    80,    81,    63,    65,    64,
      66,    67,    68,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,   138,     0,     0,     0,     0,     0,     0,
       7,    53,     0,    78,     0,     0,     0,    82,    83,    79,
     142,   145,   147,     0,     5,   139,   144,     0,     0,     0,
       0,     0,     0,    37,    48,     0,     0,     0,     0,     5,
     137,   152,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,   136,   156,   158,     0,   154,     0,
       0,     0,    36,     0,     0,     0,     0,     0,   164,   160,
     162,     0,   146,   148,     0,     0,     0,     0,     0,   150,
     151,     0,     0,     0,     0,     0,     0,   155,   157,     0,
     153,     0,     0,     0,   163,   159,   161,     0,   149
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,   258,  -115,  -172,    50,    46,  -172,   200,  -172,
     -26,  -172,     1,   213,   -68,   129,     6,   -35,  -171,  -172,
     -55,  -124,  -172,  -172
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,   135,    15,    48,   226,    49,    77,    17,
      40,    41,   136,    44,   300,   301,    71,   137,   138,   333,
     334,   139,   140,   141
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,    18,   152,   199,    42,    22,   180,   152,    23,   152,
      72,    72,   153,    26,    65,    67,    18,   234,    83,   302,
      85,    86,    87,    88,    89,    90,   224,    79,    78,   228,
     279,   229,    74,    80,    75,    50,   146,    35,   147,    19,
      91,   113,   344,   345,    20,    91,    72,   346,    21,    76,
      16,    28,    73,    76,    24,    34,   156,    35,   157,   158,
     159,   160,   161,   162,   163,    16,    91,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,    27,    39,
      39,   149,    91,    27,    72,    27,   144,   151,   145,    27,
      27,    39,   230,   200,   231,   100,   101,   205,   206,   207,
     100,   101,   251,    82,    27,   110,   111,   112,   108,   109,
     110,   111,   112,    95,    96,   297,   142,   143,   233,   331,
     332,   100,   101,    29,    30,   178,    31,    32,    33,   108,
     109,   110,   111,   112,   155,    43,    62,   100,   101,    45,
      46,    63,   181,   182,   183,     1,     2,     3,     4,     5,
       6,     7,   184,    64,    66,    69,    68,   260,   261,    70,
     251,   274,   275,    81,   358,   186,   187,    84,   164,    36,
      37,    38,   114,   118,   115,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   117,   120,   374,   376,
      35,   165,   196,   177,   179,   197,   382,   201,   208,   188,
     189,   225,   202,   190,   350,   351,   391,   203,   209,   223,
     232,   238,   239,   243,   244,   260,   261,   191,   192,   193,
     185,   366,   295,   276,   405,   270,   271,   272,   293,   296,
     315,   316,   305,   371,   240,   413,   415,   306,   337,   370,
     340,   330,   341,   336,   383,   423,   354,   356,   385,   386,
     365,   388,   194,   195,   384,   367,   380,   368,   372,   387,
     389,   401,   397,   398,   411,   399,   400,   419,   421,   402,
     427,   292,   227,    25,   364,    51,    52,   409,   355,   148,
     410,     0,   116,     0,     0,    53,     0,   417,   418,     0,
     420,   278,     0,     0,     0,   424,   353,   425,   426,    51,
      52,    54,   361,   428,     0,     0,   236,     0,   237,    53,
     357,     0,     0,   241,   242,     0,     0,   245,   246,   247,
     248,   249,   250,     0,     0,    54,     0,     0,     0,     0,
     379,     0,    55,    56,     0,     0,    57,     0,     0,     0,
     133,   134,     0,     0,     0,   394,   396,     0,     0,     0,
      58,    59,    60,     0,     0,     0,    55,    56,     0,     0,
      57,     0,   408,     0,   133,   134,     0,     0,     0,     0,
       0,     0,     0,     0,    58,    59,    60,     0,     0,     0,
     307,   308,   309,   310,   311,   312,   313,   314,     0,     0,
       0,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,    51,    52,     0,     0,     0,     0,     0,     0,
      51,    52,    53,     1,     2,     3,     4,     5,     6,     7,
      53,     0,   338,   339,   121,     0,   122,     0,    54,     0,
       0,   343,     0,     0,   347,   348,    54,    36,    37,    38,
     123,   124,     0,   125,     0,   126,   127,   128,     0,     0,
     129,   130,   131,   132,     0,     0,     0,     0,     0,    55,
      56,     0,     0,    57,     0,     0,     0,    55,    56,     0,
       0,    57,     0,     0,     0,   133,   134,    58,    59,    60,
       0,     0,     0,     0,     0,    58,    59,    60,     0,    51,
      52,   378,     1,     2,     3,     4,     5,     6,     7,    53,
       0,     0,     0,   121,     0,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,    36,    37,    38,   198,
       0,     0,   125,     0,   126,   127,   128,     0,     0,   129,
     130,   131,   132,    51,    52,     0,     1,     2,     3,     4,
       5,     6,     7,    53,     0,     0,    55,    56,     0,     0,
      57,   251,     0,     0,   133,   134,     0,     0,     0,    54,
      36,    37,    38,     0,    58,    59,    60,    51,    52,     0,
       0,     0,     0,   181,   182,   183,     0,    53,   373,     0,
       0,     0,     0,   184,     0,     0,     0,     0,     0,     0,
      55,    56,     0,    54,    57,   185,   186,   187,   254,   255,
       0,    51,    52,     0,     0,     0,   260,   261,    58,    59,
      60,    53,   375,     0,   268,   269,   270,   271,   272,     0,
       0,     0,     0,     0,    55,    56,     0,    54,    57,     0,
     188,   189,   133,   134,   190,    51,    52,     0,     0,     0,
       0,     0,    58,    59,    60,    53,     0,     0,   191,   192,
     193,   381,     0,     0,     0,     0,     0,     0,    55,    56,
       0,    54,    57,    51,    52,     0,   133,   134,     0,    51,
      52,     0,     0,    53,   390,     0,    58,    59,    60,    53,
     404,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,    55,    56,     0,    54,    57,    51,    52,     0,
     133,   134,     0,     0,     0,     0,     0,    53,   412,     0,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
      55,    56,     0,    54,    57,     0,    55,    56,   133,   134,
      57,    51,    52,     0,   133,   134,     0,     0,    58,    59,
      60,    53,   414,     0,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    54,    57,    51,
      52,     0,   133,   134,     0,     0,     0,     0,     0,    53,
     422,     0,    58,    59,    60,     0,     0,     0,     0,     0,
     181,   182,   183,     0,     0,    54,     0,     0,    55,    56,
     184,     0,    57,     0,     0,     0,   133,   134,     0,     0,
       0,    51,    52,   186,   187,     0,    58,    59,    60,     0,
       0,    53,   150,    51,    52,     0,    55,    56,     0,     0,
      57,     0,     0,    53,   133,   134,     0,    54,     0,   204,
       0,     0,     0,     0,    58,    59,    60,   188,   189,    54,
       0,   190,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,    52,   191,   192,   193,    55,    56,
       0,     0,    57,    53,     0,    51,    52,     0,     0,   335,
      55,    56,     0,     0,    57,    53,    58,    59,    60,    54,
       0,   360,     0,     0,     0,     0,    51,    52,    58,    59,
      60,    54,     0,    51,    52,     0,    53,     0,     0,     0,
       0,     0,   395,    53,     0,     0,     0,     0,     0,   407,
      55,    56,    54,     0,    57,     0,     0,     0,     0,    54,
       0,     0,    55,    56,     0,     0,    57,     0,    58,    59,
      60,   154,    91,     0,     0,     0,     0,     0,     0,     0,
      58,    59,    60,    55,    56,     0,     0,    57,     0,     0,
      55,    56,     0,     0,    57,     0,   303,   251,     0,     0,
       0,    58,    59,    60,     0,     0,     0,     0,    58,    59,
      60,     0,     0,     0,     0,    93,    94,     0,     0,    95,
      96,    97,    98,    99,   328,    91,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     252,   253,     0,     0,   254,   255,   256,   257,   258,   329,
      91,     0,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,     0,     0,     0,    93,    94,
       0,     0,    95,    96,    97,    98,    99,   393,    91,     0,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    93,    94,     0,     0,    95,    96,    97,
      98,    99,     0,     0,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    91,     0,
       0,    93,    94,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    91,    92,     0,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,    93,    94,     0,     0,    95,    96,    97,    98,    99,
       0,   221,   222,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    91,     0,     0,    93,
      94,   119,     0,    95,    96,    97,    98,    99,     0,     0,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    91,   235,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,     0,     0,    95,    96,    97,    98,    99,     0,   251,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,     0,    93,    94,     0,
       0,    95,    96,    97,    98,    99,    91,     0,   277,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   252,   253,     0,     0,   254,   255,   256,   257,
     258,   259,   251,     0,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   251,     0,    93,
      94,     0,   273,    95,    96,    97,    98,    99,     0,     0,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    91,   252,   253,     0,   280,   254,
     255,   256,   257,   258,     0,     0,     0,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     251,     0,   260,   261,     0,     0,     0,     0,     0,   294,
     268,   269,   270,   271,   272,     0,     0,    93,    94,     0,
       0,    95,    96,    97,    98,    99,   251,     0,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,     0,   252,   253,     0,     0,   254,   255,   256,
     257,   258,   251,     0,     0,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,   252,
     253,     0,   299,   254,   255,   256,   257,   258,   298,   251,
       0,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,   252,   253,     0,     0,   254,
     255,   256,   257,   258,     0,     0,     0,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     251,     0,   252,   253,     0,   342,   254,   255,   256,   257,
     258,   304,     0,     0,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   251,   349,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   252,   253,     0,     0,   254,   255,   256,
     257,   258,     0,     0,     0,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    91,     0,
     252,   253,   352,     0,   254,   255,   256,   257,   258,     0,
       0,     0,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    91,     0,     0,     0,   359,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,     0,    93,    94,
     251,     0,    95,    96,    97,    98,    99,     0,     0,   362,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,   251,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     0,    47,     0,     0,     0,
       0,     0,     0,   252,   253,   363,    91,   254,   255,   256,
     257,   258,    36,    37,    38,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   252,   253,
       0,    91,   254,   255,   256,   257,   258,   369,     0,     0,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,    95,    96,    97,    91,    99,     0,     0,
     377,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    93,    94,     0,     0,    95,    96,
      97,    98,    99,   251,     0,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    93,
      94,     0,     0,    95,    96,    97,    98,    99,   251,     0,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,     0,     0,   392,     0,
     254,   255,   256,    91,   258,     0,     0,   403,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   252,   253,     0,     0,   254,   255,   256,   257,   258,
       0,     0,     0,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,    93,    94,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    91,     0,     0,     0,   406,     0,     1,     2,     3,
       4,     5,     6,     7,     1,     2,     3,     4,     5,     6,
       7,     0,     0,     0,     0,     0,    91,     0,     0,     0,
     416,     8,     9,    10,    11,    12,     0,     0,    36,    37,
      38,     0,     0,     0,    93,    94,     0,     0,    95,    96,
      97,    98,    99,    91,     0,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    93,
      94,     0,     0,    95,    96,    97,    98,    99,   251,     0,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,    93,    94,     0,     0,
      95,    96,    97,    98,    99,    91,     0,     0,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   252,   253,     0,     0,   254,   255,   256,   257,   258,
     251,     0,     0,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,     0,     0,    94,
       0,    91,    95,    96,    97,    98,    99,     0,     0,     0,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   251,   253,     0,     0,   254,   255,   256,
     257,   258,     0,     0,     0,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    95,    96,
      97,    98,    99,    91,     0,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     254,   255,   256,   257,   258,   251,     0,     0,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     0,     0,     0,     0,     0,    91,     0,     0,     0,
      95,    96,    97,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   251,   254,   255,   256,     0,     0,     0,     0,     0,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,    95,    96,    91,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,   251,     0,   254,   255,
       0,     0,     0,     0,     0,     0,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,     0,
       0,     0,    95,    96,     0,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,   108,   109,
     110,   111,   112,   254,   255,     0,     0,     0,     0,     0,
       0,   260,   261,   262,   263,   264,   265,     0,     0,   268,
     269,   270,   271,   272
};

static const yytype_int16 yycheck[] =
{
      35,     0,     4,   127,    30,    28,   121,     4,    28,     4,
      45,    46,    14,     4,     4,    41,    15,    14,    53,    14,
      55,    56,    57,    58,    59,    60,   141,    14,     4,   144,
     201,   146,    17,    20,    19,    34,    17,    15,    19,     4,
      15,    19,    38,    39,     4,    15,    81,    43,     4,    34,
       0,    19,    46,    34,     0,    13,    91,    15,    93,    94,
      95,    96,    97,    98,    99,    15,    15,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    80,    29,
      30,    80,    15,    80,   119,    80,    17,    81,    19,    80,
      80,    41,    17,   128,    19,    70,    71,   132,   133,   134,
      70,    71,    15,    53,    80,    80,    81,    82,    78,    79,
      80,    81,    82,    62,    63,   230,    22,    23,   153,    41,
      42,    70,    71,    17,    17,   119,    17,     4,     4,    78,
      79,    80,    81,    82,    84,     4,     4,    70,    71,    13,
      13,     4,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     4,    18,    20,    18,    70,    71,    18,
      15,   196,   197,    13,   335,    26,    27,    13,     4,    30,
      31,    32,    19,    14,    19,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,    19,    14,   359,   360,
      15,     4,    13,    47,    47,    13,   367,    13,    18,    60,
      61,     4,    19,    64,   328,   329,   377,    19,    19,    19,
      14,    18,    13,     4,     4,    70,    71,    78,    79,    80,
      25,   345,    18,    38,   395,    80,    81,    82,    23,    18,
       4,     4,    20,   357,   184,   406,   407,    20,    19,   354,
      18,   276,    14,   278,   368,   416,    21,    18,   372,   373,
      13,   375,   123,   124,   369,    13,    38,    37,    14,    14,
      14,    14,    19,   387,    14,   389,   390,    14,    14,   393,
      14,   225,   143,    15,   342,     3,     4,   401,   333,    79,
     404,    -1,    69,    -1,    -1,    13,    -1,   411,   412,    -1,
     414,    19,    -1,    -1,    -1,   419,   331,   421,   422,     3,
       4,    29,   337,   427,    -1,    -1,   177,    -1,   179,    13,
      14,    -1,    -1,   184,   185,    -1,    -1,   188,   189,   190,
     191,   192,   193,    -1,    -1,    29,    -1,    -1,    -1,    -1,
     365,    -1,    60,    61,    -1,    -1,    64,    -1,    -1,    -1,
      68,    69,    -1,    -1,    -1,   380,   381,    -1,    -1,    -1,
      78,    79,    80,    -1,    -1,    -1,    60,    61,    -1,    -1,
      64,    -1,   397,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    -1,    -1,    -1,
     251,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    13,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,   293,   294,    17,    -1,    19,    -1,    29,    -1,
      -1,   302,    -1,    -1,   305,   306,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    38,    39,    40,    -1,    -1,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    60,
      61,    -1,    -1,    64,    -1,    -1,    -1,    60,    61,    -1,
      -1,    64,    -1,    -1,    -1,    68,    69,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    -1,     3,
       4,   362,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    17,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      -1,    -1,    36,    -1,    38,    39,    40,    -1,    -1,    43,
      44,    45,    46,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    60,    61,    -1,    -1,
      64,    15,    -1,    -1,    68,    69,    -1,    -1,    -1,    29,
      30,    31,    32,    -1,    78,    79,    80,     3,     4,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    13,    14,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    29,    64,    25,    26,    27,    62,    63,
      -1,     3,     4,    -1,    -1,    -1,    70,    71,    78,    79,
      80,    13,    14,    -1,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    29,    64,    -1,
      60,    61,    68,    69,    64,     3,     4,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    13,    -1,    -1,    78,    79,
      80,    19,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    29,    64,     3,     4,    -1,    68,    69,    -1,     3,
       4,    -1,    -1,    13,    14,    -1,    78,    79,    80,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    60,    61,    -1,    29,    64,     3,     4,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    13,    14,    -1,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    29,    64,    -1,    60,    61,    68,    69,
      64,     3,     4,    -1,    68,    69,    -1,    -1,    78,    79,
      80,    13,    14,    -1,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    29,    64,     3,
       4,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    13,
      14,    -1,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,    29,    -1,    -1,    60,    61,
      13,    -1,    64,    -1,    -1,    -1,    68,    69,    -1,    -1,
      -1,     3,     4,    26,    27,    -1,    78,    79,    80,    -1,
      -1,    13,    14,     3,     4,    -1,    60,    61,    -1,    -1,
      64,    -1,    -1,    13,    68,    69,    -1,    29,    -1,    19,
      -1,    -1,    -1,    -1,    78,    79,    80,    60,    61,    29,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    78,    79,    80,    60,    61,
      -1,    -1,    64,    13,    -1,     3,     4,    -1,    -1,    19,
      60,    61,    -1,    -1,    64,    13,    78,    79,    80,    29,
      -1,    19,    -1,    -1,    -1,    -1,     3,     4,    78,    79,
      80,    29,    -1,     3,     4,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    19,    13,    -1,    -1,    -1,    -1,    -1,    19,
      60,    61,    29,    -1,    64,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    60,    61,    -1,    -1,    64,    -1,    78,    79,
      80,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    60,    61,    -1,    -1,    64,    -1,    -1,
      60,    61,    -1,    -1,    64,    -1,    14,    15,    -1,    -1,
      -1,    78,    79,    80,    -1,    -1,    -1,    -1,    78,    79,
      80,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      63,    64,    65,    66,    14,    15,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      58,    59,    -1,    -1,    62,    63,    64,    65,    66,    14,
      15,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    58,    59,
      -1,    -1,    62,    63,    64,    65,    66,    14,    15,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    58,    59,    -1,    -1,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    15,    -1,
      -1,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    15,    16,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    15,    -1,    -1,    58,
      59,    20,    -1,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    62,    63,    64,    65,    66,    -1,    15,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    -1,    58,    59,    -1,
      -1,    62,    63,    64,    65,    66,    15,    -1,    17,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    58,    59,    -1,    -1,    62,    63,    64,    65,
      66,    67,    15,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    15,    -1,    58,
      59,    -1,    35,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    15,    58,    59,    -1,    19,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      15,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    24,
      78,    79,    80,    81,    82,    -1,    -1,    58,    59,    -1,
      -1,    62,    63,    64,    65,    66,    15,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    58,    59,    -1,    -1,    62,    63,    64,
      65,    66,    15,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    58,
      59,    -1,    35,    62,    63,    64,    65,    66,    67,    15,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    58,    59,    -1,    -1,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      15,    -1,    58,    59,    -1,    20,    62,    63,    64,    65,
      66,    67,    -1,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    -1,    -1,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    15,    -1,
      58,    59,    19,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    58,    59,
      15,    -1,    62,    63,    64,    65,    66,    -1,    -1,    24,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    -1,    15,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    35,    15,    62,    63,    64,
      65,    66,    30,    31,    32,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    58,    59,
      -1,    15,    62,    63,    64,    65,    66,    21,    -1,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    62,    63,    64,    15,    66,    -1,    -1,
      19,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    58,    59,    -1,    -1,    62,    63,
      64,    65,    66,    15,    -1,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    58,
      59,    -1,    -1,    62,    63,    64,    65,    66,    15,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    -1,    -1,    35,    -1,
      62,    63,    64,    15,    66,    -1,    -1,    19,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    58,    59,    -1,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    15,    -1,    -1,    -1,    19,    -1,     6,     7,     8,
       9,    10,    11,    12,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    30,    31,    32,    33,    34,    -1,    -1,    30,    31,
      32,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,    63,
      64,    65,    66,    15,    -1,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    58,
      59,    -1,    -1,    62,    63,    64,    65,    66,    15,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    58,    59,    -1,    -1,
      62,    63,    64,    65,    66,    15,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      15,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    59,
      -1,    15,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    15,    59,    -1,    -1,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    62,    63,
      64,    65,    66,    15,    -1,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      62,    63,    64,    65,    66,    15,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    15,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    62,    63,    15,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    15,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    -1,    -1,    78,    79,
      80,    81,    82,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    -1,    -1,    78,
      79,    80,    81,    82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,     8,     9,    10,    11,    12,    30,    31,
      32,    33,    34,    85,    86,    88,    89,    93,    96,     4,
       4,     4,    28,    28,     0,    86,     4,    80,    19,    17,
      17,    17,     4,     4,    13,    15,    30,    31,    32,    89,
      94,    95,    94,     4,    97,    13,    13,    14,    89,    91,
      96,     3,     4,    13,    29,    60,    61,    64,    78,    79,
      80,   101,     4,     4,     4,     4,    18,    94,    18,    20,
      18,   100,   101,   100,    17,    19,    34,    92,     4,    14,
      20,    13,    89,   101,    13,   101,   101,   101,   101,   101,
     101,    15,    16,    58,    59,    62,    63,    64,    65,    66,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    19,    19,    19,    97,    19,    14,    20,
      14,    17,    19,    33,    34,    36,    38,    39,    40,    43,
      44,    45,    46,    68,    69,    87,    96,   101,   102,   105,
     106,   107,    22,    23,    17,    19,    17,    19,    92,    96,
      14,   100,     4,    14,    14,    89,   101,   101,   101,   101,
     101,   101,   101,   101,     4,     4,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,    47,   100,    47,
      87,     3,     4,     5,    13,    25,    26,    27,    60,    61,
      64,    78,    79,    80,    99,    99,    13,    13,    33,   105,
     101,    13,    19,    19,    19,   101,   101,   101,    18,    19,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    68,    69,    19,    87,     4,    90,    99,    87,    87,
      17,    19,    14,   101,    14,    16,    99,    99,    18,    13,
      89,    99,    99,     4,     4,    99,    99,    99,    99,    99,
      99,    15,    58,    59,    62,    63,    64,    65,    66,    67,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    35,   101,   101,    38,    17,    19,   102,
      19,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,    90,    23,    24,    18,    18,    87,    67,    35,
      98,    99,    14,    14,    67,    20,    20,    99,    99,    99,
      99,    99,    99,    99,    99,     4,     4,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    14,    14,
     101,    41,    42,   103,   104,    19,   101,    19,    99,    99,
      18,    14,    20,    99,    38,    39,    43,    99,    99,    16,
     105,   105,    19,   101,    21,   104,    18,    14,   102,    19,
      19,   101,    24,    35,    98,    13,   105,    13,    37,    21,
      87,   105,    14,    14,   102,    14,   102,    19,    99,   101,
      38,    19,   102,   105,    87,   105,   105,    14,   105,    14,
      14,   102,    35,    14,   101,    19,   101,    19,   105,   105,
     105,    14,   105,    19,    14,   102,    19,    19,   101,   105,
     105,    14,    14,   102,    14,   102,    19,   105,   105,    14,
     105,    14,    14,   102,   105,   105,   105,    14,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    84,    85,    86,    86,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    96,    96,    97,    97,    98,    98,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   103,   103,   104,   104,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   106,   107,   107,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     2,     9,     8,     8,
       7,     7,     6,     6,     5,     1,     6,     6,     6,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     5,     0,     2,     1,     3,     8,     6,     9,     9,
       0,     2,     3,     2,     1,     1,     3,     1,     3,     3,
       1,     1,     1,     4,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     4,     4,
       3,     3,     4,     4,     1,     3,     1,     3,     1,     3,
       4,     4,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     4,     4,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     4,     3,     0,     2,
       2,     2,     5,     7,     5,     5,     9,     5,     9,    13,
       9,    10,     6,    11,     7,    11,     7,    11,     7,    12,
       8,    12,     8,    12,     8,     2,     2,     2,     3,     1,
       1,     3,     1,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 105 "lang.y"
  {
    (yyval.dl) = ((yyvsp[0].dl));
    root = (yyval.dl);
  }
#line 2062 "parser.c"
    break;

  case 3:
#line 113 "lang.y"
  {
    (yyval.dl) = (DFLNil());
  }
#line 2070 "parser.c"
    break;

  case 4:
#line 117 "lang.y"
  {
    (yyval.dl) = (DFLCons((yyvsp[-1].d),(yyvsp[0].dl)));
  }
#line 2078 "parser.c"
    break;

  case 5:
#line 123 "lang.y"
  {
    (yyval.c) = NULL;
  }
#line 2086 "parser.c"
    break;

  case 6:
#line 127 "lang.y"
  {
    (yyval.c) = (TSeq((yyvsp[-1].c), (yyvsp[0].c)));
  }
#line 2094 "parser.c"
    break;

  case 7:
#line 134 "lang.y"
  {
    (yyval.d) = (TFuncdef((yyvsp[-8].t),(yyvsp[-7].i),(yyvsp[-5].vdl),(yyvsp[-1].c),(yyvsp[-3].afd)));
  }
#line 2102 "parser.c"
    break;

  case 8:
#line 138 "lang.y"
  {
    (yyval.d) = (TFuncdef((yyvsp[-7].t),(yyvsp[-6].i),NULL,(yyvsp[-1].c),(yyvsp[-2].none)));
  }
#line 2110 "parser.c"
    break;

  case 9:
#line 142 "lang.y"
  {
    (yyval.d) = (TFuncdef((yyvsp[-7].t),(yyvsp[-6].i),(yyvsp[-4].vdl),(yyvsp[-1].c),NULL));
  }
#line 2118 "parser.c"
    break;

  case 10:
#line 146 "lang.y"
  {
    (yyval.d) = (TFuncdef((yyvsp[-6].t),(yyvsp[-5].i),NULL,(yyvsp[-1].c),NULL));
  }
#line 2126 "parser.c"
    break;

  case 11:
#line 150 "lang.y"
  {
    (yyval.d) = (TFuncdec((yyvsp[-6].t),(yyvsp[-5].i),(yyvsp[-3].vdl),(yyvsp[-1].afd)));
  }
#line 2134 "parser.c"
    break;

  case 12:
#line 154 "lang.y"
  {
    (yyval.d) = (TFuncdec((yyvsp[-5].t),(yyvsp[-4].i),NULL,(yyvsp[-1].afd)));
  }
#line 2142 "parser.c"
    break;

  case 13:
#line 158 "lang.y"
  {
    (yyval.d) = (TFuncdec((yyvsp[-5].t),(yyvsp[-4].i),(yyvsp[-2].vdl),NULL));
  }
#line 2150 "parser.c"
    break;

  case 14:
#line 162 "lang.y"
  {
    (yyval.d) = (TFuncdec((yyvsp[-4].t),(yyvsp[-3].i),NULL,NULL));
  }
#line 2158 "parser.c"
    break;

  case 15:
#line 166 "lang.y"
  {
    (yyval.d) = (TSepdef((yyvsp[0].asd)));
  }
#line 2166 "parser.c"
    break;

  case 16:
#line 170 "lang.y"
  {
    (yyval.d) = (TUniondef((yyvsp[-4].i),(yyvsp[-2].fdl)));
  }
#line 2174 "parser.c"
    break;

  case 17:
#line 174 "lang.y"
  {
    (yyval.d) = (TEnumdef((yyvsp[-4].i),(yyvsp[-2].enl)));
  }
#line 2182 "parser.c"
    break;

  case 18:
#line 178 "lang.y"
  {
    (yyval.d) = (TStructdef((yyvsp[-4].i),(yyvsp[-2].fdl)));
  }
#line 2190 "parser.c"
    break;

  case 19:
#line 182 "lang.y"
  {
    (yyval.d) = (Tvardec((yyvsp[-1].vd)));
  }
#line 2198 "parser.c"
    break;

  case 20:
#line 189 "lang.y"
  {
    (yyval.t) = (TBasic(T_VOID));
  }
#line 2206 "parser.c"
    break;

  case 21:
#line 193 "lang.y"
  {
    (yyval.t) = (TBasic(T_CHAR));
  }
#line 2214 "parser.c"
    break;

  case 22:
#line 197 "lang.y"
  {
    (yyval.t) = (TBasic(T_U8));
  }
#line 2222 "parser.c"
    break;

  case 23:
#line 201 "lang.y"
  {
    (yyval.t) = (TBasic(T_INT));
  }
#line 2230 "parser.c"
    break;

  case 24:
#line 205 "lang.y"
  {
    (yyval.t) = (TBasic(T_INT64));
  }
#line 2238 "parser.c"
    break;

  case 25:
#line 209 "lang.y"
  {
    (yyval.t) = (TBasic(T_UINT));
  }
#line 2246 "parser.c"
    break;

  case 26:
#line 213 "lang.y"
  {
    (yyval.t) = (TBasic(T_UINT64));
  }
#line 2254 "parser.c"
    break;

  case 27:
#line 217 "lang.y"
  {
    (yyval.t) = (TStruct((yyvsp[0].i)));
  }
#line 2262 "parser.c"
    break;

  case 28:
#line 221 "lang.y"
  {
    (yyval.t) = (TUnion((yyvsp[0].i)));
  }
#line 2270 "parser.c"
    break;

  case 29:
#line 225 "lang.y"
  {
    (yyval.t) = (TEnum((yyvsp[0].i)));
  }
#line 2278 "parser.c"
    break;

  case 30:
#line 229 "lang.y"
  {
    (yyval.t) = (TPtr((yyvsp[-1].t)));
  }
#line 2286 "parser.c"
    break;

  case 31:
#line 233 "lang.y"
  {
    (yyval.t) = (TArray((yyvsp[-4].t),(yyvsp[-3].i),(yyvsp[-1].e)));
  }
#line 2294 "parser.c"
    break;

  case 32:
#line 240 "lang.y"
  {
    (yyval.vl) = (VLNil());
  }
#line 2302 "parser.c"
    break;

  case 33:
#line 244 "lang.y"
  {
    (yyval.vl) = (VLCons((yyvsp[-1].i),(yyvsp[0].vl)));
  }
#line 2310 "parser.c"
    break;

  case 34:
#line 250 "lang.y"
  {
    (yyval.vdl) = (VARCons((yyvsp[0].vd),VARNil()));
  }
#line 2318 "parser.c"
    break;

  case 35:
#line 254 "lang.y"
  {
    (yyval.vdl) = (VARCons((yyvsp[0].vd),(yyvsp[-2].vdl)));
  }
#line 2326 "parser.c"
    break;

  case 36:
#line 261 "lang.y"
  {
    (yyval.afd) = (TAfuncdef((yyvsp[-5].vl),(yyvsp[-3].r),(yyvsp[-1].r)));
  }
#line 2334 "parser.c"
    break;

  case 37:
#line 265 "lang.y"
  {
    (yyval.afd) = (TAfuncdef(NULL,(yyvsp[-3].r),(yyvsp[-1].r)));
  }
#line 2342 "parser.c"
    break;

  case 38:
#line 272 "lang.y"
  {
    (yyval.asd) = (TAsepdef((yyvsp[-6].i),(yyvsp[-4].exl),(yyvsp[-1].r)));
  }
#line 2350 "parser.c"
    break;

  case 39:
#line 276 "lang.y"
  {
    (yyval.asd) = (TAsepdef((yyvsp[-6].i),(yyvsp[-4].exl),(yyvsp[-1].r)));
  }
#line 2358 "parser.c"
    break;

  case 40:
#line 283 "lang.y"
  {
    (yyval.fdl) = (FDLNil());
  }
#line 2366 "parser.c"
    break;

  case 41:
#line 287 "lang.y"
  {
    (yyval.fdl) = (FDLCons((yyvsp[-1].fd),(yyvsp[0].fdl)));
  }
#line 2374 "parser.c"
    break;

  case 42:
#line 294 "lang.y"
  {
    (yyval.fd) = (TFIELDDEC((yyvsp[-2].t),(yyvsp[-1].i)));
  }
#line 2382 "parser.c"
    break;

  case 43:
#line 301 "lang.y"
  {
    (yyval.vd) = (TVARDEC((yyvsp[-1].t),(yyvsp[0].i)));
  }
#line 2390 "parser.c"
    break;

  case 44:
#line 305 "lang.y"
  {
    (yyval.vd) = (TVARDEC((yyvsp[0].t),NULL));
  }
#line 2398 "parser.c"
    break;

  case 45:
#line 312 "lang.y"
  {
    (yyval.enl) = (ENLCons((yyvsp[0].i),ENLNil()));
  }
#line 2406 "parser.c"
    break;

  case 46:
#line 316 "lang.y"
  {
    (yyval.enl) = (ENLCons((yyvsp[-2].i),(yyvsp[0].enl)));
  }
#line 2414 "parser.c"
    break;

  case 47:
#line 324 "lang.y"
  { 
    (yyval.rl) = (RALCons((yyvsp[0].r), RALNil()));
  }
#line 2422 "parser.c"
    break;

  case 48:
#line 328 "lang.y"
  {
    (yyval.rl) = (RALCons((yyvsp[-2].r), (yyvsp[0].rl)));
  }
#line 2430 "parser.c"
    break;

  case 49:
#line 335 "lang.y"
  {
    (yyval.r) = ((yyvsp[-1].r)); 
  }
#line 2438 "parser.c"
    break;

  case 50:
#line 339 "lang.y"
  { 
    (yyval.r) = (RAConst((yyvsp[0].n)));
  }
#line 2446 "parser.c"
    break;

  case 51:
#line 343 "lang.y"
  {
    (yyval.r) = (RAVar((yyvsp[0].i),0));
  }
#line 2454 "parser.c"
    break;

  case 52:
#line 347 "lang.y"
  { 
    (yyval.r) = (RAVar((yyvsp[0].i),1));
  }
#line 2462 "parser.c"
    break;

  case 53:
#line 351 "lang.y"
  {
    (yyval.r) = (RACall((yyvsp[-3].i),(yyvsp[-1].rl)));
  }
#line 2470 "parser.c"
    break;

  case 54:
#line 355 "lang.y"
  {
    (yyval.r) = (RAUnop(T_UMINUS,(yyvsp[0].r)));
  }
#line 2478 "parser.c"
    break;

  case 55:
#line 359 "lang.y"
  {
    (yyval.r) = (RAUnop(T_UPLUS,(yyvsp[0].r)));
  }
#line 2486 "parser.c"
    break;

  case 56:
#line 363 "lang.y"
  {
    (yyval.r) = (RAUnop(T_NOTBOOL,(yyvsp[0].r)));
  }
#line 2494 "parser.c"
    break;

  case 57:
#line 367 "lang.y"
  {
    (yyval.r) = (RAUnop(T_NOTINT,(yyvsp[0].r)));
  }
#line 2502 "parser.c"
    break;

  case 58:
#line 371 "lang.y"
  {
    (yyval.r) = (RABinop(T_PLUS,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2510 "parser.c"
    break;

  case 59:
#line 375 "lang.y"
  {
    (yyval.r) = (RABinop(T_MINUS,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2518 "parser.c"
    break;

  case 60:
#line 379 "lang.y"
  {
    (yyval.r) = (RABinop(T_MUL,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2526 "parser.c"
    break;

  case 61:
#line 383 "lang.y"
  {
    (yyval.r) = (RABinop(T_DIV,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2534 "parser.c"
    break;

  case 62:
#line 387 "lang.y"
  {
    (yyval.r) = (RABinop(T_MOD,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2542 "parser.c"
    break;

  case 63:
#line 391 "lang.y"
  {
    (yyval.r) = (RABinop(T_LT,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2550 "parser.c"
    break;

  case 64:
#line 395 "lang.y"
  {
    (yyval.r) = (RABinop(T_GT,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2558 "parser.c"
    break;

  case 65:
#line 399 "lang.y"
  {
    (yyval.r) = (RABinop(T_LE,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2566 "parser.c"
    break;

  case 66:
#line 403 "lang.y"
  {
    (yyval.r) = (RABinop(T_GE,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2574 "parser.c"
    break;

  case 67:
#line 407 "lang.y"
  {
    (yyval.r) = (RABinop(T_EQ,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2582 "parser.c"
    break;

  case 68:
#line 411 "lang.y"
  {
    (yyval.r) = (RABinop(T_NE,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2590 "parser.c"
    break;

  case 69:
#line 415 "lang.y"
  {
    (yyval.r) = (RABinop(T_AND,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2598 "parser.c"
    break;

  case 70:
#line 419 "lang.y"
  {
    (yyval.r) = (RABinop(T_OR,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2606 "parser.c"
    break;

  case 71:
#line 423 "lang.y"
  {
    (yyval.r) = (RABinop(T_BAND,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2614 "parser.c"
    break;

  case 72:
#line 427 "lang.y"
  {
    (yyval.r) = (RABinop(T_BOR,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2622 "parser.c"
    break;

  case 73:
#line 431 "lang.y"
  {
    (yyval.r) = (RABinop(T_XOR,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2630 "parser.c"
    break;

  case 74:
#line 435 "lang.y"
  {
    (yyval.r) = (RABinop(T_SHL,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2638 "parser.c"
    break;

  case 75:
#line 439 "lang.y"
  {
    (yyval.r) = (RABinop(T_SHR,(yyvsp[-2].r),(yyvsp[0].r)));
  }
#line 2646 "parser.c"
    break;

  case 76:
#line 443 "lang.y"
  {
    (yyval.r) = (RADeref((yyvsp[0].r)));
  }
#line 2654 "parser.c"
    break;

  case 77:
#line 447 "lang.y"
  {
    (yyval.r) = (RAAddress((yyvsp[0].r)));
  }
#line 2662 "parser.c"
    break;

  case 78:
#line 451 "lang.y"
  {
    (yyval.r) = (RACast((yyvsp[-2].t),(yyvsp[0].r)));
  }
#line 2670 "parser.c"
    break;

  case 79:
#line 455 "lang.y"
  {
    (yyval.r) = (RAIndex((yyvsp[-3].r),(yyvsp[-1].r)));
  }
#line 2678 "parser.c"
    break;

  case 80:
#line 459 "lang.y"
  {
    (yyval.r) = (RAFieldof((yyvsp[-2].r),(yyvsp[0].i)));
  }
#line 2686 "parser.c"
    break;

  case 81:
#line 463 "lang.y"
  {
    (yyval.r) = (RAFieldofptr((yyvsp[-2].r),(yyvsp[0].i)));
  }
#line 2694 "parser.c"
    break;

  case 82:
#line 467 "lang.y"
  {
    (yyval.r) = (RAQfop(A_FORALL,(yyvsp[-2].i),(yyvsp[0].r)));
  }
#line 2702 "parser.c"
    break;

  case 83:
#line 471 "lang.y"
  {
    (yyval.r) = (RAQfop(A_EXISTS,(yyvsp[-2].i),(yyvsp[0].r)));
  }
#line 2710 "parser.c"
    break;

  case 84:
#line 479 "lang.y"
  { 
    (yyval.exl) = (ELCons((yyvsp[0].e), ELNil()));
  }
#line 2718 "parser.c"
    break;

  case 85:
#line 483 "lang.y"
  {
    (yyval.exl) = (ELCons((yyvsp[-2].e), (yyvsp[0].exl)));
  }
#line 2726 "parser.c"
    break;

  case 86:
#line 490 "lang.y"
  {
    (yyval.e) = (TConst((yyvsp[0].n)));
  }
#line 2734 "parser.c"
    break;

  case 87:
#line 494 "lang.y"
  {
    (yyval.e) = ((yyvsp[-1].e));
  }
#line 2742 "parser.c"
    break;

  case 88:
#line 498 "lang.y"
  {
    (yyval.e) = (TVar((yyvsp[0].i)));
  }
#line 2750 "parser.c"
    break;

  case 89:
#line 502 "lang.y"
  {
    (yyval.e) = (TCall((yyvsp[-2].i), ELNil()));
  }
#line 2758 "parser.c"
    break;

  case 90:
#line 506 "lang.y"
  {
    (yyval.e) = (TCall((yyvsp[-3].i),(yyvsp[-1].exl)));
  }
#line 2766 "parser.c"
    break;

  case 91:
#line 510 "lang.y"
  {
    (yyval.e) = (TSizeofType((yyvsp[-1].t)));
  }
#line 2774 "parser.c"
    break;

  case 92:
#line 514 "lang.y"
  {
    (yyval.e) = (TUnop(T_UMINUS,(yyvsp[0].e)));
  }
#line 2782 "parser.c"
    break;

  case 93:
#line 518 "lang.y"
  {
    (yyval.e) = (TUnop(T_UPLUS,(yyvsp[0].e)));
  }
#line 2790 "parser.c"
    break;

  case 94:
#line 522 "lang.y"
  {
    (yyval.e) = (TUnop(T_NOTBOOL,(yyvsp[0].e)));
  }
#line 2798 "parser.c"
    break;

  case 95:
#line 526 "lang.y"
  {
    (yyval.e) = (TUnop(T_NOTINT,(yyvsp[0].e)));
  }
#line 2806 "parser.c"
    break;

  case 96:
#line 530 "lang.y"
  {
    (yyval.e) = (TBinop(T_PLUS,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2814 "parser.c"
    break;

  case 97:
#line 534 "lang.y"
  {
    (yyval.e) = (TBinop(T_MINUS,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2822 "parser.c"
    break;

  case 98:
#line 538 "lang.y"
  {
    (yyval.e) = (TBinop(T_MUL,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2830 "parser.c"
    break;

  case 99:
#line 542 "lang.y"
  {
    (yyval.e) = (TBinop(T_DIV,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2838 "parser.c"
    break;

  case 100:
#line 546 "lang.y"
  {
    (yyval.e) = (TBinop(T_MOD,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2846 "parser.c"
    break;

  case 101:
#line 550 "lang.y"
  {
    (yyval.e) = (TBinop(T_LT,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2854 "parser.c"
    break;

  case 102:
#line 554 "lang.y"
  {
    (yyval.e) = (TBinop(T_GT,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2862 "parser.c"
    break;

  case 103:
#line 558 "lang.y"
  {
    (yyval.e) = (TBinop(T_LE,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2870 "parser.c"
    break;

  case 104:
#line 562 "lang.y"
  {
    (yyval.e) = (TBinop(T_GE,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2878 "parser.c"
    break;

  case 105:
#line 566 "lang.y"
  {
    (yyval.e) = (TBinop(T_EQ,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2886 "parser.c"
    break;

  case 106:
#line 570 "lang.y"
  {
    (yyval.e) = (TBinop(T_NE,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2894 "parser.c"
    break;

  case 107:
#line 574 "lang.y"
  {
    (yyval.e) = (TBinop(T_AND,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2902 "parser.c"
    break;

  case 108:
#line 578 "lang.y"
  {
    (yyval.e) = (TBinop(T_OR,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2910 "parser.c"
    break;

  case 109:
#line 582 "lang.y"
  {
    (yyval.e) = (TBinop(T_BAND,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2918 "parser.c"
    break;

  case 110:
#line 586 "lang.y"
  {
    (yyval.e) = (TBinop(T_BOR,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2926 "parser.c"
    break;

  case 111:
#line 590 "lang.y"
  {
    (yyval.e) = (TBinop(T_XOR,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2934 "parser.c"
    break;

  case 112:
#line 594 "lang.y"
  {
    (yyval.e) = (TBinop(T_SHL,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2942 "parser.c"
    break;

  case 113:
#line 598 "lang.y"
  {
    (yyval.e) = (TBinop(T_SHR,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 2950 "parser.c"
    break;

  case 114:
#line 602 "lang.y"
  {
    (yyval.e) = (TDeref((yyvsp[0].e)));
  }
#line 2958 "parser.c"
    break;

  case 115:
#line 606 "lang.y"
  {
    (yyval.e) = (TAddress((yyvsp[0].e)));
  }
#line 2966 "parser.c"
    break;

  case 116:
#line 610 "lang.y"
  {
    (yyval.e) = (TCast((yyvsp[-2].t),(yyvsp[0].e)));
  }
#line 2974 "parser.c"
    break;

  case 117:
#line 614 "lang.y"
  {
    (yyval.e) = (TIndex((yyvsp[-3].e),(yyvsp[-1].e)));
  }
#line 2982 "parser.c"
    break;

  case 118:
#line 618 "lang.y"
  {
    (yyval.e) = (TFieldof((yyvsp[-2].e),(yyvsp[0].i)));
  }
#line 2990 "parser.c"
    break;

  case 119:
#line 622 "lang.y"
  {
    (yyval.e) = (TFieldofptr((yyvsp[-2].e),(yyvsp[0].i)));
  }
#line 2998 "parser.c"
    break;

  case 120:
#line 630 "lang.y"
  {
    (yyval.sc) = (TComputation((yyvsp[0].e)));
  }
#line 3006 "parser.c"
    break;

  case 121:
#line 634 "lang.y"
  {
    (yyval.sc) = (TAsgn(T_ASSIGN,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 3014 "parser.c"
    break;

  case 122:
#line 638 "lang.y"
  {
    (yyval.sc) = (TAsgn(T_ADD_ASSIGN,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 3022 "parser.c"
    break;

  case 123:
#line 642 "lang.y"
  {
    (yyval.sc) = (TAsgn(T_SUB_ASSIGN,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 3030 "parser.c"
    break;

  case 124:
#line 646 "lang.y"
  {
    (yyval.sc) = (TAsgn(T_MUL_ASSIGN,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 3038 "parser.c"
    break;

  case 125:
#line 650 "lang.y"
  {
    (yyval.sc) = (TAsgn(T_DIV_ASSIGN,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 3046 "parser.c"
    break;

  case 126:
#line 654 "lang.y"
  {
    (yyval.sc) = (TAsgn(T_MOD_ASSIGN,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 3054 "parser.c"
    break;

  case 127:
#line 658 "lang.y"
  {
    (yyval.sc) = (TAsgn(T_BAND_ASSIGN,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 3062 "parser.c"
    break;

  case 128:
#line 662 "lang.y"
  {
    (yyval.sc) = (TAsgn(T_BOR_ASSIGN,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 3070 "parser.c"
    break;

  case 129:
#line 666 "lang.y"
  {
    (yyval.sc) = (TAsgn(T_XOR_ASSIGN,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 3078 "parser.c"
    break;

  case 130:
#line 670 "lang.y"
  {
    (yyval.sc) = (TAsgn(T_SHL_ASSIGN,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 3086 "parser.c"
    break;

  case 131:
#line 674 "lang.y"
  {
    (yyval.sc) = (TAsgn(T_SHR_ASSIGN,(yyvsp[-2].e),(yyvsp[0].e)));
  }
#line 3094 "parser.c"
    break;

  case 132:
#line 678 "lang.y"
  {
    (yyval.sc) = (TIncDec(T_INC_F,(yyvsp[0].e)));
  }
#line 3102 "parser.c"
    break;

  case 133:
#line 682 "lang.y"
  {
    (yyval.sc) = (TIncDec(T_INC_B,(yyvsp[-1].e)));
  }
#line 3110 "parser.c"
    break;

  case 134:
#line 686 "lang.y"
  {
    (yyval.sc) = (TIncDec(T_DEC_F,(yyvsp[0].e)));
  }
#line 3118 "parser.c"
    break;

  case 135:
#line 690 "lang.y"
  {
    (yyval.sc) = (TIncDec(T_DEC_B,(yyvsp[-1].e)));
  }
#line 3126 "parser.c"
    break;

  case 136:
#line 697 "lang.y"
  {
    (yyval.cas) = (TCase((yyvsp[-2].e),(yyvsp[0].c)));
  }
#line 3134 "parser.c"
    break;

  case 137:
#line 701 "lang.y"
  {
    (yyval.cas) = (TDefault((yyvsp[0].c)));
  }
#line 3142 "parser.c"
    break;

  case 138:
#line 707 "lang.y"
  {
    (yyval.cl) = CLNil();
  }
#line 3150 "parser.c"
    break;

  case 139:
#line 712 "lang.y"
  {
    (yyval.cl) = (CLCons((yyvsp[-1].cas),(yyvsp[0].cl)));
  }
#line 3158 "parser.c"
    break;

  case 140:
#line 720 "lang.y"
  {
    (yyval.c) = (TVarDecl((yyvsp[-1].vd)));
  }
#line 3166 "parser.c"
    break;

  case 141:
#line 724 "lang.y"
  {
    (yyval.c) = (TSimple((yyvsp[-1].sc)));
  }
#line 3174 "parser.c"
    break;

  case 142:
#line 728 "lang.y"
  {
    (yyval.c) = (TIf((yyvsp[-2].e),(yyvsp[0].c),NULL));
  }
#line 3182 "parser.c"
    break;

  case 143:
#line 732 "lang.y"
  {
    (yyval.c) = (TIf((yyvsp[-4].e),(yyvsp[-2].c),(yyvsp[0].c)));
  }
#line 3190 "parser.c"
    break;

  case 144:
#line 736 "lang.y"
  {
    (yyval.c) = (TSwitch((yyvsp[-3].e),(yyvsp[-1].cl)));
  }
#line 3198 "parser.c"
    break;

  case 145:
#line 740 "lang.y"
  {
    (yyval.c) = (TWhile(NULL,(yyvsp[-2].e),(yyvsp[0].c)));
  }
#line 3206 "parser.c"
    break;

  case 146:
#line 744 "lang.y"
  {
    (yyval.c) = (TWhile((yyvsp[-6].r),(yyvsp[-2].e),(yyvsp[0].c)));
  }
#line 3214 "parser.c"
    break;

  case 147:
#line 748 "lang.y"
  {
    (yyval.c) = (TDoWhile(NULL,(yyvsp[-1].e),(yyvsp[-3].c)));
  }
#line 3222 "parser.c"
    break;

  case 148:
#line 752 "lang.y"
  {
    (yyval.c) = (TDoWhile((yyvsp[-6].r),(yyvsp[-1].e),(yyvsp[-3].c)));
  }
#line 3230 "parser.c"
    break;

  case 149:
#line 756 "lang.y"
  {
    (yyval.c) = (TFor((yyvsp[-10].r),(yyvsp[-6].sc),(yyvsp[-4].e),(yyvsp[-2].sc),(yyvsp[0].c)));
  }
#line 3238 "parser.c"
    break;

  case 150:
#line 760 "lang.y"
  {
    (yyval.c) = (TFor(NULL,(yyvsp[-6].sc),(yyvsp[-4].e),(yyvsp[-2].sc),(yyvsp[0].c)));
  }
#line 3246 "parser.c"
    break;

  case 151:
#line 764 "lang.y"
  {
    (yyval.c) = (TFor((yyvsp[-7].r),NULL,NULL,NULL,(yyvsp[0].c)));
  }
#line 3254 "parser.c"
    break;

  case 152:
#line 768 "lang.y"
  {
    (yyval.c) = (TFor(NULL,NULL,NULL,NULL,(yyvsp[0].c)));
  }
#line 3262 "parser.c"
    break;

  case 153:
#line 772 "lang.y"
  {
    (yyval.c) = (TFor((yyvsp[-8].r),(yyvsp[-4].sc),NULL,NULL,(yyvsp[0].c)));
  }
#line 3270 "parser.c"
    break;

  case 154:
#line 776 "lang.y"
  {
    (yyval.c) = (TFor(NULL,(yyvsp[-4].sc),NULL,NULL,(yyvsp[0].c)));
  }
#line 3278 "parser.c"
    break;

  case 155:
#line 780 "lang.y"
  {
    (yyval.c) = (TFor((yyvsp[-8].r),NULL,NULL,(yyvsp[-2].sc),(yyvsp[0].c)));
  }
#line 3286 "parser.c"
    break;

  case 156:
#line 784 "lang.y"
  {
    (yyval.c) = (TFor(NULL,NULL,NULL,(yyvsp[-2].sc),(yyvsp[0].c)));
  }
#line 3294 "parser.c"
    break;

  case 157:
#line 788 "lang.y"
  {
    (yyval.c) = (TFor((yyvsp[-8].r),NULL,(yyvsp[-3].e),NULL,(yyvsp[0].c)));
  }
#line 3302 "parser.c"
    break;

  case 158:
#line 792 "lang.y"
  {
    (yyval.c) = (TFor(NULL,NULL,(yyvsp[-3].e),NULL,(yyvsp[0].c)));
  }
#line 3310 "parser.c"
    break;

  case 159:
#line 796 "lang.y"
  {
    (yyval.c) = (TFor((yyvsp[-9].r),(yyvsp[-5].sc),NULL,(yyvsp[-2].sc),(yyvsp[0].c)));
  }
#line 3318 "parser.c"
    break;

  case 160:
#line 800 "lang.y"
  {
    (yyval.c) = (TFor(NULL,(yyvsp[-5].sc),NULL,(yyvsp[-2].sc),(yyvsp[0].c)));
  }
#line 3326 "parser.c"
    break;

  case 161:
#line 804 "lang.y"
  {
    (yyval.c) = (TFor((yyvsp[-9].r),(yyvsp[-5].sc),(yyvsp[-3].e),NULL,(yyvsp[0].c)));
  }
#line 3334 "parser.c"
    break;

  case 162:
#line 808 "lang.y"
  {
    (yyval.c) = (TFor(NULL,(yyvsp[-5].sc),(yyvsp[-3].e),NULL,(yyvsp[0].c)));
  }
#line 3342 "parser.c"
    break;

  case 163:
#line 812 "lang.y"
  {
    (yyval.c) = (TFor((yyvsp[-9].r),NULL,(yyvsp[-4].e),(yyvsp[-2].sc),(yyvsp[0].c)));
  }
#line 3350 "parser.c"
    break;

  case 164:
#line 816 "lang.y"
  {
    (yyval.c) = (TFor(NULL,NULL,(yyvsp[-4].e),(yyvsp[-2].sc),(yyvsp[0].c)));
  }
#line 3358 "parser.c"
    break;

  case 165:
#line 820 "lang.y"
  {
    (yyval.c) = (TBreak());
  }
#line 3366 "parser.c"
    break;

  case 166:
#line 824 "lang.y"
  {
    (yyval.c) = (TContinue());
  }
#line 3374 "parser.c"
    break;

  case 167:
#line 828 "lang.y"
  {
    (yyval.c) = (TReturn(NULL));
  }
#line 3382 "parser.c"
    break;

  case 168:
#line 832 "lang.y"
  {
    (yyval.c) = (TReturn((yyvsp[-1].e)));
  }
#line 3390 "parser.c"
    break;

  case 169:
#line 836 "lang.y"
  {
    (yyval.c) = ((yyvsp[0].c));
  }
#line 3398 "parser.c"
    break;

  case 170:
#line 840 "lang.y"
  {
    (yyval.c) = NULL;
  }
#line 3406 "parser.c"
    break;

  case 171:
#line 847 "lang.y"
  {
    (yyval.c) = ((yyvsp[-1].c));
  }
#line 3414 "parser.c"
    break;

  case 172:
#line 854 "lang.y"
  {
    (yyval.c)=(yyvsp[0].c);
  }
#line 3422 "parser.c"
    break;

  case 173:
#line 858 "lang.y"
  {
    (yyval.c) = (TComment((yyvsp[-1].r)));
  }
#line 3430 "parser.c"
    break;

  case 174:
#line 862 "lang.y"
  {
    (yyval.c) = (TComment((yyvsp[-1].r)));
  }
#line 3438 "parser.c"
    break;


#line 3442 "parser.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 868 "lang.y"


void yyerror(char* s)
{
    fprintf(stderr , "%s\n",s);
}
