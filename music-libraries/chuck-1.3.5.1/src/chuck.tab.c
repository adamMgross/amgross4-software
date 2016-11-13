/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     STRING_LIT = 259,
     CHAR_LIT = 260,
     NUM = 261,
     FLOAT = 262,
     POUND = 263,
     COMMA = 264,
     COLON = 265,
     SEMICOLON = 266,
     LPAREN = 267,
     RPAREN = 268,
     LBRACK = 269,
     RBRACK = 270,
     LBRACE = 271,
     RBRACE = 272,
     DOT = 273,
     PLUS = 274,
     MINUS = 275,
     TIMES = 276,
     DIVIDE = 277,
     PERCENT = 278,
     EQ = 279,
     NEQ = 280,
     LT = 281,
     LE = 282,
     GT = 283,
     GE = 284,
     AND = 285,
     OR = 286,
     ASSIGN = 287,
     IF = 288,
     THEN = 289,
     ELSE = 290,
     WHILE = 291,
     FOR = 292,
     DO = 293,
     LOOP = 294,
     BREAK = 295,
     CONTINUE = 296,
     NULL_TOK = 297,
     FUNCTION = 298,
     RETURN = 299,
     QUESTION = 300,
     EXCLAMATION = 301,
     S_OR = 302,
     S_AND = 303,
     S_XOR = 304,
     PLUSPLUS = 305,
     MINUSMINUS = 306,
     DOLLAR = 307,
     POUNDPAREN = 308,
     PERCENTPAREN = 309,
     SIMULT = 310,
     PATTERN = 311,
     CODE = 312,
     TRANSPORT = 313,
     HOST = 314,
     TIME = 315,
     WHENEVER = 316,
     NEXT = 317,
     UNTIL = 318,
     EVERY = 319,
     BEFORE = 320,
     AFTER = 321,
     AT = 322,
     AT_SYM = 323,
     ATAT_SYM = 324,
     NEW = 325,
     SIZEOF = 326,
     TYPEOF = 327,
     SAME = 328,
     PLUS_CHUCK = 329,
     MINUS_CHUCK = 330,
     TIMES_CHUCK = 331,
     DIVIDE_CHUCK = 332,
     S_AND_CHUCK = 333,
     S_OR_CHUCK = 334,
     S_XOR_CHUCK = 335,
     SHIFT_RIGHT_CHUCK = 336,
     SHIFT_LEFT_CHUCK = 337,
     PERCENT_CHUCK = 338,
     SHIFT_RIGHT = 339,
     SHIFT_LEFT = 340,
     TILDA = 341,
     CHUCK = 342,
     COLONCOLON = 343,
     S_CHUCK = 344,
     AT_CHUCK = 345,
     LEFT_S_CHUCK = 346,
     UNCHUCK = 347,
     UPCHUCK = 348,
     CLASS = 349,
     INTERFACE = 350,
     EXTENDS = 351,
     IMPLEMENTS = 352,
     PUBLIC = 353,
     PROTECTED = 354,
     PRIVATE = 355,
     STATIC = 356,
     ABSTRACT = 357,
     CONST = 358,
     SPORK = 359,
     ARROW_RIGHT = 360,
     ARROW_LEFT = 361,
     L_HACK = 362,
     R_HACK = 363
   };
#endif
/* Tokens.  */
#define ID 258
#define STRING_LIT 259
#define CHAR_LIT 260
#define NUM 261
#define FLOAT 262
#define POUND 263
#define COMMA 264
#define COLON 265
#define SEMICOLON 266
#define LPAREN 267
#define RPAREN 268
#define LBRACK 269
#define RBRACK 270
#define LBRACE 271
#define RBRACE 272
#define DOT 273
#define PLUS 274
#define MINUS 275
#define TIMES 276
#define DIVIDE 277
#define PERCENT 278
#define EQ 279
#define NEQ 280
#define LT 281
#define LE 282
#define GT 283
#define GE 284
#define AND 285
#define OR 286
#define ASSIGN 287
#define IF 288
#define THEN 289
#define ELSE 290
#define WHILE 291
#define FOR 292
#define DO 293
#define LOOP 294
#define BREAK 295
#define CONTINUE 296
#define NULL_TOK 297
#define FUNCTION 298
#define RETURN 299
#define QUESTION 300
#define EXCLAMATION 301
#define S_OR 302
#define S_AND 303
#define S_XOR 304
#define PLUSPLUS 305
#define MINUSMINUS 306
#define DOLLAR 307
#define POUNDPAREN 308
#define PERCENTPAREN 309
#define SIMULT 310
#define PATTERN 311
#define CODE 312
#define TRANSPORT 313
#define HOST 314
#define TIME 315
#define WHENEVER 316
#define NEXT 317
#define UNTIL 318
#define EVERY 319
#define BEFORE 320
#define AFTER 321
#define AT 322
#define AT_SYM 323
#define ATAT_SYM 324
#define NEW 325
#define SIZEOF 326
#define TYPEOF 327
#define SAME 328
#define PLUS_CHUCK 329
#define MINUS_CHUCK 330
#define TIMES_CHUCK 331
#define DIVIDE_CHUCK 332
#define S_AND_CHUCK 333
#define S_OR_CHUCK 334
#define S_XOR_CHUCK 335
#define SHIFT_RIGHT_CHUCK 336
#define SHIFT_LEFT_CHUCK 337
#define PERCENT_CHUCK 338
#define SHIFT_RIGHT 339
#define SHIFT_LEFT 340
#define TILDA 341
#define CHUCK 342
#define COLONCOLON 343
#define S_CHUCK 344
#define AT_CHUCK 345
#define LEFT_S_CHUCK 346
#define UNCHUCK 347
#define UPCHUCK 348
#define CLASS 349
#define INTERFACE 350
#define EXTENDS 351
#define IMPLEMENTS 352
#define PUBLIC 353
#define PROTECTED 354
#define PRIVATE 355
#define STATIC 356
#define ABSTRACT 357
#define CONST 358
#define SPORK 359
#define ARROW_RIGHT 360
#define ARROW_LEFT 361
#define L_HACK 362
#define R_HACK 363




/* Copy the first part of user declarations.  */
#line 1 "chuck.y"


/*----------------------------------------------------------------------------
    ChucK Concurrent, On-the-fly Audio Programming Language
      Compiler and Virtual Machine

    Copyright (c) 2004 Ge Wang and Perry R. Cook.  All rights reserved.
      http://chuck.cs.princeton.edu/
      http://soundlab.cs.princeton.edu/

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
    U.S.A.
-----------------------------------------------------------------------------*/

//-----------------------------------------------------------------------------
// file: chuck.tab.c
// desc: chuck parser
//
// author: Ge Wang (gewang@cs.princeton.edu) - generated by yacc
//         Perry R. Cook (prc@cs.princeton.edu)
//
// based in part on the ansi C grammar by Jeff Lee, maintained by Jutta Degener
//
// date: Summer 2002
//-----------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "chuck_utils.h"
#include "chuck_errmsg.h"
#include "chuck_absyn.h"

// function
int yylex( void );

void yyerror( char *s )
{
    EM_error( EM_tokPos, "%s", s );
}

