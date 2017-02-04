#include <stdio.h>
#include"CS411P1Header.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

#define maxTransition 1000
#define TRUE 1
#define FALSE 0


char *names[] = {NULL,"boolean","break","class","double","else","extends","false","for","if","implements",
                "int","interface","newarray","println","readln","return","string","void","while","plus", 
                "minus","multiplication","division","mod","less","lessequal","greater","greaterequal","equal",
                "notequal","and","or","not","assignop","semicolon","comma","period","leftparen","rightparen",
                "leftbracket","rightbracket","leftbrace","rightbrace","intconstant","doubleconstant","stringconstant",
                "booleanconstant","id"};


struct{
  int switchArr[52];
  char symbolArr[maxTransition];
  int nextArr[maxTransition];
  //int position;
} symbolTable;



void createSymbolTable(void){

  int i;
  for (i = 0 ; i < 52; i++){
    symbolTable.switchArr[i] = -1;
  }

  for (i = 0; i < maxTransition; i++){
    symbolTable.symbolArr[i] = '\0';
    symbolTable.nextArr[i] = -1;
  }
  //symbolTable.position = 0;
}

int getLastPos(){
  int i;
    for (i = 0 ; i < maxTransition; i++){
      if(symbolTable.symbolArr[i] == '\0'){
        return i;
      }
    }
  return i;
}


void printSymbolTable(void){
   int i;
   int j;
   int ptr = 0;
   int alphaA = 65;
   int limit = 20;
   int end = getLastPos();

   //Print the Switch Table
   for (i = 0; i < 3; i++){
      printf("\t");

      if(i == 2){
        limit = 12;
      }
      for (j = 0; j < limit; j++, alphaA++){
        printf("%c\t", alphaA);
        if (alphaA == 90){
          alphaA = 96;
       }
      }
      printf("\n%s", "switch:");
      for (j = 0; j < limit; j++, ptr++){
        printf("\t%d", symbolTable.switchArr[ptr]);
      }
      printf("\n\n");
   }

   //Need to code the print table for Symbol/Next

   if (end < limit){
      printf("\t");
      int ind;
      for (ind = 0; ind < end; ind++){
        printf("%d\t", ind);
      }
      printf("\n%s", "symbol:");
      for (ind = 0; ind < end; ind++){
        printf("\t%c", symbolTable.symbolArr[ind]);
      }
      printf("\n%s", "next:");
      for (ind = 0; ind < end; ind++){
         if(symbolTable.nextArr[ind] != -1){
          printf("\t%d", symbolTable.nextArr[ind]);
         }
         else{
           printf("\t%s", " ");
         }
      }
   }
   else{
     int limit = 20;
     int count = end / limit;
     int remainder = end % limit;
     int ind;
     int counter = 0;
     for (ind = 0; ind < count; ind++){
        int k;
        int l = counter;
        printf("\t");
        for(k = 0; k < limit; k++){
          printf("%d\t", l++);
        }
        printf("\n%s", "symbol:");
        l = counter;
        for(k = 0; k < limit; k++){
          printf("\t%c", symbolTable.symbolArr[l++]);
        }
        printf("\n%s", "next:");
        l = counter;
        for(k = 0; k < limit; k++){
          if(symbolTable.nextArr[l] != -1){
            printf("\t%d", symbolTable.nextArr[l++]);  
          }
          else{
            printf("\t%s", " ");
            l++;
          }
        }
        counter += 20;
        printf("\n\n");
     }
     if (remainder != 0){
        int k;
        int l = counter;
        printf("\t");
        for(k = 0; k < remainder; k++){
          printf("%d\t", l++);
        }
        printf("\n%s", "symbol:");
        l = counter;
        for(k = 0; k < remainder; k++){
          printf("\t%c", symbolTable.symbolArr[l++]);
        }
        printf("\n%s", "next:");
        l = counter;
        for(k = 0; k < remainder; k++){
          if(symbolTable.nextArr[l] != -1){
            printf("\t%d", symbolTable.nextArr[l++]);  
          }
          else{
            printf("\t%s", " ");
            l++;
          }
        }
     }
   }
   printf("\n\n");

}

int GetnextSymbol(char* data){
  int pos = data[0];
  if (pos >= 97){
    pos = pos - 6;
  }
  return pos - 65;
}


