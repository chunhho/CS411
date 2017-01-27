%{
/*#include "CS411P1Header.h"

rename to header file
*/
%}

%%
%{/*
"boolean"		return _boolean;
"break"			return _break;
"class"			return _class;
"double"		return _double;
"else"			return _else;
"extends"		return _extends;
"for"			return _for;
"if" 			return _if;
"implements"	return _implements;
"int"			return _int;
"interface"		return _interface;
"newarray"		return _newarray;
"println"		return _println;
"readln"		return _readln;
"return" 		return _return;
"string" 		return _string;
"void" 			return _void;
"while"			return _while;
"+"				return _plus;
"-"				return _minus;
"*"				return _multiplication;
"/"				return _division;
"%"				return _mod;
"<"				return _less;
"<="			return _lessequal;
">"				return _greater;
">="			return _greaterequal;
""
*/
%}

"="			printf("equal");
"<="		printf("leq");
">="		printf("geq");
"-"			printf("minus");

%%