a_Program g_program = NULL;



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 59 "chuck.y"
{
    int pos;
    int ival;
    double fval;
    c_str sval;
    
    a_Program program;
    a_Section program_section;
    a_Stmt_List stmt_list;
    a_Class_Def class_def;
    a_Class_Ext class_ext;
    a_Class_Body class_body;
    a_Stmt stmt;
    a_Exp exp;
    a_Func_Def func_def;
    a_Var_Decl_List var_decl_list;
    a_Var_Decl var_decl;
    a_Type_Decl type_decl;
    a_Arg_List arg_list;
    a_Id_List id_list;
    a_Array_Sub array_sub;
    a_Complex complex_exp;
    a_Polar polar_exp;
}
/* Line 193 of yacc.c.  */
#line 393 "chuck.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 406 "chuck.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  115
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1134

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNRULES -- Number of states.  */
#define YYNSTATES  309

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   363

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    21,    29,
      36,    44,    47,    52,    55,    60,    62,    63,    65,    68,
      70,    72,    74,    77,    79,    83,    85,    89,    98,   106,
     115,   123,   125,   127,   128,   130,   132,   134,   136,   138,
     140,   141,   143,   146,   150,   155,   157,   159,   161,   164,
     167,   172,   174,   177,   179,   181,   183,   185,   187,   190,
     194,   197,   200,   206,   214,   220,   228,   235,   243,   249,
     257,   263,   266,   270,   272,   275,   277,   281,   283,   287,
     289,   293,   297,   302,   305,   309,   311,   314,   318,   321,
     325,   327,   331,   333,   336,   339,   343,   347,   349,   351,
     353,   355,   357,   359,   361,   363,   365,   367,   369,   371,
     373,   375,   377,   379,   381,   387,   389,   393,   395,   399,
     401,   405,   407,   411,   413,   417,   419,   423,   427,   429,
     433,   437,   441,   445,   447,   451,   455,   457,   461,   465,
     467,   471,   475,   479,   481,   485,   487,   491,   493,   496,
     499,   502,   505,   508,   511,   515,   517,   519,   521,   523,
     525,   528,   530,   534,   536,   539,   543,   548,   552,   555,
     558,   560,   562,   564,   566,   568,   570,   572,   574,   578,
     582
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     110,     0,    -1,   111,    -1,   111,   110,    -1,   129,    -1,
     120,    -1,   112,    -1,   121,    94,   118,    16,   114,    17,
      -1,   121,    94,   118,   113,    16,   114,    17,    -1,   121,
      95,   118,    16,   114,    17,    -1,   121,    95,   118,   117,
      16,   114,    17,    -1,    97,   118,    -1,    97,   118,    96,
     119,    -1,    96,   119,    -1,    96,   119,    97,   118,    -1,
     115,    -1,    -1,   116,    -1,   116,   115,    -1,   129,    -1,
     120,    -1,   112,    -1,    96,   118,    -1,     3,    -1,     3,
       9,   118,    -1,     3,    -1,     3,    18,   119,    -1,   122,
     123,   127,     3,    12,   128,    13,   134,    -1,   122,   123,
     127,     3,    12,    13,   134,    -1,   122,   123,   127,     3,
      12,   128,    13,    11,    -1,   122,   123,   127,     3,    12,
      13,    11,    -1,    98,    -1,   100,    -1,    -1,    43,    -1,
      98,    -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,
      -1,     3,    -1,     3,    68,    -1,    26,   119,    28,    -1,
      26,   119,    28,    68,    -1,   124,    -1,   125,    -1,   126,
      -1,   126,   140,    -1,   126,   143,    -1,   126,   143,     9,
     128,    -1,   130,    -1,   130,   129,    -1,   135,    -1,   133,
      -1,   132,    -1,   131,    -1,   134,    -1,    44,    11,    -1,
      44,   136,    11,    -1,    40,    11,    -1,    41,    11,    -1,
      33,    12,   136,    13,   130,    -1,    33,    12,   136,    13,
     130,    35,   130,    -1,    36,    12,   136,    13,   130,    -1,
      38,   130,    36,    12,   136,    13,    11,    -1,    37,    12,
     135,   135,    13,   130,    -1,    37,    12,   135,   135,   136,
      13,   130,    -1,    63,    12,   136,    13,   130,    -1,    38,
     130,    63,    12,   136,    13,    11,    -1,    39,    12,   136,
      13,   130,    -1,    16,    17,    -1,    16,   129,    17,    -1,
      11,    -1,   136,    11,    -1,   137,    -1,   137,     9,   136,
      -1,   138,    -1,   137,   146,   138,    -1,   141,    -1,   138,
     147,   141,    -1,    14,   136,    15,    -1,    14,   136,    15,
     139,    -1,    14,    15,    -1,   140,    14,    15,    -1,   148,
      -1,   126,   142,    -1,   101,   126,   142,    -1,    73,   142,
      -1,   101,    73,   142,    -1,   143,    -1,   143,     9,   142,
      -1,     3,    -1,     3,   139,    -1,     3,   140,    -1,    53,
     136,    13,    -1,    54,   136,    13,    -1,    87,    -1,    90,
      -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,    81,
      -1,    82,    -1,    83,    -1,    92,    -1,    93,    -1,    78,
      -1,    79,    -1,    80,    -1,   106,    -1,   105,    -1,   149,
      -1,   149,    45,   136,    10,   148,    -1,   150,    -1,   149,
      31,   150,    -1,   151,    -1,   150,    30,   151,    -1,   152,
      -1,   151,    47,   152,    -1,   153,    -1,   152,    49,   153,
      -1,   154,    -1,   153,    48,   154,    -1,   155,    -1,   154,
      24,   155,    -1,   154,    25,   155,    -1,   156,    -1,   155,
      26,   156,    -1,   155,    28,   156,    -1,   155,    27,   156,
      -1,   155,    29,   156,    -1,   157,    -1,   156,    85,   157,
      -1,   156,    84,   157,    -1,   158,    -1,   157,    19,   158,
      -1,   157,    20,   158,    -1,   159,    -1,   158,    21,   159,
      -1,   158,    22,   159,    -1,   158,    23,   159,    -1,   160,
      -1,   159,    86,   160,    -1,   161,    -1,   160,    52,   126,
      -1,   163,    -1,    50,   161,    -1,    51,   161,    -1,   162,
     161,    -1,    72,   161,    -1,    71,   161,    -1,    70,   126,
      -1,    70,   126,   139,    -1,    19,    -1,    20,    -1,    86,
      -1,    46,    -1,    21,    -1,   104,    86,    -1,   164,    -1,
     163,    88,   164,    -1,   165,    -1,   164,   139,    -1,   164,
      12,    13,    -1,   164,    12,   136,    13,    -1,   164,    18,
       3,    -1,   164,    50,    -1,   164,    51,    -1,     3,    -1,
       6,    -1,     7,    -1,     4,    -1,     5,    -1,   139,    -1,
     144,    -1,   145,    -1,   107,   136,   108,    -1,    12,   136,
      13,    -1,    12,    13,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   178,   178,   179,   183,   184,   185,   189,   191,   193,
     195,   200,   201,   202,   203,   207,   208,   212,   213,   218,
     219,   220,   224,   228,   229,   233,   234,   238,   240,   242,
     244,   249,   250,   251,   255,   256,   257,   258,   262,   263,
     264,   268,   269,   273,   274,   283,   284,   289,   290,   294,
     295,   299,   300,   304,   305,   306,   307,   309,   313,   314,
     315,   316,   320,   322,   327,   329,   331,   333,   335,   337,
     339,   344,   345,   349,   350,   354,   355,   359,   360,   365,
     366,   371,   372,   377,   378,   382,   383,   384,   385,   386,
     390,   391,   395,   396,   397,   401,   406,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   428,   429,   433,   434,   439,   440,   445,   446,   451,
     452,   457,   458,   463,   464,   469,   470,   472,   477,   478,
     480,   482,   484,   489,   490,   492,   497,   498,   500,   505,
     506,   508,   510,   515,   516,   521,   522,   527,   528,   530,
     532,   534,   536,   538,   540,   547,   548,   549,   550,   551,
     552,   557,   558,   563,   564,   566,   568,   570,   572,   574,
     580,   581,   582,   583,   584,   585,   586,   587,   588,   589,
     590
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STRING_LIT", "CHAR_LIT", "NUM",
  "FLOAT", "POUND", "COMMA", "COLON", "SEMICOLON", "LPAREN", "RPAREN",
  "LBRACK", "RBRACK", "LBRACE", "RBRACE", "DOT", "PLUS", "MINUS", "TIMES",
  "DIVIDE", "PERCENT", "EQ", "NEQ", "LT", "LE", "GT", "GE", "AND", "OR",
  "ASSIGN", "IF", "THEN", "ELSE", "WHILE", "FOR", "DO", "LOOP", "BREAK",
  "CONTINUE", "NULL_TOK", "FUNCTION", "RETURN", "QUESTION", "EXCLAMATION",
  "S_OR", "S_AND", "S_XOR", "PLUSPLUS", "MINUSMINUS", "DOLLAR",
  "POUNDPAREN", "PERCENTPAREN", "SIMULT", "PATTERN", "CODE", "TRANSPORT",
  "HOST", "TIME", "WHENEVER", "NEXT", "UNTIL", "EVERY", "BEFORE", "AFTER",
  "AT", "AT_SYM", "ATAT_SYM", "NEW", "SIZEOF", "TYPEOF", "SAME",
  "PLUS_CHUCK", "MINUS_CHUCK", "TIMES_CHUCK", "DIVIDE_CHUCK",
  "S_AND_CHUCK", "S_OR_CHUCK", "S_XOR_CHUCK", "SHIFT_RIGHT_CHUCK",
  "SHIFT_LEFT_CHUCK", "PERCENT_CHUCK", "SHIFT_RIGHT", "SHIFT_LEFT",
  "TILDA", "CHUCK", "COLONCOLON", "S_CHUCK", "AT_CHUCK", "LEFT_S_CHUCK",
  "UNCHUCK", "UPCHUCK", "CLASS", "INTERFACE", "EXTENDS", "IMPLEMENTS",
  "PUBLIC", "PROTECTED", "PRIVATE", "STATIC", "ABSTRACT", "CONST", "SPORK",
  "ARROW_RIGHT", "ARROW_LEFT", "L_HACK", "R_HACK", "$accept", "program",
  "program_section", "class_definition", "class_ext", "class_body",
  "class_body2", "class_section", "iface_ext", "id_list", "id_dot",
  "function_definition", "class_decl", "function_decl", "static_decl",
  "type_decl_a", "type_decl_b", "type_decl", "type_decl2", "arg_list",
  "statement_list", "statement", "jump_statement", "selection_statement",
  "loop_statement", "code_segment", "expression_statement", "expression",
  "chuck_expression", "arrow_expression", "array_exp", "array_empty",
  "decl_expression", "var_decl_list", "var_decl", "complex_exp",
  "polar_exp", "chuck_operator", "arrow_operator",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "tilda_expression", "cast_expression",
  "unary_expression", "unary_operator", "dur_expression",
  "postfix_expression", "primary_expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   111,   111,   111,   112,   112,   112,
     112,   113,   113,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   117,   118,   118,   119,   119,   120,   120,   120,
     120,   121,   121,   121,   122,   122,   122,   122,   123,   123,
     123,   124,   124,   125,   125,   126,   126,   127,   127,   128,
     128,   129,   129,   130,   130,   130,   130,   130,   131,   131,
     131,   131,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   138,
     138,   139,   139,   140,   140,   141,   141,   141,   141,   141,
     142,   142,   143,   143,   143,   144,   145,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   147,   147,   148,   148,   149,   149,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   154,   155,   155,
     155,   155,   155,   156,   156,   156,   157,   157,   157,   158,
     158,   158,   158,   159,   159,   160,   160,   161,   161,   161,
     161,   161,   161,   161,   161,   162,   162,   162,   162,   162,
     162,   163,   163,   164,   164,   164,   164,   164,   164,   164,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     7,     6,
       7,     2,     4,     2,     4,     1,     0,     1,     2,     1,
       1,     1,     2,     1,     3,     1,     3,     8,     7,     8,
       7,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     3,     4,     1,     1,     1,     2,     2,
       4,     1,     2,     1,     1,     1,     1,     1,     2,     3,
       2,     2,     5,     7,     5,     7,     6,     7,     5,     7,
       5,     2,     3,     1,     2,     1,     3,     1,     3,     1,
       3,     3,     4,     2,     3,     1,     2,     3,     2,     3,
       1,     3,     1,     2,     2,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     1,     3,     1,     2,     2,
       2,     2,     2,     2,     3,     1,     1,     1,     1,     1,
       2,     1,     3,     1,     2,     3,     4,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      33,   170,   173,   174,   171,   172,    73,     0,     0,     0,
     155,   156,   159,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,   158,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,    35,    36,    37,     0,     0,     0,
       0,    33,     6,     5,     0,    40,    45,    46,     0,     4,
      51,    56,    55,    54,    57,    53,     0,    75,    77,   175,
      79,   176,   177,    85,   113,   115,   117,   119,   121,   123,
     125,   128,   133,   136,   139,   143,   145,     0,   147,   161,
     163,    42,   180,     0,     0,    71,     0,    25,     0,     0,
       0,     0,     0,     0,    60,    61,    58,     0,   170,   148,
     149,     0,     0,     0,    41,   153,   152,   151,    92,    88,
      90,     0,     0,   160,     0,     1,     3,     0,     0,    38,
      39,     0,    86,    52,    74,     0,    99,   100,   101,   102,
     108,   109,   110,   103,   104,   105,    97,    98,   106,   107,
       0,   112,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   150,     0,     0,     0,   168,
     169,   164,   179,    81,    72,     0,    43,     0,     0,     0,
       0,     0,     0,    59,    95,    96,     0,   154,     0,    93,
      94,     0,    89,    87,   178,    23,     0,     0,    47,     0,
      76,    78,    80,   116,     0,   118,   120,   122,   124,   126,
     127,   129,   131,   130,   132,   135,   134,   137,   138,   140,
     141,   142,   144,   146,   162,   165,     0,   167,    82,    26,
      44,     0,     0,     0,     0,     0,     0,     0,    83,     0,
      91,     0,    33,     0,     0,     0,    33,     0,     0,     0,
      48,     0,     0,   166,    62,    64,     0,     0,     0,     0,
      70,    68,    84,    24,    21,     0,    15,    33,    20,    19,
      13,    11,    33,     0,    22,    33,     0,   114,     0,    66,
       0,     0,     0,     7,    18,     0,     0,     0,     9,     0,
       0,     0,     0,    63,    67,    65,    69,    14,    12,     8,
      10,    30,    28,    49,     0,     0,    29,    27,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    40,    41,   264,   245,   265,   266,   267,   248,   196,
      88,   268,    44,    45,   121,    46,    47,    48,   199,   292,
     269,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,   190,    60,   109,   110,    61,    62,   140,   143,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -240
