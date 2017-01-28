%{
#include "CS411P1Header.h"
%}

%%

"boolean"		{printf("%s ", yytext); return _boolean;}
"break"			{printf("%s ", yytext); return _break;}
"class"			{printf("%s ", yytext); return _class;}
"double"		{printf("%s ", yytext); return _double;}
"else"			{printf("%s ", yytext); return _else;}
"extends"		{printf("%s ", yytext); return _extends;}
"for"			{printf("%s ", yytext); return _for;}
"if" 			{printf("%s ", yytext); return _if;}
"implements"	{printf("%s ", yytext); return _implements;}
"int"			{printf("%s ", yytext); return _int;}
"interface"		{printf("%s ", yytext); return _interface;}
"newarray"		{printf("%s ", yytext); return _newarray;}
"println"		{printf("%s ", yytext); return _println;}
"readln"		{printf("%s ", yytext); return _readln;}
"return" 		{printf("%s ", yytext); return _return;}
"string" 		{printf("%s ", yytext); return _string;}
"void" 			{printf("%s ", yytext); return _void;}
"while"			{printf("%s ", yytext); return _while;}
"+"				{printf("plus "); return _plus;}
"-"				{printf("minus "); return _minus;}
"*"				{printf("multiplication "); return _multiplication;}
"/"				{printf("division "); return _division;}
"%"				{printf("mod "); return _mod;}
"<"				{printf("less "); return _less;}
"<="			{printf("lessequal "); return _lessequal;}
">"				{printf("greater "); return _greater;}
">="			{printf("greaterequal "); return _greaterequal;}
"=="			{printf("equal "); return _equal;}
"!="			{printf("notequal "); return _notequal;}
"&&"			{printf("and "); return _and;}
"||"			{printf("or "); return _or;}
"!"				{printf("not "); return _not;}
"="				{printf("assignop "); return _assignop;}
";"				{printf("semicolon "); return _semicolon;}
","				{printf("comma "); return _comma;}
"."				{printf("period "); return _period;}
"("				{printf("leftparen "); return _leftparen;}
")"				{printf("rightparen "); return _rightparen;}
"["				{printf("leftbracket "); return _leftbracket;}
"]"				{printf("rightbracket "); return _rightbracket;}
"{"				{printf("leftbrace "); return _leftbrace;}
"}"				{printf("rightbrace "); return _rightbrace;}

"true"								{printf("booleanconstant "); return _booleanconstant;}
"false"								{printf("booleanconstant "); return _booleanconstant;}
[0-9]+|0[xX][0-9A-Fa-f]+ 			{printf("intconstant "); return _intconstant;}
[0-9]+\.[0-9]*([Ee][+-]?[0-9]+)? 	{printf("doubleconstant "); return _doubleconstant;}
[0-9]+([Ee][+-]?[0-9]+)? 			{printf("doubleconstant "); return _doubleconstant;}
\"[^"\n]*\"							{printf("stringconstant "); return _stringconstant;}
[a-zA-Z]+[a-zA-Z0-9_]* 				{printf("id "); return _id;}

[\n]					printf("\n");
[ \t]					;
"//".*\n				;
"/*"[^*]*|[*]*"*/"\n	;



%%