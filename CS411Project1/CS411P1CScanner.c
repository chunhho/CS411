#include <stdio.h>
#include "CS411P1Header.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

char *names[] = {NULL, "boolean ", "break ", "class ", "double ", "else ", "extends ", "false ", "for ", "if ", "implements ",
                 "int ", "interface ", "newarray ", "println ", "readln ", "return ", "string ", "void ", "while ", "plus ", 
                 "minus ", "multiplication ", "division ", "mod ", "less ", "lessequal ", "greater ", "greaterequal ", "equal ",
                 "notequal ", "and ", "or ", "not ", "assignop ", "simicolon ", "comma ", "period ", "leftparen ", "rightparen ",
                 "leftbracket ", "rightbracket ", "leftbrace ", "rightbrace ", "intconstant ", "doubleconstatnt ", "stringconstant ",
                 "booleanconstant ", "id "};

int main(void)
{

   int ntoken, vtoken;
   ntoken = yylex();
   while(ntoken){
      printf("%s", names[ntoken]);
      ntoken = yylex();
   }
   return 0;
}