static const yytype_int16 yypact[] =
{
     426,     8,  -240,  -240,  -240,  -240,  -240,    40,   965,   502,
    -240,  -240,  -240,    21,     0,     6,    50,   575,    58,    61,
      78,  -240,   646,  -240,  1027,  1027,   965,   965,    75,    37,
    1027,  1027,   113,  -240,    14,  -240,    34,     7,    20,   965,
     101,   198,  -240,  -240,    48,     2,  -240,  -240,   113,  -240,
     575,  -240,  -240,  -240,  -240,  -240,   108,    98,    44,  -240,
    -240,  -240,  -240,  -240,    -8,   102,    87,    90,   104,   121,
      96,    76,   144,    60,    69,   117,  -240,  1027,    82,   103,
    -240,  -240,  -240,   169,   174,  -240,   167,   175,   164,   965,
     965,   717,   -22,   965,  -240,  -240,  -240,   183,  -240,  -240,
    -240,   182,   184,   965,   128,   185,  -240,  -240,   186,  -240,
     197,   113,   113,  -240,    99,  -240,  -240,   205,   205,  -240,
    -240,    37,  -240,  -240,  -240,   965,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,
     965,  -240,  -240,   965,  1027,   965,  1027,  1027,  1027,  1027,
    1027,  1027,  1027,  1027,  1027,  1027,  1027,  1027,  1027,  1027,
    1027,  1027,  1027,  1027,    37,  -240,    24,   779,   208,  -240,
    -240,  -240,  -240,   185,  -240,    21,   145,   209,   210,   717,
     213,   214,   219,  -240,  -240,  -240,   220,  -240,   841,  -240,
     229,   113,  -240,  -240,  -240,   218,    -1,     3,   231,   243,
    -240,    44,  -240,   102,   240,    87,    90,   104,   121,    96,
      96,    76,    76,    76,    76,   144,   144,    60,    60,    69,
      69,    69,   117,  -240,   103,  -240,   241,  -240,  -240,  -240,
    -240,   575,   575,   903,   965,   965,   575,   575,  -240,   238,
    -240,   205,   274,    21,   205,   239,   274,   205,   242,   244,
     229,   245,  1027,  -240,   221,  -240,   575,   247,   250,   252,
    -240,  -240,  -240,  -240,  -240,   249,  -240,   350,  -240,  -240,
     170,   176,   274,   256,  -240,   274,    45,  -240,   575,  -240,
     575,   263,   264,  -240,  -240,   205,    21,   265,  -240,   266,
       9,   113,   276,  -240,  -240,  -240,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,   278,    63,    37,  -240,  -240,  -240
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -240,   251,  -240,    16,  -240,  -233,    36,  -240,  -240,  -114,
    -168,    26,  -240,  -240,  -240,  -240,  -240,   -29,  -240,    -4,
      64,   -16,  -240,  -240,  -240,  -239,   -82,    -5,  -240,   166,
     -73,   106,   165,   -43,    18,  -240,  -240,  -240,  -240,    67,
    -240,   172,   177,   179,   173,   180,    15,     4,    11,    28,
     -24,   159,    25,  -240,  -240,   168,  -240
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -42
static const yytype_int16 yytable[] =
{
     105,    92,    83,    84,   197,   122,   171,   229,   112,   179,
     104,   -41,    89,   273,   180,   242,    42,    97,    90,   246,
     301,   101,   102,   144,    87,     9,    43,    98,     2,     3,
       4,     5,   187,    13,   114,   189,     7,   145,     8,   287,
     104,   181,   289,     1,     2,     3,     4,     5,   104,    99,
     100,   302,     7,    82,     8,   106,   107,    42,   290,    10,
      11,    12,    91,    13,    49,   307,    13,    43,   192,   193,
      93,    13,    94,    86,   306,   270,    81,    26,    27,     9,
     111,   160,   161,   162,   177,   178,    23,   103,   182,    95,
      24,    25,   198,    26,    27,   243,   244,   233,   186,   247,
     228,   115,   165,   119,   120,    49,   113,   125,   -31,   -31,
      29,    30,    31,    32,   123,   167,   108,     8,   298,   124,
     200,   168,   152,   153,   154,   155,    33,   263,   -32,   -32,
     271,    39,   146,   274,   147,   223,   219,   220,   221,   148,
     204,    37,   117,   118,    38,   150,   151,    39,   240,   141,
     142,   171,   149,   169,   170,   163,   211,   212,   213,   214,
     156,   157,   226,   158,   159,   209,   210,   215,   216,   164,
     166,   297,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   172,    84,   174,   136,   217,   218,   137,   173,
     138,   139,   176,   175,   183,   184,    81,   185,    -2,     8,
     188,     1,     2,     3,     4,     5,   191,   194,   195,     6,
       7,   227,     8,   230,     9,   254,   255,    10,    11,    12,
     260,   261,   231,   232,    13,   234,   235,   241,   257,   258,
     259,    14,   236,   237,    15,    16,    17,    18,    19,    20,
     279,    21,    22,   239,    23,   249,   251,   291,    24,    25,
     252,    26,    27,   262,   253,   272,   278,   276,   275,   238,
     280,    28,   293,   281,   294,   282,   283,   285,    29,    30,
      31,    32,   286,   288,   295,   296,   291,     1,     2,     3,
       4,     5,   299,   300,    33,     6,     7,   305,     8,   304,
       9,   -16,   116,    10,    11,    12,    34,    35,    36,    37,
      13,   308,    38,   284,   250,    39,   201,    14,   202,   303,
      15,    16,    17,    18,    19,    20,   203,    21,    22,   277,
      23,   207,   222,   205,    24,    25,   206,    26,    27,   208,
       0,     0,     0,     0,   224,     0,     0,    28,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,     0,     0,
       0,     0,     0,     1,     2,     3,     4,     5,     0,     0,
      33,     6,     7,     0,     8,     0,     9,   -17,     0,    10,
      11,    12,    34,    35,    36,    37,    13,     0,    38,     0,
       0,    39,     0,    14,     0,     0,    15,    16,    17,    18,
      19,    20,     0,    21,    22,     0,    23,     0,     0,     0,
      24,    25,     0,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
      29,    30,    31,    32,     0,     0,     0,     0,     0,     1,
       2,     3,     4,     5,     0,     0,    33,     6,     7,     0,
       8,     0,     9,     0,     0,    10,    11,    12,    34,    35,
      36,    37,    13,     0,    38,     0,     0,    39,     0,    14,
       0,     0,    15,    16,    17,    18,    19,    20,     0,    21,
      22,     0,    23,     0,     0,     0,    24,    25,     0,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    32,
       0,     0,     0,     0,     0,     1,     2,     3,     4,     5,
       0,     0,    33,     6,     7,     0,     8,     0,     9,    85,
       0,    10,    11,    12,    34,    35,    36,    37,    13,     0,
      38,     0,     0,    39,     0,    14,     0,     0,    15,    16,
      17,    18,    19,    20,     0,     0,    22,     0,    23,     0,
       0,     0,    24,    25,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     1,     2,
       3,     4,     5,     0,     0,     0,     6,     7,    33,     8,
       0,     9,     0,     0,    10,    11,    12,     0,     0,     0,
       0,    13,     0,    37,     0,     0,    38,     0,    14,    39,
       0,    15,    16,    17,    18,    19,    20,     0,     0,    22,
       0,    23,     0,     0,     0,    24,    25,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     1,
       2,     3,     4,     5,     0,     0,     0,    96,     7,     0,
       8,    33,     0,     0,     0,    10,    11,    12,     0,     0,
       0,     0,    13,     0,     0,     0,    37,     0,     0,    38,
       0,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,    24,    25,     0,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    32,
       1,     2,     3,     4,     5,     0,     0,     0,     6,     7,
       0,     8,    33,     0,     0,     0,    10,    11,    12,     0,
       0,     0,     0,    13,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,    24,    25,     0,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,    29,    30,    31,
      32,     7,   225,     8,     0,     0,     0,     0,    10,    11,
      12,     0,     0,    33,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,    38,     0,     0,    39,    23,     0,     0,     0,    24,
      25,     0,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     2,     3,     4,     5,    29,
      30,    31,    32,     7,     0,     8,   238,     0,     0,     0,
      10,    11,    12,     0,     0,    33,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    39,    23,     0,     0,
       0,    24,    25,     0,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       5,    29,    30,    31,    32,     7,   256,     8,     0,     0,
       0,     0,    10,    11,    12,     0,     0,    33,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,    38,     0,     0,    39,    23,
       0,     0,     0,    24,    25,     0,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,    29,    30,    31,    32,     7,     0,     8,
       0,     0,     0,     0,    10,    11,    12,     0,     0,    33,
       0,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,    38,     0,     0,
      39,    23,     0,     0,     0,    24,    25,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     2,     3,     4,     5,    29,    30,    31,    32,     7,
       0,     8,     0,     0,     0,     0,    10,    11,    12,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,    38,
       0,     0,    39,    23,     0,     0,     0,    24,    25,     0,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,    39
};

static const yytype_int16 yycheck[] =
{
      29,    17,     7,     8,   118,    48,    79,   175,    37,    91,
       3,     3,    12,   246,    36,    16,     0,    22,    12,    16,
      11,    26,    27,    31,     3,    16,     0,     3,     4,     5,
       6,     7,   105,    26,    39,   108,    12,    45,    14,   272,
       3,    63,   275,     3,     4,     5,     6,     7,     3,    24,
      25,   290,    12,    13,    14,    30,    31,    41,    13,    19,
      20,    21,    12,    26,     0,   304,    26,    41,   111,   112,
      12,    26,    11,     9,    11,   243,    68,    53,    54,    16,
      73,    21,    22,    23,    89,    90,    46,    12,    93,    11,
      50,    51,   121,    53,    54,    96,    97,   179,   103,    96,
     173,     0,    77,   101,   102,    41,    86,     9,    94,    95,
      70,    71,    72,    73,    50,    12,     3,    14,   286,    11,
     125,    18,    26,    27,    28,    29,    86,   241,    94,    95,
     244,   107,    30,   247,    47,   164,   160,   161,   162,    49,
     145,   101,    94,    95,   104,    24,    25,   107,   191,   105,
     106,   224,    48,    50,    51,    86,   152,   153,   154,   155,
      84,    85,   167,    19,    20,   150,   151,   156,   157,    52,
      88,   285,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    13,   188,    17,    87,   158,   159,    90,    15,
      92,    93,    28,    18,    11,    13,    68,    13,     0,    14,
      14,     3,     4,     5,     6,     7,     9,   108,     3,    11,
      12,     3,    14,    68,    16,   231,   232,    19,    20,    21,
     236,   237,    13,    13,    26,    12,    12,     9,   233,   234,
     235,    33,    13,    13,    36,    37,    38,    39,    40,    41,
     256,    43,    44,    14,    46,    14,     3,   276,    50,    51,
      10,    53,    54,    15,    13,    16,    35,    12,    16,    15,
      13,    63,   278,    13,   280,    13,    17,    97,    70,    71,
      72,    73,    96,    17,    11,    11,   305,     3,     4,     5,
       6,     7,    17,    17,    86,    11,    12,     9,    14,    13,
      16,    17,    41,    19,    20,    21,    98,    99,   100,   101,
      26,   305,   104,   267,   198,   107,   140,    33,   143,   291,
      36,    37,    38,    39,    40,    41,   144,    43,    44,   252,
      46,   148,   163,   146,    50,    51,   147,    53,    54,   149,
      -1,    -1,    -1,    -1,   166,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      86,    11,    12,    -1,    14,    -1,    16,    17,    -1,    19,
      20,    21,    98,    99,   100,   101,    26,    -1,   104,    -1,
      -1,   107,    -1,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,    -1,
      50,    51,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    86,    11,    12,    -1,
      14,    -1,    16,    -1,    -1,    19,    20,    21,    98,    99,
     100,   101,    26,    -1,   104,    -1,    -1,   107,    -1,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    -1,    46,    -1,    -1,    -1,    50,    51,    -1,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    86,    11,    12,    -1,    14,    -1,    16,    17,
      -1,    19,    20,    21,    98,    99,   100,   101,    26,    -1,
     104,    -1,    -1,   107,    -1,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,    44,    -1,    46,    -1,
      -1,    -1,    50,    51,    -1,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    86,    14,
      -1,    16,    -1,    -1,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    -1,   101,    -1,    -1,   104,    -1,    33,   107,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    51,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    12,    -1,
      14,    86,    -1,    -1,    -1,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    -1,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    11,    12,
      -1,    14,    86,    -1,    -1,    -1,    19,    20,    21,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,   101,    -1,    -1,
     104,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,    -1,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    70,    71,    72,
      73,    12,    13,    14,    -1,    -1,    -1,    -1,    19,    20,
      21,    -1,    -1,    86,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,   104,    -1,    -1,   107,    46,    -1,    -1,    -1,    50,
      51,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    70,
      71,    72,    73,    12,    -1,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    -1,    -1,    86,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,   104,    -1,    -1,   107,    46,    -1,    -1,
      -1,    50,    51,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    70,    71,    72,    73,    12,    13,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    -1,    -1,    86,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,   104,    -1,    -1,   107,    46,
      -1,    -1,    -1,    50,    51,    -1,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    70,    71,    72,    73,    12,    -1,    14,
      -1,    -1,    -1,    -1,    19,    20,    21,    -1,    -1,    86,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,
     107,    46,    -1,    -1,    -1,    50,    51,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    70,    71,    72,    73,    12,
      -1,    14,    -1,    -1,    -1,    -1,    19,    20,    21,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,    46,    -1,    -1,    -1,    50,    51,    -1,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,   107
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    11,    12,    14,    16,
      19,    20,    21,    26,    33,    36,    37,    38,    39,    40,
      41,    43,    44,    46,    50,    51,    53,    54,    63,    70,
      71,    72,    73,    86,    98,    99,   100,   101,   104,   107,
     110,   111,   112,   120,   121,   122,   124,   125,   126,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     141,   144,   145,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,    68,    13,   136,   136,    17,   129,     3,   119,    12,
      12,    12,   130,    12,    11,    11,    11,   136,     3,   161,
     161,   136,   136,    12,     3,   126,   161,   161,     3,   142,
     143,    73,   126,    86,   136,     0,   110,    94,    95,   101,
     102,   123,   142,   129,    11,     9,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    87,    90,    92,    93,
     146,   105,   106,   147,    31,    45,    30,    47,    49,    48,
      24,    25,    26,    27,    28,    29,    84,    85,    19,    20,
      21,    22,    23,    86,    52,   161,    88,    12,    18,    50,
      51,   139,    13,    15,    17,    18,    28,   136,   136,   135,
      36,    63,   136,    11,    13,    13,   136,   139,    14,   139,
     140,     9,   142,   142,   108,     3,   118,   118,   126,   127,
     136,   138,   141,   150,   136,   151,   152,   153,   154,   155,
     155,   156,   156,   156,   156,   157,   157,   158,   158,   159,
     159,   159,   160,   126,   164,    13,   136,     3,   139,   119,
      68,    13,    13,   135,    12,    12,    13,    13,    15,    14,
     142,     9,    16,    96,    97,   113,    16,    96,   117,    14,
     140,     3,    10,    13,   130,   130,    13,   136,   136,   136,
     130,   130,    15,   118,   112,   114,   115,   116,   120,   129,
     119,   118,    16,   114,   118,    16,    12,   148,    35,   130,
      13,    13,    13,    17,   115,    97,    96,   114,    17,   114,
      13,   126,   128,   130,   130,    11,    11,   118,   119,    17,
      17,    11,   134,   143,    13,     9,    11,   134,   128
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 178 "chuck.y"
    { (yyval.program) = g_program = new_program( (yyvsp[(1) - (1)].program_section), EM_lineNum ); ;}
    break;

  case 3:
#line 179 "chuck.y"
    { (yyval.program) = g_program = prepend_program( (yyvsp[(1) - (2)].program_section), (yyvsp[(2) - (2)].program), EM_lineNum ); ;}
    break;

  case 4:
#line 183 "chuck.y"
    { (yyval.program_section) = new_section_stmt( (yyvsp[(1) - (1)].stmt_list), EM_lineNum ); ;}
    break;

  case 5:
#line 184 "chuck.y"
    { (yyval.program_section) = new_section_func_def( (yyvsp[(1) - (1)].func_def), EM_lineNum ); ;}
    break;

  case 6:
#line 185 "chuck.y"
    { (yyval.program_section) = new_section_class_def( (yyvsp[(1) - (1)].class_def), EM_lineNum ); ;}
    break;

  case 7:
#line 190 "chuck.y"
    { (yyval.class_def) = new_class_def( (yyvsp[(1) - (6)].ival), (yyvsp[(3) - (6)].id_list), NULL, (yyvsp[(5) - (6)].class_body), EM_lineNum ); ;}
    break;

  case 8:
#line 192 "chuck.y"
    { (yyval.class_def) = new_class_def( (yyvsp[(1) - (7)].ival), (yyvsp[(3) - (7)].id_list), (yyvsp[(4) - (7)].class_ext), (yyvsp[(6) - (7)].class_body), EM_lineNum ); ;}
    break;

  case 9:
#line 194 "chuck.y"
    { (yyval.class_def) = new_iface_def( (yyvsp[(1) - (6)].ival), (yyvsp[(3) - (6)].id_list), NULL, (yyvsp[(5) - (6)].class_body), EM_lineNum ); ;}
    break;

  case 10:
#line 196 "chuck.y"
    { (yyval.class_def) = new_iface_def( (yyvsp[(1) - (7)].ival), (yyvsp[(3) - (7)].id_list), (yyvsp[(4) - (7)].class_ext), (yyvsp[(6) - (7)].class_body), EM_lineNum ); ;}
    break;

  case 11:
#line 200 "chuck.y"
    { (yyval.class_ext) = new_class_ext( NULL, (yyvsp[(2) - (2)].id_list), EM_lineNum ); ;}
    break;

  case 12:
#line 201 "chuck.y"
    { (yyval.class_ext) = new_class_ext( (yyvsp[(4) - (4)].id_list), (yyvsp[(2) - (4)].id_list), EM_lineNum ); ;}
    break;

  case 13:
#line 202 "chuck.y"
    { (yyval.class_ext) = new_class_ext( (yyvsp[(2) - (2)].id_list), NULL, EM_lineNum ); ;}
    break;

  case 14:
#line 203 "chuck.y"
    { (yyval.class_ext) = new_class_ext( (yyvsp[(2) - (4)].id_list), (yyvsp[(4) - (4)].id_list), EM_lineNum ); ;}
    break;

  case 15:
#line 207 "chuck.y"
    { (yyval.class_body) = (yyvsp[(1) - (1)].class_body); ;}
    break;

  case 16:
#line 208 "chuck.y"
    { (yyval.class_body) = NULL; ;}
    break;

  case 17:
#line 212 "chuck.y"
    { (yyval.class_body) = new_class_body( (yyvsp[(1) - (1)].program_section), EM_lineNum ); ;}
    break;

  case 18:
#line 213 "chuck.y"
    { (yyval.class_body) = prepend_class_body( (yyvsp[(1) - (2)].program_section), (yyvsp[(2) - (2)].class_body), EM_lineNum ); ;}
    break;

  case 19:
#line 218 "chuck.y"
    { (yyval.program_section) = new_section_stmt( (yyvsp[(1) - (1)].stmt_list), EM_lineNum ); ;}
    break;

  case 20:
#line 219 "chuck.y"
    { (yyval.program_section) = new_section_func_def( (yyvsp[(1) - (1)].func_def), EM_lineNum ); ;}
    break;

  case 21:
#line 220 "chuck.y"
    { (yyval.program_section) = new_section_class_def( (yyvsp[(1) - (1)].class_def), EM_lineNum ); ;}
    break;

  case 22:
#line 224 "chuck.y"
    { (yyval.class_ext) = new_class_ext( NULL, (yyvsp[(2) - (2)].id_list), EM_lineNum ); ;}
    break;

  case 23:
#line 228 "chuck.y"
    { (yyval.id_list) = new_id_list( (yyvsp[(1) - (1)].sval), EM_lineNum ); ;}
    break;

  case 24:
#line 229 "chuck.y"
    { (yyval.id_list) = prepend_id_list( (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].id_list), EM_lineNum ); ;}
    break;

  case 25:
#line 233 "chuck.y"
    { (yyval.id_list) = new_id_list( (yyvsp[(1) - (1)].sval), EM_lineNum ); ;}
    break;

  case 26:
#line 234 "chuck.y"
    { (yyval.id_list) = prepend_id_list( (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].id_list), EM_lineNum ); ;}
    break;

  case 27:
