/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
