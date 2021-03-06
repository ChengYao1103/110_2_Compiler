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
#line 1 "yacc.y"

    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<stdbool.h>
    
    #define MAXSIZE 1024
    
    void yyerror(const char *s);
    int yylex();
    int yywrap();
    extern int yyget_lineno();
    extern int yylineno;
    bool is_error = false;
    
    // symbol table
    typedef struct symbol{
		int type;
		char name[100];
		int intValue;
		bool boolValue;
		char stringValue[MAXSIZE];
		int returnType;
		char param[100];
		int passing; // value or reference
	}symbol;
	
	int symbol_count = 0;
	symbol symbols[MAXSIZE];
	int searchSymbol(char *name);	// search element in symbol table return index
	void createSymbol(char *name, int type, int returnType, char *value, char* param);	// save symbol to symbol table
	void updateSymbol(char *name, char *value);	// update value of symbol
	void printSymbols();	// print symbol table
	
	// function
	char* binaryCompute(char *a_name, int operator, char *b_name);	// math compute
	char computeResult[20];	// save compute result with char*
	
	char declaredSymbol[10][100];	// handle declared multiple variable at once
	int declaredIndex = 0;	// record amount of multiple declared
	char** addList(char *name);	// save variable name to list
	


#line 115 "y.tab.c"

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
    T_VAR = 258,
    T_TRUE = 259,
    T_FALSE = 260,
    T_NULL = 261,
    T_STRINGCONSTANT = 262,
    T_INTCONSTANT = 263,
    T_CHARCONSTANT = 264,
    T_HEXCONSTANT = 265,
    T_VOID = 266,
    T_INTTYPE = 267,
    T_BOOLTYPE = 268,
    T_STRINGTYPE = 269,
    T_EQ = 270,
    T_NEQ = 271,
    T_GEQ = 272,
    T_GT = 273,
    T_LEQ = 274,
    T_LT = 275,
    T_PLUS = 276,
    T_MINUS = 277,
    T_MULT = 278,
    T_DIV = 279,
    T_MOD = 280,
    T_NOT = 281,
    T_OR = 282,
    T_AND = 283,
    T_ASSIGN = 284,
    T_FUNC = 285,
    T_RETURN = 286,
    T_WHILE = 287,
    T_IF = 288,
    T_ELSE = 289,
    T_FOR = 290,
    T_BREAK = 291,
    T_CONTINUE = 292,
    T_COMMA = 293,
    T_LSB = 294,
    T_RSB = 295,
    T_SEMICOLON = 296,
    T_LCB = 297,
    T_RCB = 298,
    T_LPAREN = 299,
    T_RPAREN = 300,
    T_DOT = 301,
    T_LEFTSHIFT = 302,
    T_RIGHTSHIFT = 303,
    T_ID = 304,
    T_PACKAGE = 305,
    T_EXTERN = 306,
    T_COMMENT = 307,
    T_WHITESPACE = 308,
    T_WHITESPACE_N = 309
  };
#endif
/* Tokens.  */
#define T_VAR 258
#define T_TRUE 259
#define T_FALSE 260
#define T_NULL 261
#define T_STRINGCONSTANT 262
#define T_INTCONSTANT 263
#define T_CHARCONSTANT 264
#define T_HEXCONSTANT 265
#define T_VOID 266
#define T_INTTYPE 267
#define T_BOOLTYPE 268
#define T_STRINGTYPE 269
#define T_EQ 270
#define T_NEQ 271
#define T_GEQ 272
#define T_GT 273
#define T_LEQ 274
#define T_LT 275
#define T_PLUS 276
#define T_MINUS 277
#define T_MULT 278
#define T_DIV 279
#define T_MOD 280
#define T_NOT 281
#define T_OR 282
#define T_AND 283
#define T_ASSIGN 284
#define T_FUNC 285
#define T_RETURN 286
#define T_WHILE 287
#define T_IF 288
#define T_ELSE 289
#define T_FOR 290
#define T_BREAK 291
#define T_CONTINUE 292
#define T_COMMA 293
#define T_LSB 294
#define T_RSB 295
#define T_SEMICOLON 296
#define T_LCB 297
#define T_RCB 298
#define T_LPAREN 299
#define T_RPAREN 300
#define T_DOT 301
#define T_LEFTSHIFT 302
#define T_RIGHTSHIFT 303
#define T_ID 304
#define T_PACKAGE 305
#define T_EXTERN 306
#define T_COMMENT 307
#define T_WHITESPACE 308
#define T_WHITESPACE_N 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 47 "yacc.y"

	char *yy_str;
	char **yy_strList;
	int yy_int;

