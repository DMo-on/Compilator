
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Syntaxe.y"

#include<string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Quad.h"
FILE* yyin;
int yylex();
typedef int bool;

char tmp[20],tmp2[20],tmp3[20],tmp5[20],tmp4[20],tmp6[20],tmp7[20],tmp8[20],tmp9[20],tmp10[20];
int t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
int sauv_cond=0,sauv_inst=0,sauv_fin;
extern int t; // Compteur des états temporaires
int l=1,n=0; // Compteurs pour les bounds
int op_count=0; // Compteur du nombre d'operandes pour chaque operation
enum { false, true };
	extern int found(char nom[]);
	extern void insert(char nom[], char code[],int nbrl,int nbrc,int taille, char type[]);
	extern void show();
	extern int retournerVal(char nom[]);
	extern void insereValTab(char nom[],int i, int val);
	extern void inserePos(char nom[]);
	extern int retournerValTab(char nom[],int i);
	extern int Init (char nom[]);
	extern int retournerConst (char nom[]);
	extern int InitTab (char nom[],int i);
	extern initialiserTab();
	extern void insertConst(char nom[]);
extern void insereTaille(char nom[], int taille);
extern int doubleDeclaration (char nom[]);
extern void insereType(char nom[],char type[]);
extern void yyerror(char *s);
int prems=0;
char sauvOper[20] ;
char sauvType[20];
char SauvTypeExpress[20];
char SauvTypeProd[20];
char SauvTypeTerm[20];
 char    sauvIDF[20];
bool sauvCond;
int sauvExp,sauvProd,sauvTerm;
//extern Pile *initialiser();
int dixit=0; // Compteur du nombre d'accolades qui se sont ouvertes.
int dixit_if=0;
int dixit_while=0;

int nbr_if=0;
int nbr_while=0;
int addr_if[200],addr_while[200]; // addresses au fur et à mesure de chacune de ces accolades.
int i=0;
int j;
int nbrligne;
int nbrcolonne;


/* Line 189 of yacc.c  */
#line 129 "Syntaxe.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_Algo = 258,
     mc_Deb = 259,
     mc_If = 260,
     mc_Execut = 261,
     mc_while = 262,
     mc_CONST = 263,
     bibl_tab = 264,
     bibl_boucle = 265,
     bibl_calcul = 266,
     SEP = 267,
     mc_INT = 268,
     mc_REAL = 269,
     IDF = 270,
     OPREL = 271,
     AFF = 272,
     PLUS = 273,
     SUST = 274,
     MULT = 275,
     DIV = 276,
     CONST_ENT = 277,
     CONST_REAL = 278,
     String = 279
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 57 "Syntaxe.y"

int entier;
float reel;
char* str;
char car;
   


