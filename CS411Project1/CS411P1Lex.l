%{
#include "CS411P1Header.h"
#include "CS411P1CScanner.c"
%}

%%

"boolean"		{insertSymbolTable(yytext);return _boolean;}
"break"			{insertSymbolTable(yytext);return _break;}
"class"			{insertSymbolTable(yytext);return _class;}
"double"		{insertSymbolTable(yytext);return _double;}
"else"			{insertSymbolTable(yytext);return _else;}
"extends"		{insertSymbolTable(yytext);return _extends;}
"for"			{insertSymbolTable(yytext);return _for;}
"if" 			{insertSymbolTable(yytext);return _if;}
"implements"	{insertSymbolTable(yytext);return _implements;}
"int"			{insertSymbolTable(yytext);return _int;}
"interface"		{insertSymbolTable(yytext);return _interface;}
"newarray"		{insertSymbolTable(yytext);return _newarray;}
"println"		{insertSymbolTable(yytext);return _println;}
"readln"		{insertSymbolTable(yytext);return _readln;}
"return" 		{insertSymbolTable(yytext);return _return;}
"string" 		{insertSymbolTable(yytext);return _string;}
"void" 			{insertSymbolTable(yytext);return _void;}
"while"			{insertSymbolTable(yytext);return _while;}
"+"				return _plus;
"-"				return _minus;
"*"				return _multiplication;
"/"				return _division;
"%"				return _mod;
"<"				return _less;
"<="			return _lessequal;
">"				return _greater;
">="			return _greaterequal;
"=="			return _equal;
"!="			return _notequal;
"&&"			return _and;
"||"			return _or;
"!"				return _not;
"="				return _assignop;
";"				return _semicolon;
","				return _comma;
"."				return _period;
"("				return _leftparen;
")"				return _rightparen;
"["				return _leftbracket;
"]"				return _rightbracket;
"{"				return _leftbrace;
"}"				return _rightbrace;

"true"								return _booleanconstant;
"false"								return _booleanconstant;
[0-9]+|0[xX][0-9A-Fa-f]+ 			return _intconstant;
[0-9]+\.[0-9]*([Ee][+-]?[0-9]+)? 	return _doubleconstant;
[0-9]+([Ee][+-]?[0-9]+)? 			return _doubleconstant;
\"[^"\n]*\"							return _stringconstant;
[a-zA-Z]+[a-zA-Z0-9_]* 				{insertSymbolTable(yytext);return _id;}

[\n]					printf("\n");
[ \t]					;
"//".*\n				;
"/*"[^*]*|[*]*"*/"\n	;



%%