void insertSymbolTable(char* yytext){

  int value = GetnextSymbol(yytext); //Get the first letter's position
  int ptr = symbolTable.switchArr[value]; //Get the pointer's location of that value

  //If that letter hasn't been used in the Switch Array
  if (ptr == -1){
    //Update switch table
    //symbolTable.switchArr[value] = symbolTable.position;
    symbolTable.switchArr[value] = getLastPos();
    int i;
    int updatePos = getLastPos();
    //Update symbol table
    for (i = 1; i < strlen(yytext); i++){
      symbolTable.symbolArr[updatePos++] = yytext[i];
    }
    //Add in terminal
    symbolTable.symbolArr[updatePos++] = '*';
  }
  //The letter has been used before
  else {
    int exit = FALSE;
    int index = 1;

    //Check if it's the same word
    for(; index < strlen(yytext); index++){
      if (symbolTable.symbolArr[ptr] == yytext[index]){
        ptr++;
      }
      else{
        exit = TRUE;
        break;
      }
    }

    //If the pointer reach end of the word, but the next char isn't a terminal
    //then it must continue jumping if it exists or create a jump to the terminal
    if(exit == FALSE && symbolTable.symbolArr[ptr] != '*'){
      exit = TRUE;
    }

    //Different word found or reach end of the word
    //If reach end of the word (same word included), break loop
    //Otherwise, restart until no more jump, then add word


    if (exit == TRUE){

      int nextPos;

      //Nowhere to jump
      if(symbolTable.nextArr[ptr] == -1){
        //Set new jump location
        nextPos = getLastPos();
        symbolTable.nextArr[ptr] = nextPos;

      }
      else{
        //Get new jump location
        nextPos = symbolTable.nextArr[ptr];

      }
      //symbolTable.nextArr[ptr] = nextPos;

      //If end of the word and there's jump
      if (index >= strlen(yytext)){
        while (symbolTable.nextArr[nextPos] != -1){

          if(symbolTable.symbolArr[nextPos] == '*'){
            break;
          }
          else{
            nextPos = symbolTable.nextArr[nextPos];
          }
        }
      }


      //if nowhere to jump, then it needs to be added to the end, and a jump to know to go there.
      //If a jump, exists, go to the jump and check the remaining words

      //Check if there's still remaining characters
      while (index < strlen(yytext)){

        //If it's at the end of the table, add the string
        if (nextPos == getLastPos()){
          for(; index < strlen(yytext); index++){
            symbolTable.symbolArr[nextPos++] = yytext[index];
          }
        }
        //Check characters remaining for potential jumps
        else{
          //awtha but ends at awthave, need to create jump
          //Check for any equal characters after jump
          for(; index < strlen(yytext); index++){
            if(symbolTable.symbolArr[nextPos] == yytext[index]){
              nextPos++;
            }
            //Still some characters aren't equal
            else{
                //Nowhere to jump
              if(symbolTable.nextArr[nextPos] == -1){
                //Set new jump location to the end
                symbolTable.nextArr[nextPos] = getLastPos();
                nextPos = getLastPos();
              }
              else{
                //Get next jump location
                nextPos = symbolTable.nextArr[nextPos];
              }
              //End the for loop
              break;
            }
          }
        }
      }

      //If the next char is empty, add in the terminal
      if(symbolTable.symbolArr[nextPos] == '\0'){
        //Add in terminal
        symbolTable.symbolArr[nextPos++] = '*';
      }
      //Check if a shorter word reaches its end before a longer word
      //If the next position isn't pointing to the end, then a jump is needed
      else if(symbolTable.symbolArr[nextPos] != '*'){
        symbolTable.nextArr[nextPos] = getLastPos();
        symbolTable.symbolArr[getLastPos()] = '*';
      }
    }
  }

  //Prints every step
  // printf("%s\n", yytext);
  // printSymbolTable();
  // printf("\n\n\n");
}


int main(void){

   createSymbolTable();

   printf("%s\n", "Translated text:");
   int ntoken, vtoken;
   ntoken = yylex();
   while(ntoken){
      printf("%s ", names[ntoken]);
      ntoken = yylex();
   }


   printf("\n\n%s\n", "Trie Table:");
   printSymbolTable();
   return 0;
}