/* Line 214 of yacc.c  */
#line 198 "Syntaxe.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 210 "Syntaxe.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   103

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNRULES -- Number of states.  */
#define YYNSTATES  113

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      24,    25,     2,    29,     2,    30,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    27,     2,    28,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    13,     2,    14,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    11,    14,    17,    20,    21,    25,    27,
      31,    36,    42,    48,    52,    56,    63,    68,    72,    75,
      78,    80,    81,    91,    92,    93,    97,   101,   105,   114,
     115,   116,   120,   124,   128,   131,   133,   135,   138,   140,
     145,   153,   154,   156,   161,   166,   167,   169,   173,   177,
     178,   181,   184,   186,   188,   190,   195,   197
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      35,     0,    -1,    36,     3,    17,    43,    13,    53,    14,
      -1,     9,    36,    -1,    10,    36,    -1,    11,    36,    -1,
      -1,    17,    12,    37,    -1,    17,    -1,    60,    37,    26,
      -1,    60,     8,    40,    26,    -1,    17,    19,    31,    12,
      40,    -1,    17,    19,    32,    12,    40,    -1,    17,    19,
      31,    -1,    17,    19,    32,    -1,    17,    27,    31,    28,
      12,    41,    -1,    17,    27,    31,    28,    -1,    60,    41,
      26,    -1,    38,    43,    -1,    42,    43,    -1,    39,    -1,
      -1,     7,    24,    45,    47,    25,    13,    53,    14,    46,
      -1,    -1,    -1,    17,    18,    17,    -1,    17,    18,    31,
      -1,    17,    18,    32,    -1,     6,    49,    53,     5,    24,
      51,    25,    50,    -1,    -1,    -1,    17,    18,    17,    -1,
      17,    18,    31,    -1,    17,    18,    32,    -1,    55,    54,
      -1,    48,    -1,    44,    -1,    52,    53,    -1,    52,    -1,
      17,    19,    56,    26,    -1,    17,    27,    31,    28,    19,
      56,    26,    -1,    -1,    58,    -1,    56,    57,    20,    58,
      -1,    56,    57,    21,    58,    -1,    -1,    59,    -1,    58,
      22,    59,    -1,    58,    23,    59,    -1,    -1,    20,    59,
      -1,    21,    59,    -1,    17,    -1,    31,    -1,    32,    -1,
      17,    27,    31,    28,    -1,    15,    -1,    16,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    69,    70,    71,    72,    74,    77,    82,
      84,    86,    89,    92,    95,    99,   108,   118,   121,   122,
     123,   124,   127,   135,   137,   139,   140,   141,   144,   148,
     150,   152,   153,   154,   159,   160,   161,   163,   164,   167,
     172,   178,   180,   181,   186,   193,   195,   197,   202,   210,
     211,   213,   215,   218,   219,   220,   229,   230
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_Algo", "mc_Deb", "mc_If",
  "mc_Execut", "mc_while", "mc_CONST", "bibl_tab", "bibl_boucle",
  "bibl_calcul", "SEP", "'{'", "'}'", "mc_INT", "mc_REAL", "IDF", "OPREL",
  "AFF", "PLUS", "SUST", "MULT", "DIV", "'('", "')'", "';'", "'['", "']'",
  "'+'", "'-'", "CONST_ENT", "CONST_REAL", "String", "$accept",
  "Programme", "BIBL", "IDF_Plus", "DEC_Simp", "DEC_Const", "Const_Plus",
  "IDF_Plus_Tab", "DEC_Tab", "DEC", "INST_Boucle", "C", "D", "COND_WHILE",
  "INST_Cond", "A", "B", "COND_IF", "INST", "INST_Plus", "INST_Aff",
  "EPIC", "expres", "chte", "prod", "term", "TYPE", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   123,   125,   268,   269,   270,   271,   272,
     273,   274,   275,   276,    40,    41,    59,    91,    93,    43,
      45,   277,   278,   279
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    36,    36,    36,    36,    37,    37,    38,
      39,    40,    40,    40,    40,    41,    41,    42,    43,    43,
      43,    43,    44,    45,    46,    47,    47,    47,    48,    49,
      50,    51,    51,    51,    52,    52,    52,    53,    53,    54,
      54,    55,    56,    56,    56,    57,    58,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    60,    60
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     2,     2,     2,     0,     3,     1,     3,
       4,     5,     5,     3,     3,     6,     4,     3,     2,     2,
       1,     0,     9,     0,     0,     3,     3,     3,     8,     0,
       0,     3,     3,     3,     2,     1,     1,     2,     1,     4,
       7,     0,     1,     4,     4,     0,     1,     3,     3,     0,
       2,     2,     1,     1,     1,     4,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     6,     6,     6,     0,     0,     3,     4,     5,     1,
       0,    21,    56,    57,    21,    20,    21,     0,     0,    18,
      19,    41,     0,     8,     0,     0,    29,     0,    36,    35,
      38,     0,     0,     0,     0,     0,     0,     9,    17,    41,
      23,    37,     2,     0,    34,     0,    10,     8,     7,     0,
       0,     0,    49,     0,    13,    14,    16,     0,     0,     0,
      52,    49,    49,    53,    54,    45,    42,    46,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,    39,     0,
      49,    49,     0,    11,    12,     0,    15,     0,     0,    25,
      26,    27,    41,     0,    49,    49,    47,    48,    49,     0,
      30,     0,    55,    43,    44,    45,    31,    32,    33,    28,
      24,    40,    22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,    24,    14,    15,    34,    25,    16,    17,
      28,    51,   112,    59,    29,    39,   109,    88,    30,    31,
      44,    32,    65,    79,    66,    67,    18
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -61
static const yytype_int8 yypact[] =
{
       2,     2,     2,     2,    34,    29,   -61,   -61,   -61,   -61,
      23,    21,   -61,   -61,    21,   -61,    21,    30,    -3,   -61,
     -61,    32,    35,    -8,    28,    31,   -61,    36,   -61,   -61,
       9,    39,    38,    37,    33,    41,    40,   -61,   -61,    32,
     -61,   -61,   -61,     8,   -61,    10,   -61,    49,   -61,    42,
      58,    47,   -14,    43,    53,    54,    55,    44,    51,    48,
      45,   -14,   -14,   -61,   -61,    50,    22,   -61,    52,    35,
      35,    60,    61,    -9,    62,    56,   -61,   -61,   -61,    26,
     -14,   -14,    63,   -61,   -61,    57,   -61,    65,    64,   -61,
     -61,   -61,    32,    66,   -14,   -14,   -61,   -61,   -14,    -7,
     -61,    67,   -61,    22,    22,    59,   -61,   -61,   -61,   -61,
     -61,   -61,   -61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -61,   -61,    27,    68,   -61,   -61,   -21,    15,   -61,    17,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -30,
     -61,   -61,   -19,   -61,   -44,   -60,   -61
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -42
static const yytype_int8 yytable[] =
{
      41,    76,    77,    60,    35,    22,    61,    62,    89,    50,
     106,     1,     2,     3,    23,    26,    27,    63,    64,    36,
      96,    97,    90,    91,   107,   108,   -41,    52,     6,     7,
       8,    19,    10,    20,     9,    53,    12,    13,    26,    27,
      11,    54,    55,    21,    80,    81,    94,    95,    83,    84,
     103,   104,    33,    42,    37,    43,    45,    38,    47,    46,
      40,    35,   101,    57,    58,    69,    70,    71,    72,    73,
      56,    49,    75,    74,    68,    92,    78,    85,    87,   105,
      82,   110,    98,    99,    36,   111,    86,    93,     0,   100,
       0,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,     0,    48
};

static const yytype_int8 yycheck[] =
{
      30,    61,    62,    17,    12,     8,    20,    21,    17,    39,
      17,     9,    10,    11,    17,     6,     7,    31,    32,    27,
      80,    81,    31,    32,    31,    32,    17,    19,     1,     2,
       3,    14,     3,    16,     0,    27,    15,    16,     6,     7,
      17,    31,    32,    13,    22,    23,    20,    21,    69,    70,
      94,    95,    17,    14,    26,    17,    19,    26,    17,    26,
      24,    12,    92,     5,    17,    12,    12,    12,    24,    18,
      28,    31,    27,    25,    31,    13,    26,    17,    17,    98,
      28,    14,    19,    18,    27,    26,    71,    31,    -1,    25,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    11,    35,    36,    36,    36,    36,     0,
       3,    17,    15,    16,    38,    39,    42,    43,    60,    43,
      43,    13,     8,    17,    37,    41,     6,     7,    44,    48,
      52,    53,    55,    17,    40,    12,    27,    26,    26,    49,
      24,    53,    14,    17,    54,    19,    26,    17,    37,    31,
      53,    45,    19,    27,    31,    32,    28,     5,    17,    47,
      17,    20,    21,    31,    32,    56,    58,    59,    31,    12,
      12,    12,    24,    18,    25,    27,    59,    59,    26,    57,
      22,    23,    28,    40,    40,    17,    41,    17,    51,    17,
      31,    32,    13,    31,    20,    21,    59,    59,    19,    18,
      25,    53,    28,    58,    58,    56,    17,    31,    32,    50,
      14,    26,    46
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 67 "Syntaxe.y"
    {printf("\n***********************************Programme syntaxiquement correct*********************************\n");YYACCEPT;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 74 "Syntaxe.y"
    {
                          if ( doubleDeclaration((yyvsp[(1) - (3)].str))==1){insereType((yyvsp[(1) - (3)].str),sauvType);insereTaille((yyvsp[(1) - (3)].str),1);}
                          else {printf("\nErreur Sémantique: double declation de %s, a la ligne %d\n", (yyvsp[(1) - (3)].str), nbrligne);};}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 77 "Syntaxe.y"
    {
		                  if ( doubleDeclaration((yyvsp[(1) - (1)].str))==1){insereType((yyvsp[(1) - (1)].str),sauvType);insereTaille((yyvsp[(1) - (1)].str),1);}
                          else {printf("\nErreur Sémantique: double declation de %s, a la ligne %d\n", (yyvsp[(1) - (1)].str), nbrligne);};}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 86 "Syntaxe.y"
    {
		                  if ( doubleDeclaration((yyvsp[(1) - (5)].str))==1){if(strcmp(sauvType,"Integer")==0){insereVal((yyvsp[(1) - (5)].str),(yyvsp[(3) - (5)].entier));insertConst((yyvsp[(1) - (5)].str));insereType((yyvsp[(1) - (5)].str),sauvType);insereTaille((yyvsp[(1) - (5)].str),1);}else{printf("\nErreur Sémantique: Incompatibilite de type de %s, a la ligne %d colonne %d\n", (yyvsp[(1) - (5)].str), nbrligne,nbrcolonne);}}
                          else {printf("\nErreur Sémantique: double declation de %s, a la ligne %d colonne %d\n", (yyvsp[(1) - (5)].str), nbrligne,nbrcolonne);};}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 89 "Syntaxe.y"
    {
		                  if ( doubleDeclaration((yyvsp[(1) - (5)].str))==1){if(strcmp(sauvType,"Real")==0){insereVal((yyvsp[(1) - (5)].str),(yyvsp[(3) - (5)].reel));insertConst((yyvsp[(1) - (5)].str));insereType((yyvsp[(1) - (5)].str),sauvType);insereTaille((yyvsp[(1) - (5)].str),1);}else{printf("\nErreur Sémantique: Incompatibilite de type de %s, a la ligne %d colonne %d\n", (yyvsp[(1) - (5)].str), nbrligne,nbrcolonne);}}
                          else {printf("\nErreur Sémantique: double declation de %s, a la ligne %d colonne %d\n", (yyvsp[(1) - (5)].str), nbrligne,nbrcolonne);};}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 92 "Syntaxe.y"
    {
		                  if ( doubleDeclaration((yyvsp[(1) - (3)].str))==1){if(strcmp(sauvType,"Integer")==0){insereVal((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].entier));insertConst((yyvsp[(1) - (3)].str));insereType((yyvsp[(1) - (3)].str),sauvType);insereTaille((yyvsp[(1) - (3)].str),1);}else{printf("\nErreur Sémantique: Incompatibilite de type de %s,a la ligne %d colonne %d\n", (yyvsp[(1) - (3)].str), nbrligne,nbrcolonne);}}
                          else {printf("\nErreur Sémantique: double declation de %s,a la ligne %d colonne %d\n", (yyvsp[(1) - (3)].str), nbrligne,nbrcolonne);};}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 95 "Syntaxe.y"
    {
		                  if ( doubleDeclaration((yyvsp[(1) - (3)].str))==1){if(strcmp(sauvType,"Real")==0){insereVal((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].reel));insertConst((yyvsp[(1) - (3)].str));insereType((yyvsp[(1) - (3)].str),sauvType);insereTaille((yyvsp[(1) - (3)].str),1);}else{printf("\nErreur Sémantique: Incompatibilite de type de %s, a la ligne %d colonne %d\n", (yyvsp[(1) - (3)].str), nbrligne,nbrcolonne);}}
                          else {printf("\nErreur Sémantique: double declation de %s, a la ligne %d colonne %d\n", (yyvsp[(1) - (3)].str), nbrligne,nbrcolonne);};}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 100 "Syntaxe.y"
    {
                 if(found("#TAB")==-1){printf("\nErreur Semantique: la bibliotheque #TAB est manquante , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}else{
			   if((yyvsp[(3) - (6)].entier)>50){printf("\nErreur Semantique: la bibliotheque taille de tableau depasse lespace attribue , a la ligne %d colonne %d\n", (yyvsp[(1) - (6)].str), nbrligne,nbrcolonne);}else{
			     if((yyvsp[(3) - (6)].entier) <=0){printf("\nErreur Semantique: taille de %s est negative ou nulle , a la ligne %d colonne %d\n", (yyvsp[(1) - (6)].str), nbrligne,nbrcolonne);}
				 else{ insereTaille((yyvsp[(1) - (6)].str),(yyvsp[(3) - (6)].entier));inserePos((yyvsp[(1) - (6)].str));}
			    if ( doubleDeclaration((yyvsp[(1) - (6)].str))==1){insereType((yyvsp[(1) - (6)].str),sauvType);sprintf(tmp10,"L%d",l);sprintf(tmp9,"%d",(yyvsp[(3) - (6)].entier));quadr("BOUNDS",tmp10,tmp9,"");quadr("ADEC",(yyvsp[(1) - (6)].str),"","");
                         } else {printf("\nErreur Semantique: double declation de %s, a la ligne %d colonne %d\n", (yyvsp[(1) - (6)].str), nbrligne,nbrcolonne);}
						 }};}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 109 "Syntaxe.y"
    {
               if(found("#TAB")==-1){printf("\nErreur Semantique: la bibliotheque #TAB est manquante ,a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}else{
			   if((yyvsp[(3) - (4)].entier)>50){printf("\nErreur Semantique: la bibliotheque taille de tableau depasse lespace attribue , a la ligne %d colonne %d\n", (yyvsp[(1) - (4)].str), nbrligne,nbrcolonne);}else{
			     if((yyvsp[(3) - (4)].entier) <=0){printf("\nErreur Semantique: taille de %s est negative ou nulle , a la ligne %d colonne %d\n", (yyvsp[(1) - (4)].str), nbrligne,nbrcolonne);}
				 else{ insereTaille((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier));inserePos((yyvsp[(1) - (4)].str));}
			    if ( doubleDeclaration((yyvsp[(1) - (4)].str))==1){insereType((yyvsp[(1) - (4)].str),sauvType);insereType((yyvsp[(1) - (4)].str),sauvType);sprintf(tmp10,"L%d",l);sprintf(tmp9,"%d",(yyvsp[(3) - (4)].entier));quadr("BOUNDS",tmp10,tmp9,"");quadr("ADEC",(yyvsp[(1) - (4)].str),"","");
                         } else {printf("\nErreur Semantique: double declation de %s, a la ligne %d colonne %d\n", (yyvsp[(1) - (4)].str), nbrligne,nbrcolonne);}
						 }};}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 132 "Syntaxe.y"
    { if(found("#BOUCLE")==-1){printf("\nErreur Semantique: la bibliotheque Tab est manquante , a la ligne %d colonne %d\n",  nbrligne,nbrcolonne);}
				;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 135 "Syntaxe.y"
    {addr_while[dixit_while]=taille+1;dixit_while++;;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 137 "Syntaxe.y"
    {sprintf(tmp,"Quadr N°%d",taille+2);ajour_quad(addr_while[dixit_while-1],2,tmp);sprintf(tmp,"Quadr N°%d",addr_while[dixit_while-1]);dixit_while--;quadr("BR",tmp,"","");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 139 "Syntaxe.y"
    {if(strcmp((yyvsp[(2) - (3)].str),"==")==0){strcpy(tmp,"BNE");}if (strcmp((yyvsp[(2) - (3)].str),"<")==0) strcpy(tmp,"BGE");if (strcmp((yyvsp[(2) - (3)].str),">")==0) strcpy(tmp,"BLE");if (strcmp((yyvsp[(2) - (3)].str),"<=")==0) strcpy(tmp,"BG");if (strcmp((yyvsp[(2) - (3)].str),">=")==0) strcpy(tmp,"BL");if (strcmp((yyvsp[(2) - (3)].str),"!=")==0) strcpy(tmp,"BE"); quadr(tmp,"JUMP",(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 140 "Syntaxe.y"
    {if(strcmp((yyvsp[(2) - (3)].str),"==")==0){strcpy(tmp,"BNE");}if (strcmp((yyvsp[(2) - (3)].str),"<")==0) strcpy(tmp,"BGE");if (strcmp((yyvsp[(2) - (3)].str),">")==0) strcpy(tmp,"BLE");if (strcmp((yyvsp[(2) - (3)].str),"<=")==0) strcpy(tmp,"BG");if (strcmp((yyvsp[(2) - (3)].str),">=")==0) strcpy(tmp,"BL");if (strcmp((yyvsp[(2) - (3)].str),"!=")==0) strcpy(tmp,"BE"); sprintf(tmp7,"%d",(yyvsp[(3) - (3)].entier));quadr(tmp,"JUMP",(yyvsp[(1) - (3)].str),tmp7);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 141 "Syntaxe.y"
    {if(strcmp((yyvsp[(2) - (3)].str),"==")==0){strcpy(tmp,"BNE");}if (strcmp((yyvsp[(2) - (3)].str),"<")==0) strcpy(tmp,"BGE");if (strcmp((yyvsp[(2) - (3)].str),">")==0) strcpy(tmp,"BLE");if (strcmp((yyvsp[(2) - (3)].str),"<=")==0) strcpy(tmp,"BG");if (strcmp((yyvsp[(2) - (3)].str),">=")==0) strcpy(tmp,"BL");if (strcmp((yyvsp[(2) - (3)].str),"!=")==0) strcpy(tmp,"BE");sprintf(tmp7,"%f",(yyvsp[(3) - (3)].reel));quadr(tmp,"JUMP",(yyvsp[(1) - (3)].str),tmp7);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 148 "Syntaxe.y"
    {quadr("BR","","","");addr_if[dixit_if]=taille+1;dixit_if++;;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 150 "Syntaxe.y"
    {sprintf(tmp8,"Quadr N°%d",addr_if[dixit_if-1]);ajour_quad(taille,2,tmp8);sprintf(tmp8,"Quadr N°%d",taille);ajour_quad(addr_if[dixit_if-1]-1,2,tmp8);dixit_if--;;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 152 "Syntaxe.y"
    {if(strcmp((yyvsp[(2) - (3)].str),"==")==0){strcpy(tmp,"BE");}if (strcmp((yyvsp[(2) - (3)].str),"<")==0) strcpy(tmp,"BL");if (strcmp((yyvsp[(2) - (3)].str),">")==0) strcpy(tmp,"BG");if (strcmp((yyvsp[(2) - (3)].str),"<=")==0) strcpy(tmp,"BLE");if (strcmp((yyvsp[(2) - (3)].str),">=")==0) strcpy(tmp,"BGE");if (strcmp((yyvsp[(2) - (3)].str),"!=")==0) strcpy(tmp,"BNE");sprintf(tmp9,"Quadr N°%d",taille+3);quadr("BR",tmp9,"",""); ;quadr(tmp,"JUMP",(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 153 "Syntaxe.y"
    {if(strcmp((yyvsp[(2) - (3)].str),"==")==0){strcpy(tmp,"BE");}if (strcmp((yyvsp[(2) - (3)].str),"<")==0) strcpy(tmp,"BL");if (strcmp((yyvsp[(2) - (3)].str),">")==0) strcpy(tmp,"BG");if (strcmp((yyvsp[(2) - (3)].str),"<=")==0) strcpy(tmp,"BLE");if (strcmp((yyvsp[(2) - (3)].str),">=")==0) strcpy(tmp,"BGE");if (strcmp((yyvsp[(2) - (3)].str),"!=")==0) strcpy(tmp,"BNE"); sprintf(tmp9,"Quadr N°%d",taille+3);quadr("BR",tmp9,"","");sprintf(tmp7,"%d",(yyvsp[(3) - (3)].entier));quadr(tmp,"JUMP",(yyvsp[(1) - (3)].str),tmp7);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 154 "Syntaxe.y"
    {if(strcmp((yyvsp[(2) - (3)].str),"==")==0){strcpy(tmp,"BE");}if (strcmp((yyvsp[(2) - (3)].str),"<")==0) strcpy(tmp,"BL");if (strcmp((yyvsp[(2) - (3)].str),">")==0) strcpy(tmp,"BG");if (strcmp((yyvsp[(2) - (3)].str),"<=")==0) strcpy(tmp,"BLE");if (strcmp((yyvsp[(2) - (3)].str),">=")==0) strcpy(tmp,"BGE");if (strcmp((yyvsp[(2) - (3)].str),"!=")==0) strcpy(tmp,"BNE");sprintf(tmp9,"Quadr N°%d",taille+3);quadr("BR",tmp9,"","");sprintf(tmp7,"%f",(yyvsp[(3) - (3)].reel));quadr(tmp,"JUMP",(yyvsp[(1) - (3)].str),tmp7);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 168 "Syntaxe.y"
    {if(doubleDeclaration((yyvsp[(1) - (4)].str))==1){printf("\nErreur Semantique: %s n'est pas declare , a la ligne %d colonne %d\n",(yyvsp[(1) - (4)].str), nbrligne,nbrcolonne );}
		 else{if(retounerConst((yyvsp[(1) - (4)].str))==1){printf("\nErreur Semantique: la constante %s ne peut etre reinitialise , a la ligne %d colonne %d\n",(yyvsp[(1) - (4)].str), nbrligne,nbrcolonne );}
		 else{if(strcmp(retournerType((yyvsp[(1) - (4)].str)),SauvTypeExpress)!=0){printf("\nErreur Semantique: incompatibilite de type , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		 else{insereVal((yyvsp[(1) - (4)].str),sauvExp);quadr(":=",tmp3,"",(yyvsp[(1) - (4)].str));}}};}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 173 "Syntaxe.y"
    {if(doubleDeclaration((yyvsp[(1) - (7)].str))==1){printf("\nErreur Semantique: %s n'est pas declare , a la ligne %d colonne %d\n",(yyvsp[(1) - (7)].str), nbrligne,nbrcolonne );}
		 else{if(retournerTaille((yyvsp[(1) - (7)].str))<(yyvsp[(3) - (7)].entier)){printf("\nErreur Semantique: taille de %s < %d , a la ligne %d colonne %d\n",(yyvsp[(1) - (7)].str),(yyvsp[(3) - (7)].entier), nbrligne,nbrcolonne );}
		 else{if(strcmp(retournerType((yyvsp[(1) - (7)].str)),SauvTypeExpress)!=0){printf("\nErreur Semantique: incompatibilite de type , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		 else{insereValTab((yyvsp[(1) - (7)].str),(yyvsp[(3) - (7)].entier),sauvExp);sprintf(tmp10,"%s[%d]",(yyvsp[(1) - (7)].str),(yyvsp[(3) - (7)].entier));quadr(":=",tmp3,"",tmp10);}}};}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 178 "Syntaxe.y"
    {op_count=taille+1;;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 180 "Syntaxe.y"
    { sauvExp = sauvProd;strcpy(tmp4,tmp2);strcpy(SauvTypeExpress,SauvTypeProd);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 182 "Syntaxe.y"
    {
		if(found("#Calcul")==-1){printf("\nErreur Semantique: la bibliotheque #Calcul est manquante , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{ if (strcmp(SauvTypeExpress,SauvTypeProd)!=0){printf("\nErreur Semantique: Incompatibilite de type , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{t++; sprintf(tmp3,"T%d",t);quadr("+",tmp5,tmp2,tmp3);sauvProd = sauvProd / sauvTerm; strcpy(tmp2,tmp3); sauvExp = sauvExp + sauvProd;strcpy(tmp2,tmp3);}};}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 186 "Syntaxe.y"
    {
		if(found("#Calcul")==-1){printf("\nErreur Semantique: la bibliotheque #Calcul est manquante ,a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{ if(strcmp(SauvTypeExpress,SauvTypeProd)!=0){printf("\nErreur Semantique: Incompatibilite de type , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{t++; sprintf(tmp3,"T%d",t);quadr("-",tmp5,tmp2,tmp3);sauvProd = sauvProd / sauvTerm; strcpy(tmp2,tmp3);  sauvExp = sauvExp - sauvProd;strcpy(tmp2,tmp3);}};}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 193 "Syntaxe.y"
    {strcpy(tmp4,tmp);strcpy(tmp5,tmp3);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 195 "Syntaxe.y"
    { sauvProd = sauvTerm; strcpy(tmp2,tmp); strcpy(tmp3,tmp);strcpy(SauvTypeProd,SauvTypeTerm);;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 197 "Syntaxe.y"
    {
		if(found("#Calcul")==-1){printf("\nErreur Semantique: la bibliotheque #Calcul est manquante , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{if(strcmp(SauvTypeProd,SauvTypeTerm)!=0){printf("\nErreur Semantique: Incompatibilite de type , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{t++;sprintf(tmp3,"T%d",t);quadr("*",tmp2,tmp,tmp3);  sauvProd = sauvProd * sauvTerm;strcpy(tmp2,tmp3);}};}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 202 "Syntaxe.y"
    {
		if(found("#Calcul")==-1){printf("\nErreur Semantique: la bibliotheque #Calcul est manquante , a la ligne %d colonne %d\n",  nbrligne,nbrcolonne);}
		else{if(strcmp(SauvTypeProd,SauvTypeTerm)!=0){printf("\nErreur Semantique: Incompatibilite de type , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{if(sauvTerm==0){printf("\nErreur Semantique: Division par 0 , a la ligne %d colonne %d\n",  nbrligne,nbrcolonne);}
		else{t++; sprintf(tmp3,"T%d",t);quadr("/",tmp2,tmp,tmp3);sauvProd = sauvProd / sauvTerm; strcpy(tmp2,tmp3);}}};}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 213 "Syntaxe.y"
    {sauvTerm=-1*sauvTerm; sprintf(tmp,"%d",sauvTerm);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 215 "Syntaxe.y"
    {if(doubleDeclaration((yyvsp[(1) - (1)].str))==1){printf("\nErreur Semantique: %s n'est pas declare , a la ligne %d colonne %d\n",(yyvsp[(1) - (1)].str), nbrligne,nbrcolonne );}
		 else{if(Init((yyvsp[(1) - (1)].str))==0){printf("\nErreur Semantique: %s n'est pas initialise , a la ligne %d colonne %d\n",(yyvsp[(1) - (1)].str), nbrligne,nbrcolonne );}
		 else{strcpy(SauvTypeTerm,retournerType((yyvsp[(1) - (1)].str))); sauvTerm=retournerVal((yyvsp[(1) - (1)].str));sprintf(tmp,"%s",(yyvsp[(1) - (1)].str));}};}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 218 "Syntaxe.y"
    {strcpy(SauvTypeTerm,"Integer");sauvTerm=(yyvsp[(1) - (1)].entier);sprintf(tmp,"%d",(yyvsp[(1) - (1)].entier));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 219 "Syntaxe.y"
    {strcpy(SauvTypeTerm,"Real");sauvTerm=(yyvsp[(1) - (1)].reel);sprintf(tmp,"%f",(yyvsp[(1) - (1)].reel));;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 220 "Syntaxe.y"
    {if(doubleDeclaration((yyvsp[(1) - (4)].str))==1){printf("\nErreur Semantique: %s n'est pas declare , a la ligne %d colonne %d\n",(yyvsp[(1) - (4)].str), nbrligne,nbrcolonne );}
		 else{if(retournerTaille((yyvsp[(1) - (4)].str))<(yyvsp[(3) - (4)].entier)){printf("\nErreur Semantique: taille de %s < %d , a la ligne %d colonne %d\n",(yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier), nbrligne,nbrcolonne );}
		 else{if(InitTab((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier))!=1){printf("\nErreur Semantique: %s[%d] n'est pas initialise , a la ligne %d colonne %d\n",(yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier), nbrligne,nbrcolonne );}
		 else{strcpy(SauvTypeTerm,retournerType((yyvsp[(1) - (4)].str)));sauvTerm=retournerValTab((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier));sprintf(tmp,"%s[%d]",(yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier));}}};}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 229 "Syntaxe.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].str));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 230 "Syntaxe.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].str));;}
    break;



/* Line 1455 of yacc.c  */
#line 1805 "Syntaxe.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 234 "Syntaxe.y"



int main()
{

 yyin = fopen("entree.txt", "r");
 yyparse();
 show();
/*
	quadr("A1","B1","C1","D1");
		quadr("A2","B2","C2","D2");
			quadr("A3","B3","C3","D3");
				quadr("A4","B4","C4","D4");
				ajour_quad(2,2,"CHANGED SUCCESSFULLY");*/

 afficherQuadruplets(&pileQuads);
 optimisation();

}

yywrap()
{}