#line 239 "chuck.y"
    { (yyval.func_def) = new_func_def( (yyvsp[(1) - (8)].ival), (yyvsp[(2) - (8)].ival), (yyvsp[(3) - (8)].type_decl), (yyvsp[(4) - (8)].sval), (yyvsp[(6) - (8)].arg_list), (yyvsp[(8) - (8)].stmt), EM_lineNum ); ;}
    break;

  case 28:
#line 241 "chuck.y"
    { (yyval.func_def) = new_func_def( (yyvsp[(1) - (7)].ival), (yyvsp[(2) - (7)].ival), (yyvsp[(3) - (7)].type_decl), (yyvsp[(4) - (7)].sval), NULL, (yyvsp[(7) - (7)].stmt), EM_lineNum ); ;}
    break;

  case 29:
#line 243 "chuck.y"
    { (yyval.func_def) = new_func_def( (yyvsp[(1) - (8)].ival), (yyvsp[(2) - (8)].ival), (yyvsp[(3) - (8)].type_decl), (yyvsp[(4) - (8)].sval), (yyvsp[(6) - (8)].arg_list), NULL, EM_lineNum ); ;}
    break;

  case 30:
#line 245 "chuck.y"
    { (yyval.func_def) = new_func_def( (yyvsp[(1) - (7)].ival), (yyvsp[(2) - (7)].ival), (yyvsp[(3) - (7)].type_decl), (yyvsp[(4) - (7)].sval), NULL, NULL, EM_lineNum ); ;}
    break;

  case 31:
