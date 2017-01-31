## Project Description

The requirement of this project is to implement a lexical analyzer for a simple object-oriented programming language called Toy. The program translates any input Toy program into a sequence of tokens, and create a symbol table using the trie structure for all keywords and user-defined identifiers. 

## Contributors

Chun Ho and Mark Erickson

## Installation

You need to install flex in a UNIX environment. sudo apt-get install flex. 

## To Run The Lexical Analyzer

The steps to run the lexical analyzer:

    lex CS411P1Lex.l

    cc lex.yy.c -ll

    ./a.out < test.toy

## Tests

    test.toy is provided by this project
    sample.toy is my own test case

    testOutput.txt is the output of the test.toy
    sampleOutput.txt is the output of my own test case

    test.toy <--> testOutput.txt
    sample.toy <--> sampleOutput.txt

## Project Specifications

1. Keywords which are also reserved words. They cannot be used as identifiers or redefined:
   boolean break class double else extends false for
   if implements int interface newarray println readln
   return string true void while
    
2. An identifier is a sequence of letters, digits, and underscores, starting with a letter. Toy is case-sensitive, e.g., if is a keyword, but IF is an identifier; hello and Hello are two distinct identifiers.

3. White space consists of blanks, newlines, and tabs. White space serves to separate tokens, but is otherwise ignored. Keywords and identifiers must be separated by white space or a token that is neither a keyword nor an identifier. For instance, ifintvoid is a single identifier, not three keywords; while if(23void scans as four tokens.

4. An integer constant can either be specified in decimal (base 10) or hexadecimal (base 16). A decimal integer is a sequence of decimal digits (0-9). A hexadecimal integer must begin with 0X or 0x (that is a zero, not the letter oh) and is followed by a sequence of at least one hexadecimal digits. Hexadecimal digits include the decimal digits and the letters a through f (either upper or lowercase). Examples of valid integers: 8, 012, 0x0, 0X12aE.

5. A double constant is a sequence of at least one digit, a period, followed by any sequence of digits, may be none. Thus, .12 is not a valid double but both 0.12 and 12. are valid. A double can also have an optional exponent, e.g., 12.2E+2 is a double constant. For a double in this sort of scientific notation, the decimal point is required, the sign of the exponent is optional (if not specified, + is assumed), the E can be lower or upper case, and at least one digit after E or e. As above, .12E+2 and 1.2E are invalid, but 12.E+2 is valid. Leading zeroes on the mantissa and exponent are allowed.

6. A string constant is a sequence of characters enclosed in double quotes. Strings can contain any character except a newline or double quote. A string must start and end on a single line, it cannot be split over multiple lines.

7. A boolean constant is either true or false.

8. Operators and punctuation characters include:
   \+   -   *   /   %   <   <=   >   >=   ==  !=   =   ;   ,   .   (   )   [   ]   {   }

9. A single-line comment is started by // and extends to the end of the line. Multi-line comments start with /* and end with the first subsequent */. Any symbol is allowed in a comment except the sequence */ which ends the current comment. Multi-line comments do not nest.