#line 281 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   281

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

#define YYUNDEFTOK  2
#define YYMAXUTOK   309


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    82,    82,    85,    86,    87,    89,    90,    91,    95,
      96,    97,    99,   105,   106,   110,   111,   112,   114,   117,
     119,   120,   122,   123,   125,   126,   130,   131,   132,   134,
     143,   144,   145,   146,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   160,   161,   162,   163,   164,
     165,   166,   169,   170,   172,   174,   175,   179,   180,   182,
     183,   185,   186,   187,   188,   189,   191,   192,   193,   194,
     195,   196,   197,   198,   202,   203,   205,   206,   208,   209,
     211,   212,   214,   215,   217,   218,   219,   220,   221,   222
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_VAR", "T_TRUE", "T_FALSE", "T_NULL",
  "T_STRINGCONSTANT", "T_INTCONSTANT", "T_CHARCONSTANT", "T_HEXCONSTANT",
  "T_VOID", "T_INTTYPE", "T_BOOLTYPE", "T_STRINGTYPE", "T_EQ", "T_NEQ",
  "T_GEQ", "T_GT", "T_LEQ", "T_LT", "T_PLUS", "T_MINUS", "T_MULT", "T_DIV",
  "T_MOD", "T_NOT", "T_OR", "T_AND", "T_ASSIGN", "T_FUNC", "T_RETURN",
  "T_WHILE", "T_IF", "T_ELSE", "T_FOR", "T_BREAK", "T_CONTINUE", "T_COMMA",
  "T_LSB", "T_RSB", "T_SEMICOLON", "T_LCB", "T_RCB", "T_LPAREN",
  "T_RPAREN", "T_DOT", "T_LEFTSHIFT", "T_RIGHTSHIFT", "T_ID", "T_PACKAGE",
  "T_EXTERN", "T_COMMENT", "T_WHITESPACE", "T_WHITESPACE_N", "$accept",
  "program", "externs", "externDef", "externTypes", "fieldDecls",
  "fieldDecl", "methodDecls", "methodDecl", "methodCall", "methodArgs",
  "methodArg", "varDecls", "varDecl", "block", "stats", "stat", "expr",
  "assigns", "assign", "lValue", "unaryOperators", "binaryOperators",
  "mathOperator", "compareOperator", "ids", "idTypes", "type",
  "externType", "methodType", "arrayType", "constant", YY_NULLPTR
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
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF (-94)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-26)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -48,   -21,    28,    13,   -94,   -17,   -94,     2,   -94,    11,
      70,   106,    50,   -94,   -94,   -94,   -11,   -94,   -94,    55,
       5,   -94,   106,   103,    80,    -8,    72,   -94,   -18,   -94,
     -94,   -94,   -94,    93,   119,   105,   143,   111,   114,   137,
     -94,   -94,   -94,   102,   -94,   144,   -94,   -94,   -25,   -94,
     -94,   -94,   -94,   -94,   146,    80,   103,    80,    21,   -94,
     -94,   161,   -94,   136,   103,   185,   -94,   194,   161,   187,
       7,   -94,   -94,   -94,     9,    47,   196,   197,   198,   205,
     206,    -3,   207,   -94,   -94,   202,   -94,   208,   221,   222,
     -94,    64,    64,    64,   217,   -94,   -94,    64,    53,   -94,
     -94,   -94,   -94,    64,   -94,   -94,   -94,    64,     6,   -94,
     108,    64,   -94,   122,   141,   228,    62,   -94,   189,    38,
     -94,    49,   -94,   237,   237,   155,    64,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     227,    64,   -94,   -94,   237,   161,   161,   217,    64,   -94,
      73,   -94,   -94,   203,   -94,   237,   -94,   235,   -94,   174,
     -94,   -94,   161,   217,   -94,    51,   161,   -94
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     0,     4,     0,     1,     0,     3,     0,
       0,     0,    11,    78,    79,    80,     0,    81,     8,     0,
      17,    10,     0,     0,    75,     0,     0,     9,     0,    16,
       7,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       2,    15,     6,     0,    74,     0,    12,    13,     0,    88,
      89,    87,    85,    86,     0,     0,     0,     0,     0,    14,
      84,     0,    77,     0,     0,    28,    19,    76,     0,     0,
      33,    27,    18,    75,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    26,    34,     0,    32,     0,     0,     0,
      41,     0,     0,     0,     0,    43,    44,     0,     0,    36,
      30,    31,    35,     0,    29,    58,    57,     0,    45,    46,
       0,     0,    47,     0,     0,    55,     0,    53,     0,    87,
      21,     0,    23,    24,    54,     0,     0,    70,    71,    66,
      67,    68,    69,    61,    62,    63,    64,    65,    73,    72,
       0,     0,    59,    60,    49,     0,     0,     0,     0,    56,
       0,    20,    50,     0,    42,    48,    39,    37,    52,     0,
      22,    51,     0,     0,    38,     0,     0,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,   -94,   267,   -94,   -94,   251,   -94,   244,   -59,
     -94,   123,   -94,   204,   -61,   -94,   190,   -74,   113,   -93,
     -94,   -94,   -94,   -94,   -94,   209,   214,    -9,   257,   -50,
     -94,   238
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    16,    20,    21,    28,    29,   109,
     121,   122,    70,    71,    84,    85,    86,   123,   116,    87,
      88,   111,   141,   142,   143,    25,    58,    32,    18,    33,
      38,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,   117,    17,     1,    13,    14,    61,    72,    19,     5,
      69,    82,    26,    17,    68,    34,    37,   110,   113,   114,
      56,    13,    14,   118,    57,    40,    82,    22,     6,   124,
      35,    36,     9,   125,    23,    26,    97,   144,    75,    76,
      77,    98,    78,    79,    80,   126,    60,    35,    62,    65,
      98,    10,   153,    19,   158,    11,    81,    49,    50,    63,
     119,    52,    53,     7,     1,    89,    64,   155,    49,    50,
     117,    51,    52,    53,   159,   105,   -25,    49,    50,   106,
     119,    52,    53,   -25,   156,   157,   105,   150,    90,   147,
     106,    91,    13,    14,   151,   105,   166,   107,   120,   106,
     147,   164,   108,   148,    24,   167,    49,    50,   107,    51,
      52,    53,    12,   108,    31,    13,    14,   107,    13,    14,
      15,    39,   108,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    42,   138,   139,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    43,   138,
     139,    45,    46,   140,    44,    47,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   145,   138,   139,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,    48,   138,   139,    55,    57,   146,    59,    69,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     152,   138,   139,    65,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   163,   138,   139,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   149,
     138,   139,    63,    75,    76,    77,    73,    78,    79,    80,
      92,    93,    94,   161,    65,   100,    95,    96,    99,   102,
     103,    81,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   104,   138,   139,   115,    97,   154,   162,
       8,    27,    41,   160,    83,   101,   165,    67,    74,    30,
       0,    54
};