#line 249 "chuck.y"
    { (yyval.ival) = ae_key_public; ;}
    break;

  case 32:
#line 250 "chuck.y"
    { (yyval.ival) = ae_key_private; ;}
    break;

  case 33:
#line 251 "chuck.y"
    { (yyval.ival) = ae_key_private; ;}
    break;

  case 34:
#line 255 "chuck.y"
    { (yyval.ival) = ae_key_func; ;}
    break;

  case 35:
#line 256 "chuck.y"
    { (yyval.ival) = ae_key_public; ;}
    break;

  case 36:
#line 257 "chuck.y"
    { (yyval.ival) = ae_key_protected; ;}
    break;

  case 37:
#line 258 "chuck.y"
    { (yyval.ival) = ae_key_private; ;}
    break;

  case 38:
#line 262 "chuck.y"
    { (yyval.ival) = ae_key_static; ;}
    break;

  case 39:
#line 263 "chuck.y"
    { (yyval.ival) = ae_key_abstract; ;}
    break;

  case 40:
#line 264 "chuck.y"
    { (yyval.ival) = ae_key_instance; ;}
    break;

  case 41:
#line 268 "chuck.y"
    { (yyval.type_decl) = new_type_decl( new_id_list( (yyvsp[(1) - (1)].sval), EM_lineNum ), 0, EM_lineNum ); ;}
    break;

  case 42:
