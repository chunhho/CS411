%{
#include "y.tab.h"
%}

%%

"boolean"		{printf("\n%s " , yytext); return _boolean;}
"break"			{printf("\n%s " , yytext); return _break;}
"class"			{printf("\n%s " , yytext); return _class;}
"double"		{printf("\n%s " , yytext); return _double;}
"else"			{printf("\n%s " , yytext); return _else;}
"extends"		{printf("\n%s " , yytext); return _extends;}
"for"			{printf("\n%s " , yytext); return _for;}
"if" 			{printf("\n%s " , yytext); return _if;}
"implements"		{printf("\n%s " , yytext); return _implements;}
"int"			{printf("\n%s " , yytext); return _int;}
"interface"		{printf("\n%s " , yytext); return _interface;}
"newarray"		{printf("\n%s " , yytext); return _newarray;}
"println"		{printf("\n%s " , yytext); return _println;}
"readln"		{printf("\n%s " , yytext); return _readln;}
"return" 		{printf("\n%s " , yytext); return _return;}
"string" 		{printf("\n%s " , yytext); return _string;}
"void" 			{printf("\n%s " , yytext); return _void;}
"while"			{printf("\n%s " , yytext); return _while;}
"+"			{printf("\n%s " , yytext); return _plus;}
"-"			{printf("\n%s " , yytext); return _minus;}
"*"			{printf("\n%s " , yytext); return _multiplication;}
"/"			{printf("\n%s " , yytext); return _division;}
"%"			{printf("\n%s " , yytext); return _mod;}
"<"			{printf("\n%s " , yytext); return _less;}
"<="			{printf("\n%s " , yytext); return _lessequal;}
">"			{printf("\n%s " , yytext); return _greater;}
">="			{printf("\n%s " , yytext); return _greaterequal;}
"=="			{printf("\n%s " , yytext); return _equal;}
"!="			{printf("\n%s " , yytext); return _notequal;}
"&&"			{printf("\n%s " , yytext); return _and;}
"||"			{printf("\n%s " , yytext); return _or;}
"!"			{printf("\n%s " , yytext); return _not;}
"="			{printf("\n%s " , yytext); return _assignop;}
";"			{printf("\n%s " , yytext); return _semicolon;}
","			{printf("\n%s " , yytext); return _comma;}
"."			{printf("\n%s " , yytext); return _period;}
"("			{printf("\n%s " , yytext); return _leftparen;}
")"			{printf("\n%s " , yytext); return _rightparen;}
"["			{printf("\n%s " , yytext); return _leftbracket;}
"]"			{printf("\n%s " , yytext); return _rightbracket;}
"{"			{printf("\n%s " , yytext); return _leftbrace;}
"}"			{printf("\n%s " , yytext); return _rightbrace;}

"true"					{printf("\n%s " , yytext); return _booleanconstant;}
"false"					{printf("\n%s " , yytext); return _booleanconstant;}
[0-9]+|0[xX][0-9A-Fa-f]+ 		{printf("\n%s " , yytext); return _intconstant;}
[0-9]+\.[0-9]*([Ee][+-]?[0-9]+)? 	{printf("\n%s " , yytext); return _doubleconstant;}
[0-9]+([Ee][+-]?[0-9]+)? 		{printf("\n%s " , yytext); return _doubleconstant;}
\"[^"\n]*\"				{printf("\n%s " , yytext); return _stringconstant;}
[a-zA-Z]+[a-zA-Z0-9_]* 			{printf("\n%s " , yytext); return _id;}

[\n]					printf("\n");
[ \t]					;
"//".*\n				;
"/*"[^*]*|[*]*"*/"\n	;

%%