static const yytype_int16 yycheck[] =
{
      61,    94,    11,    51,    12,    13,    56,    68,     3,    30,
       3,    70,    30,    22,    64,    24,    25,    91,    92,    93,
      45,    12,    13,    97,    49,    43,    85,    38,     0,   103,
      38,    39,    49,   107,    45,    30,    39,   111,    31,    32,
      33,    44,    35,    36,    37,    39,    55,    38,    57,    42,
      44,    49,   126,     3,   147,    44,    49,     4,     5,    38,
       7,     8,     9,    50,    51,    74,    45,   141,     4,     5,
     163,     7,     8,     9,   148,    22,    38,     4,     5,    26,
       7,     8,     9,    45,   145,   146,    22,    38,    41,    38,
      26,    44,    12,    13,    45,    22,    45,    44,    45,    26,
      38,   162,    49,    41,    49,   166,     4,     5,    44,     7,
       8,     9,    42,    49,    11,    12,    13,    44,    12,    13,
      14,    49,    49,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    41,    27,    28,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    29,    27,
      28,     8,    41,    45,    49,    41,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    45,    27,    28,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    44,    27,    28,    40,    49,    45,    41,     3,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      45,    27,    28,    42,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    41,    27,    28,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    40,
      27,    28,    38,    31,    32,    33,    49,    35,    36,    37,
      44,    44,    44,    40,    42,    43,    41,    41,    41,    41,
      29,    49,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    41,    27,    28,    49,    39,    41,    34,
       3,    20,    28,   150,    70,    85,   163,    63,    69,    22,
      -1,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,    56,    57,    58,    30,     0,    50,    58,    49,
      49,    44,    42,    12,    13,    14,    59,    82,    83,     3,
      60,    61,    38,    45,    49,    80,    30,    61,    62,    63,
      83,    11,    82,    84,    82,    38,    39,    82,    85,    49,
      43,    63,    41,    29,    49,     8,    41,    41,    44,     4,
       5,     7,     8,     9,    86,    40,    45,    49,    81,    41,
      82,    84,    82,    38,    45,    42,    69,    81,    84,     3,
      67,    68,    69,    49,    80,    31,    32,    33,    35,    36,
      37,    49,    64,    68,    69,    70,    71,    74,    75,    82,
      41,    44,    44,    44,    44,    41,    41,    39,    44,    41,
      43,    71,    41,    29,    41,    22,    26,    44,    49,    64,
      72,    76,    86,    72,    72,    49,    73,    74,    72,     7,
      45,    65,    66,    72,    72,    72,    39,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    27,    28,
      45,    77,    78,    79,    72,    45,    45,    38,    41,    40,
      38,    45,    45,    72,    41,    72,    69,    69,    74,    72,
      66,    40,    34,    41,    69,    73,    45,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    58,    59,    59,    60,
      60,    60,    61,    61,    61,    62,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    67,    68,
      69,    70,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    73,    73,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    78,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    80,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    86,    86,    86,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     2,     1,     0,     8,     3,     1,     2,
       1,     0,     4,     4,     6,     2,     1,     0,     7,     6,
       4,     3,     3,     1,     1,     1,     2,     1,     0,     4,
       4,     2,     1,     0,     1,     2,     2,     5,     7,     5,
       9,     2,     5,     2,     2,     1,     1,     1,     3,     2,
       3,     4,     3,     1,     3,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     1,     1,     1
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
  case 12:
#line 99 "yacc.y"
                                        {
	for(int i=0;i<declaredIndex;i++){
		createSymbol(declaredSymbol[i], (yyvsp[-1].yy_int), T_VOID, "0", "");
	}
	declaredIndex = 0;
}
#line 1605 "y.tab.c"
    break;

  case 14:
#line 106 "yacc.y"
                                                        { createSymbol((yyvsp[-4].yy_str), (yyvsp[-3].yy_int), T_VOID, (yyvsp[-1].yy_str), ""); }
#line 1611 "y.tab.c"
    break;

  case 18:
#line 114 "yacc.y"
                                                                        {
	createSymbol((yyvsp[-5].yy_str), (yyvsp[-6].yy_int), (yyvsp[-1].yy_int), "", "");
}
#line 1619 "y.tab.c"
    break;

  case 19:
#line 117 "yacc.y"
                                                                { createSymbol((yyvsp[-4].yy_str), (yyvsp[-5].yy_int), (yyvsp[-1].yy_int), "0", ""); }
#line 1625 "y.tab.c"
    break;

  case 29:
#line 134 "yacc.y"
                                        {
	for(int i=0;i<declaredIndex;i++){
		createSymbol(declaredSymbol[i], (yyvsp[-1].yy_int), T_VOID, "0", "");
	}
	declaredIndex = 0;
}
#line 1636 "y.tab.c"
    break;

  case 45:
#line 160 "yacc.y"
                {(yyval.yy_str) = (yyvsp[0].yy_str);}
#line 1642 "y.tab.c"
    break;

  case 47:
#line 162 "yacc.y"
                        {(yyval.yy_str) = (yyvsp[0].yy_str);}
#line 1648 "y.tab.c"
    break;

  case 48:
#line 163 "yacc.y"
                                        { (yyval.yy_str) = binaryCompute((yyvsp[-2].yy_str), (yyvsp[-1].yy_int), (yyvsp[0].yy_str));}
#line 1654 "y.tab.c"
    break;

  case 54:
#line 172 "yacc.y"
                                {updateSymbol((yyvsp[-2].yy_str), (yyvsp[0].yy_str));}
#line 1660 "y.tab.c"
    break;

  case 55:
#line 174 "yacc.y"
                {(yyval.yy_str) = (yyvsp[0].yy_str);}
#line 1666 "y.tab.c"
    break;

  case 74:
#line 202 "yacc.y"
                        {(yyval.yy_strList) = addList((yyvsp[0].yy_str));}
#line 1672 "y.tab.c"
    break;

  case 75:
#line 203 "yacc.y"
                {(yyval.yy_strList) = addList((yyvsp[0].yy_str));}
#line 1678 "y.tab.c"
    break;

  case 77:
#line 206 "yacc.y"
                        { addList((yyvsp[-1].yy_str));}
#line 1684 "y.tab.c"
    break;

  case 78:
#line 208 "yacc.y"
                                        {(yyval.yy_int) = (yyvsp[0].yy_int);}
#line 1690 "y.tab.c"
    break;

  case 79:
#line 209 "yacc.y"
                                        {(yyval.yy_int) = (yyvsp[0].yy_int);}
#line 1696 "y.tab.c"
    break;

  case 80:
#line 211 "yacc.y"
                                {(yyval.yy_int) = (yyvsp[0].yy_int);}
#line 1702 "y.tab.c"
    break;

  case 81:
#line 212 "yacc.y"
                                                {(yyval.yy_int) = (yyvsp[0].yy_int);}
#line 1708 "y.tab.c"
    break;

  case 82:
#line 214 "yacc.y"
                                        {(yyval.yy_int) = (yyvsp[0].yy_int);}
#line 1714 "y.tab.c"
    break;

  case 83:
#line 215 "yacc.y"
                                                {(yyval.yy_int) = (yyvsp[0].yy_int);}
#line 1720 "y.tab.c"
    break;

  case 85:
#line 218 "yacc.y"
                        {(yyval.yy_str) = (yyvsp[0].yy_str);}
#line 1726 "y.tab.c"
    break;

  case 86:
#line 219 "yacc.y"
                                {(yyval.yy_str) = (yyvsp[0].yy_str);}
#line 1732 "y.tab.c"
    break;

  case 87:
#line 220 "yacc.y"
                                {(yyval.yy_str) = (yyvsp[0].yy_str);}
#line 1738 "y.tab.c"
    break;

  case 88:
#line 221 "yacc.y"
                                        {(yyval.yy_str) = "1";}
#line 1744 "y.tab.c"
    break;

  case 89:
#line 222 "yacc.y"
                                        {(yyval.yy_str) = "0";}
#line 1750 "y.tab.c"
    break;


#line 1754 "y.tab.c"

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
#line 226 "yacc.y"


int main(void) {
    yyparse();
    if(!is_error){
    	printSymbols();
    	printf("syntax all correct!\n");
    }
    return 0;
}

void yyerror(const char* msg) {
	is_error = true;
	fprintf(stderr, "%s at line %d\n", msg, yyget_lineno());
}

// search element in symbol table return index
int searchSymbol(char *name){
	for(int i=0;i<symbol_count;i++){
		if(strcmp(symbols[i].name, name)==0){
			return i;
		}
	}
	return -1;
}

// save symbol to symbol table
void createSymbol(char *name, int type, int returnType, char *value, char* param){
	int check = searchSymbol(name);
	if(check != -1){
		char error[] = "The name \"";
		strcat(error, name);
		strcat(error, "\" has duplicate declare");
		yyerror(error);
		exit(1);
	}
	
	strcpy(symbols[symbol_count].name, name);
	switch(type){
		case T_INTTYPE:
			symbols[symbol_count].type = T_INTTYPE;
			symbols[symbol_count].intValue = atoi(value);
			break;
		case T_STRINGTYPE:
			symbols[symbol_count].type = T_STRINGTYPE;
			strcpy(symbols[symbol_count].stringValue, value);
			break;
		case T_BOOLTYPE:
			symbols[symbol_count].type = T_BOOLTYPE;
			symbols[symbol_count].intValue = atoi(value);
			break;
		case T_FUNC:
			symbols[symbol_count].type = T_FUNC;
			symbols[symbol_count].returnType = returnType;
			strcpy(symbols[symbol_count].param, param);
			break;
		default:
			break;
	}
	symbol_count += 1;
}

// update value of symbol
void updateSymbol(char *name, char *value){
	int index = searchSymbol(name), index2;
	if(index == -1){
		char error[] = "The name \"";
		strcat(error, name);
		strcat(error, "\" doesn't exist");
		yyerror(error);
		exit(1);
	}
	// if value is the name of a variable
	if(atoi(value) == 0 && strcmp(value, "0") != 0){
		index2 = searchSymbol(value);
		if(index2 == -1){
			char error[] = "The name \"";
			strcat(error, value);
			strcat(error, "\" doesn't exist");
			yyerror(error);
			exit(1);
		}
		switch(symbols[index2].type){
			case T_INTTYPE:
				sprintf(value, "%d", symbols[index2].intValue);
				break;
			case T_STRINGTYPE:
				strcpy(value, symbols[index2].stringValue);
				break;
			case T_BOOLTYPE:
				sprintf(value, "%d", symbols[index2].intValue);
				break;
		}
	}
	char tmpParam[100];
	switch(symbols[index].type){
		case T_INTTYPE:
			symbols[index].intValue = atoi(value);
			break;
		case T_STRINGTYPE:
			strcpy(symbols[index].stringValue, value);
			break;
		case T_BOOLTYPE:
			symbols[index].intValue = atoi(value);
			break;
		case T_FUNC:
			sprintf(tmpParam, "%s", value);
			strcat(", ", tmpParam);
			strcat(symbols[symbol_count].param, tmpParam);
			break;
		default:
			break;
	}
}

// print symbol table
void printSymbols(){
	for(int i=0;i<symbol_count;i++){
		printf("symbol name:%s\t", symbols[i].name);
		switch(symbols[i].type){
			case T_INTTYPE:
				printf("symbol type:int\t\t");
				printf("symbol value:%d\n", symbols[i].intValue);
				break;
			case T_STRINGTYPE:
				printf("symbol type:string\t");
				printf("symbol value:%s\n", symbols[i].stringValue);
				break;
			case T_BOOLTYPE:
				printf("symbol type:bool\t");
				printf("symbol value:%s\n", symbols[i].intValue? "true" : "false");
				break;
			case T_FUNC:
				printf("symbol type:function\t");
				printf("symbol return type:%d\t", symbols[i].returnType);
				printf("symbol param:%s\n", symbols[i].param);
				break;
			default:
				printf("unexpected type\n");
				break;
		}
	}
	printf("\n");
}

// handle multiple declare
char** addList(char *name){
	strcpy(declaredSymbol[declaredIndex], name);
	declaredIndex += 1;
	return (char**)declaredSymbol;
}

// math compute
char* binaryCompute(char *a_name, int operator, char *b_name){
	int index;
	symbol a, b;
	// handle a, if a is name then search symbol , if not then assign value
	if(atoi(a_name) == 0 && strcmp(a_name, "0") != 0){
		index = searchSymbol(a_name);
		if(index == -1){
			yyerror("The variable doesn't exist");
			exit(1);
		}
		a = symbols[index];
	}
	else{
		a.intValue = atoi(a_name);
		a.type = T_INTTYPE;
	}
	// handle b
	if(atoi(b_name) == 0 && strcmp(b_name, "0") != 0){
		index = searchSymbol(b_name);
		if(index == -1){
			yyerror("The variable doesn't exist");
			exit(1);
		}
		b = symbols[index];
	}
	else{
		b.intValue = atoi(b_name);
		b.type = T_INTTYPE;
	}
	// type error
	if((a.type != T_INTTYPE && a.type != T_BOOLTYPE) || (b.type != T_INTTYPE && b.type != T_BOOLTYPE)){
		yyerror("Wrong type to calculate.");
		exit(1);
	}
	
	int result;
	switch(operator){
		case T_PLUS:
			printf("%d + %d = %d\n", a.intValue, b.intValue, a.intValue + b.intValue);
			result = a.intValue + b.intValue;
			break;
		case T_MINUS:
			printf("%d - %d = %d\n", a.intValue, b.intValue, a.intValue - b.intValue);
			result = a.intValue - b.intValue;
			break;
		case T_MULT:
			printf("%d * %d = %d\n", a.intValue, b.intValue, a.intValue * b.intValue);
			result = a.intValue * b.intValue;
			break;
		case T_DIV:
			printf("%d / %d = %d\n", a.intValue, b.intValue, a.intValue / b.intValue);
			result = a.intValue / b.intValue;
			break;
		case T_MOD:
			printf("%d mod %d = %d\n", a.intValue, b.intValue, a.intValue % b.intValue);
			result = a.intValue % b.intValue;
			break;
		default:
			printf("unexpected operator\n");
				break;
	}
	sprintf(computeResult, "%d", result);
	return computeResult;
}