#line 269 "chuck.y"
    { (yyval.type_decl) = new_type_decl( new_id_list( (yyvsp[(1) - (2)].sval), EM_lineNum ), 1, EM_lineNum ); ;}
    break;

  case 43:
#line 273 "chuck.y"
    { (yyval.type_decl) = new_type_decl( (yyvsp[(2) - (3)].id_list), 0, EM_lineNum ); ;}
    break;

  case 44:
#line 274 "chuck.y"
    { (yyval.type_decl) = new_type_decl( (yyvsp[(2) - (4)].id_list), 1, EM_lineNum ); ;}
    break;

  case 45:
#line 283 "chuck.y"
    { (yyval.type_decl) = (yyvsp[(1) - (1)].type_decl); ;}
    break;

  case 46:
#line 284 "chuck.y"
    { (yyval.type_decl) = (yyvsp[(1) - (1)].type_decl); ;}
    break;

  case 47:
#line 289 "chuck.y"
    { (yyval.type_decl) = (yyvsp[(1) - (1)].type_decl); ;}
    break;

  case 48:
#line 290 "chuck.y"
    { (yyval.type_decl) = add_type_decl_array( (yyvsp[(1) - (2)].type_decl), (yyvsp[(2) - (2)].array_sub), EM_lineNum ); ;}
    break;

  case 49:
#line 294 "chuck.y"
    { (yyval.arg_list) = new_arg_list( (yyvsp[(1) - (2)].type_decl), (yyvsp[(2) - (2)].var_decl), EM_lineNum ); ;}
    break;

  case 50:
#line 295 "chuck.y"
    { (yyval.arg_list) = prepend_arg_list( (yyvsp[(1) - (4)].type_decl), (yyvsp[(2) - (4)].var_decl), (yyvsp[(4) - (4)].arg_list), EM_lineNum ); ;}
    break;

  case 51:
#line 299 "chuck.y"
    { (yyval.stmt_list) = new_stmt_list( (yyvsp[(1) - (1)].stmt), EM_lineNum ); ;}
    break;

  case 52:
#line 300 "chuck.y"
    { (yyval.stmt_list) = prepend_stmt_list( (yyvsp[(1) - (2)].stmt), (yyvsp[(2) - (2)].stmt_list), EM_lineNum ); ;}
    break;

  case 53:
#line 304 "chuck.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 54:
#line 305 "chuck.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 55:
#line 306 "chuck.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 56:
#line 307 "chuck.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 57:
#line 309 "chuck.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 58:
#line 313 "chuck.y"
    { (yyval.stmt) = new_stmt_from_return( NULL, EM_lineNum ); ;}
    break;

  case 59:
#line 314 "chuck.y"
    { (yyval.stmt) = new_stmt_from_return( (yyvsp[(2) - (3)].exp), EM_lineNum ); ;}
    break;

  case 60:
#line 315 "chuck.y"
    { (yyval.stmt) = new_stmt_from_break( EM_lineNum ); ;}
    break;

  case 61:
#line 316 "chuck.y"
    { (yyval.stmt) = new_stmt_from_continue( EM_lineNum ); ;}
    break;

  case 62:
#line 321 "chuck.y"
    { (yyval.stmt) = new_stmt_from_if( (yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].stmt), NULL, EM_lineNum ); ;}
    break;

  case 63:
#line 323 "chuck.y"
    { (yyval.stmt) = new_stmt_from_if( (yyvsp[(3) - (7)].exp), (yyvsp[(5) - (7)].stmt), (yyvsp[(7) - (7)].stmt), EM_lineNum ); ;}
    break;

  case 64:
#line 328 "chuck.y"
    { (yyval.stmt) = new_stmt_from_while( (yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].stmt), EM_lineNum ); ;}
    break;

  case 65:
#line 330 "chuck.y"
    { (yyval.stmt) = new_stmt_from_do_while( (yyvsp[(5) - (7)].exp), (yyvsp[(2) - (7)].stmt), EM_lineNum ); ;}
    break;

  case 66:
#line 332 "chuck.y"
    { (yyval.stmt) = new_stmt_from_for( (yyvsp[(3) - (6)].stmt), (yyvsp[(4) - (6)].stmt), NULL, (yyvsp[(6) - (6)].stmt), EM_lineNum ); ;}
    break;

  case 67:
#line 334 "chuck.y"
    { (yyval.stmt) = new_stmt_from_for( (yyvsp[(3) - (7)].stmt), (yyvsp[(4) - (7)].stmt), (yyvsp[(5) - (7)].exp), (yyvsp[(7) - (7)].stmt), EM_lineNum ); ;}
    break;

  case 68:
#line 336 "chuck.y"
    { (yyval.stmt) = new_stmt_from_until( (yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].stmt), EM_lineNum ); ;}
    break;

  case 69:
#line 338 "chuck.y"
    { (yyval.stmt) = new_stmt_from_do_until( (yyvsp[(5) - (7)].exp), (yyvsp[(2) - (7)].stmt), EM_lineNum ); ;}
    break;

  case 70:
#line 340 "chuck.y"
    { (yyval.stmt) = new_stmt_from_loop( (yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].stmt), EM_lineNum ); ;}
    break;

  case 71:
#line 344 "chuck.y"
    { (yyval.stmt) = new_stmt_from_code( NULL, EM_lineNum ); ;}
    break;

  case 72:
#line 345 "chuck.y"
    { (yyval.stmt) = new_stmt_from_code( (yyvsp[(2) - (3)].stmt_list), EM_lineNum ); ;}
    break;

  case 73:
#line 349 "chuck.y"
    { (yyval.stmt) = NULL; ;}
    break;

  case 74:
#line 350 "chuck.y"
    { (yyval.stmt) = new_stmt_from_expression( (yyvsp[(1) - (2)].exp), EM_lineNum ); ;}
    break;

  case 75:
#line 354 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 76:
#line 355 "chuck.y"
    { (yyval.exp) = prepend_expression( (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 77:
#line 359 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 78:
#line 361 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 79:
#line 365 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 80:
#line 367 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 81:
#line 371 "chuck.y"
    { (yyval.array_sub) = new_array_sub( (yyvsp[(2) - (3)].exp), EM_lineNum ); ;}
    break;

  case 82:
#line 373 "chuck.y"
    { (yyval.array_sub) = prepend_array_sub( (yyvsp[(4) - (4)].array_sub), (yyvsp[(2) - (4)].exp), EM_lineNum ); ;}
    break;

  case 83:
#line 377 "chuck.y"
    { (yyval.array_sub) = new_array_sub( NULL, EM_lineNum ); ;}
    break;

  case 84:
#line 378 "chuck.y"
    { (yyval.array_sub) = prepend_array_sub( (yyvsp[(1) - (3)].array_sub), NULL, EM_lineNum ); ;}
    break;

  case 85:
#line 382 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 86:
#line 383 "chuck.y"
    { (yyval.exp) = new_exp_decl( (yyvsp[(1) - (2)].type_decl), (yyvsp[(2) - (2)].var_decl_list), 0, EM_lineNum ); ;}
    break;

  case 87:
#line 384 "chuck.y"
    { (yyval.exp) = new_exp_decl( (yyvsp[(2) - (3)].type_decl), (yyvsp[(3) - (3)].var_decl_list), 1, EM_lineNum ); ;}
    break;

  case 88:
#line 385 "chuck.y"
    { (yyval.exp) = new_exp_decl( NULL, (yyvsp[(2) - (2)].var_decl_list), 0, EM_lineNum ); ;}
    break;

  case 89:
#line 386 "chuck.y"
    { (yyval.exp) = new_exp_decl( NULL, (yyvsp[(3) - (3)].var_decl_list), 1, EM_lineNum ); ;}
    break;

  case 90:
#line 390 "chuck.y"
    { (yyval.var_decl_list) = new_var_decl_list( (yyvsp[(1) - (1)].var_decl), EM_lineNum ); ;}
    break;

  case 91:
#line 391 "chuck.y"
    { (yyval.var_decl_list) = prepend_var_decl_list( (yyvsp[(1) - (3)].var_decl), (yyvsp[(3) - (3)].var_decl_list), EM_lineNum ); ;}
    break;

  case 92:
#line 395 "chuck.y"
    { (yyval.var_decl) = new_var_decl( (yyvsp[(1) - (1)].sval), NULL, EM_lineNum ); ;}
    break;

  case 93:
#line 396 "chuck.y"
    { (yyval.var_decl) = new_var_decl( (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].array_sub), EM_lineNum ); ;}
    break;

  case 94:
#line 397 "chuck.y"
    { (yyval.var_decl) = new_var_decl( (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].array_sub), EM_lineNum ); ;}
    break;

  case 95:
#line 402 "chuck.y"
    { (yyval.complex_exp) = new_complex( (yyvsp[(2) - (3)].exp), EM_lineNum ); ;}
    break;

  case 96:
#line 407 "chuck.y"
    { (yyval.polar_exp) = new_polar( (yyvsp[(2) - (3)].exp), EM_lineNum ); ;}
    break;

  case 97:
#line 411 "chuck.y"
    { (yyval.ival) = ae_op_chuck; ;}
    break;

  case 98:
#line 412 "chuck.y"
    { (yyval.ival) = ae_op_at_chuck; ;}
    break;

  case 99:
#line 413 "chuck.y"
    { (yyval.ival) = ae_op_plus_chuck; ;}
    break;

  case 100:
#line 414 "chuck.y"
    { (yyval.ival) = ae_op_minus_chuck; ;}
    break;

  case 101:
#line 415 "chuck.y"
    { (yyval.ival) = ae_op_times_chuck; ;}
    break;

  case 102:
#line 416 "chuck.y"
    { (yyval.ival) = ae_op_divide_chuck; ;}
    break;

  case 103:
#line 417 "chuck.y"
    { (yyval.ival) = ae_op_shift_right_chuck; ;}
    break;

  case 104:
#line 418 "chuck.y"
    { (yyval.ival) = ae_op_shift_left_chuck; ;}
    break;

  case 105:
#line 419 "chuck.y"
    { (yyval.ival) = ae_op_percent_chuck; ;}
    break;

  case 106:
#line 420 "chuck.y"
    { (yyval.ival) = ae_op_unchuck; ;}
    break;

  case 107:
#line 421 "chuck.y"
    { (yyval.ival) = ae_op_upchuck; ;}
    break;

  case 108:
#line 422 "chuck.y"
    { (yyval.ival) = ae_op_s_and_chuck; ;}
    break;

  case 109:
#line 423 "chuck.y"
    { (yyval.ival) = ae_op_s_or_chuck; ;}
    break;

  case 110:
#line 424 "chuck.y"
    { (yyval.ival) = ae_op_s_xor_chuck; ;}
    break;

  case 111:
#line 428 "chuck.y"
    { (yyval.ival) = ae_op_arrow_left; ;}
    break;

  case 112:
#line 429 "chuck.y"
    { (yyval.ival) = ae_op_arrow_right; ;}
    break;

  case 113:
#line 433 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 114:
#line 435 "chuck.y"
    { (yyval.exp) = new_exp_from_if( (yyvsp[(1) - (5)].exp), (yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].exp), EM_lineNum ); ;}
    break;

  case 115:
#line 439 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 116:
#line 441 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_or, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 117:
#line 445 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 118:
#line 447 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_and, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 119:
#line 451 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 120:
#line 453 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_s_or, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 121:
#line 457 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 122:
#line 459 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_s_xor, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 123:
#line 463 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 124:
#line 465 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_s_and, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 125:
#line 469 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 126:
#line 471 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_eq, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 127:
#line 473 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_neq, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 128:
#line 477 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 129:
#line 479 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_lt, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 130:
#line 481 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_gt, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 131:
#line 483 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_le, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 132:
#line 485 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_ge, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 133:
#line 489 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 134:
#line 491 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_shift_left, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 135:
#line 493 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_shift_right, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 136:
#line 497 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 137:
#line 499 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_plus, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 138:
#line 501 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_minus, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 139:
#line 505 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 140:
#line 507 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_times, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 141:
#line 509 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_divide, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 142:
#line 511 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_percent, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 143:
#line 515 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 144:
#line 517 "chuck.y"
    { (yyval.exp) = new_exp_from_binary( (yyvsp[(1) - (3)].exp), ae_op_tilda, (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 145:
#line 521 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 146:
#line 523 "chuck.y"
    { (yyval.exp) = new_exp_from_cast( (yyvsp[(3) - (3)].type_decl), (yyvsp[(1) - (3)].exp), EM_lineNum ); ;}
    break;

  case 147:
#line 527 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 148:
#line 529 "chuck.y"
    { (yyval.exp) = new_exp_from_unary( ae_op_plusplus, (yyvsp[(2) - (2)].exp), EM_lineNum ); ;}
    break;

  case 149:
#line 531 "chuck.y"
    { (yyval.exp) = new_exp_from_unary( ae_op_minusminus, (yyvsp[(2) - (2)].exp), EM_lineNum ); ;}
    break;

  case 150:
#line 533 "chuck.y"
    { (yyval.exp) = new_exp_from_unary( (yyvsp[(1) - (2)].ival), (yyvsp[(2) - (2)].exp), EM_lineNum ); ;}
    break;

  case 151:
#line 535 "chuck.y"
    { (yyval.exp) = new_exp_from_unary( ae_op_typeof, (yyvsp[(2) - (2)].exp), EM_lineNum ); ;}
    break;

  case 152:
#line 537 "chuck.y"
    { (yyval.exp) = new_exp_from_unary( ae_op_sizeof, (yyvsp[(2) - (2)].exp), EM_lineNum ); ;}
    break;

  case 153:
#line 539 "chuck.y"
    { (yyval.exp) = new_exp_from_unary2( ae_op_new, (yyvsp[(2) - (2)].type_decl), NULL, EM_lineNum ); ;}
    break;

  case 154:
#line 541 "chuck.y"
    { (yyval.exp) = new_exp_from_unary2( ae_op_new, (yyvsp[(2) - (3)].type_decl), (yyvsp[(3) - (3)].array_sub), EM_lineNum ); ;}
    break;

  case 155:
#line 547 "chuck.y"
    { (yyval.ival) = ae_op_plus; ;}
    break;

  case 156:
#line 548 "chuck.y"
    { (yyval.ival) = ae_op_minus; ;}
    break;

  case 157:
#line 549 "chuck.y"
    { (yyval.ival) = ae_op_tilda; ;}
    break;

  case 158:
#line 550 "chuck.y"
    { (yyval.ival) = ae_op_exclamation; ;}
    break;

  case 159:
#line 551 "chuck.y"
    { (yyval.ival) = ae_op_times; ;}
    break;

  case 160:
#line 552 "chuck.y"
    { (yyval.ival) = ae_op_spork; ;}
    break;

  case 162:
#line 559 "chuck.y"
    { (yyval.exp) = new_exp_from_dur( (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp), EM_lineNum ); ;}
    break;

  case 163:
#line 563 "chuck.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 164:
#line 565 "chuck.y"
    { (yyval.exp) = new_exp_from_array( (yyvsp[(1) - (2)].exp), (yyvsp[(2) - (2)].array_sub), EM_lineNum ); ;}
    break;

  case 165:
#line 567 "chuck.y"
    { (yyval.exp) = new_exp_from_func_call( (yyvsp[(1) - (3)].exp), NULL, EM_lineNum ); ;}
    break;

  case 166:
#line 569 "chuck.y"
    { (yyval.exp) = new_exp_from_func_call( (yyvsp[(1) - (4)].exp), (yyvsp[(3) - (4)].exp), EM_lineNum ); ;}
    break;

  case 167:
#line 571 "chuck.y"
    { (yyval.exp) = new_exp_from_member_dot( (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].sval), EM_lineNum ); ;}
    break;

  case 168:
#line 573 "chuck.y"
    { (yyval.exp) = new_exp_from_postfix( (yyvsp[(1) - (2)].exp), ae_op_plusplus, EM_lineNum ); ;}
    break;

  case 169:
#line 575 "chuck.y"
    { (yyval.exp) = new_exp_from_postfix( (yyvsp[(1) - (2)].exp), ae_op_minusminus, EM_lineNum ); ;}
    break;

  case 170:
#line 580 "chuck.y"
    { (yyval.exp) = new_exp_from_id( (yyvsp[(1) - (1)].sval), EM_lineNum ); ;}
    break;

  case 171:
#line 581 "chuck.y"
    { (yyval.exp) = new_exp_from_int( (yyvsp[(1) - (1)].ival), EM_lineNum ); ;}
    break;

  case 172:
#line 582 "chuck.y"
    { (yyval.exp) = new_exp_from_float( (yyvsp[(1) - (1)].fval), EM_lineNum ); ;}
    break;

  case 173:
#line 583 "chuck.y"
    { (yyval.exp) = new_exp_from_str( (yyvsp[(1) - (1)].sval), EM_lineNum ); ;}
    break;

  case 174:
#line 584 "chuck.y"
    { (yyval.exp) = new_exp_from_char( (yyvsp[(1) - (1)].sval), EM_lineNum ); ;}
    break;

  case 175:
#line 585 "chuck.y"
    { (yyval.exp) = new_exp_from_array_lit( (yyvsp[(1) - (1)].array_sub), EM_lineNum ); ;}
    break;

  case 176:
#line 586 "chuck.y"
    { (yyval.exp) = new_exp_from_complex( (yyvsp[(1) - (1)].complex_exp), EM_lineNum ); ;}
    break;

  case 177:
#line 587 "chuck.y"
    { (yyval.exp) = new_exp_from_polar( (yyvsp[(1) - (1)].polar_exp), EM_lineNum ); ;}
    break;

  case 178:
#line 588 "chuck.y"
    { (yyval.exp) = new_exp_from_hack( (yyvsp[(2) - (3)].exp), EM_lineNum ); ;}
    break;

  case 179:
#line 589 "chuck.y"
    { (yyval.exp) = (yyvsp[(2) - (3)].exp); ;}
    break;

  case 180:
#line 590 "chuck.y"
    { (yyval.exp) = new_exp_from_nil( EM_lineNum ); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2983 "chuck.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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



