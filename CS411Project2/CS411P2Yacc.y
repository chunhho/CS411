%{
#include <stdio.h>
int yylex();
void yyerror(char *s);
%}

%start Program
%token _void _id _leftparen _rightparen _leftbrace _rightbrace _leftbracket _rightbracket _semicolon _boolean _double _int _string _class _implements _interface
%token _if _else _break _extends _for _newarray _println _readln _return _while _comma _period _intconstant _doubleconstant _stringconstant _booleanconstant 
%left _assignop
%left _or
%left _and
%left _equal _notequal
%left _less _lessequal _greater _greaterequal
%left _plus _minus
%left _multiplication _division _mod
%right _not
%left _leftbracket _rightbracket _period
%nonassoc IFOnly
%nonassoc _else

%%

Program : Decls {printf("[Reduce %i%s", yyn, "]");}
	;

/* Left-recursion */
Decls : Decl        {printf("[Reduce %i%s", yyn, "]");}
	  | Decls Decl  {printf("[Reduce %i%s", yyn, "]");}
	  ;

Decl : VariableDecl  {printf("[Reduce %i%s", yyn, "]");} 
	 | FunctionDecl  {printf("[Reduce %i%s", yyn, "]");}
	 | ClassDecl     {printf("[Reduce %i%s", yyn, "]");}
	 | InterfaceDecl {printf("[Reduce %i%s", yyn, "]");}
	 ;

VariableDecls : /* zero */        {printf("[Reduce %i%s", yyn, "]");}
	 | VariableDecls VariableDecl {printf("[Reduce %i%s", yyn, "]");}
	 ;

VariableDecl : Variable _semicolon {printf("[Reduce %i%s", yyn, "]");}
	 ;

Variable : Type _id {printf("[Reduce %i%s", yyn, "]");}
	 ;

Type : _int         {printf("[Reduce %i%s", yyn, "]");}
	 | _double      {printf("[Reduce %i%s", yyn, "]");}
	 | _boolean     {printf("[Reduce %i%s", yyn, "]");}
	 | _string      {printf("[Reduce %i%s", yyn, "]");}
	 | Type _leftbracket _rightbracket {printf("[Reduce %i%s", yyn, "]");} 
	 | _id        {printf("[Reduce %i%s", yyn, "]");}
	 ;

FunctionDecl : Type _id _leftparen Formals _rightparen StmtBlock {printf("[Reduce %i%s", yyn, "]");}
	 | _void _id _leftparen Formals _rightparen StmtBlock        {printf("[Reduce %i%s", yyn, "]");}
	 ;

Formals : Variables     {printf("[Reduce %i%s", yyn, "]");}
	 | /* epsilon */    {printf("[Reduce %i%s", yyn, "]");}
	 ;

/* Left-recursion */
Variables : Variable             {printf("[Reduce %i%s", yyn, "]");}
	 | Variables _comma Variable {printf("[Reduce %i%s", yyn, "]");}
	 ;

ClassDecl : _class _id extend implement _leftbrace Fields _rightbrace {printf("[Reduce %i%s", yyn, "]");}
     ;

extend: /* zero */  {printf("[Reduce %i%s", yyn, "]");}
     | _extends _id {printf("[Reduce %i%s", yyn, "]");}
	 ;

implement: /* zero */   {printf("[Reduce %i%s", yyn, "]");}
     | _implements ids  {printf("[Reduce %i%s", yyn, "]");}
     ;

Fields : /* zero */ {printf("[Reduce %i%s", yyn, "]");}
	 | Fields Field {printf("[Reduce %i%s", yyn, "]");}
	 ;

Field : VariableDecl {printf("[Reduce %i%s", yyn, "]");}
	 | FunctionDecl {printf("[Reduce %i%s", yyn, "]");}
	 ;

ids : _id               {printf("[Reduce %i%s", yyn, "]");}
	| ids _comma _id    {printf("[Reduce %i%s", yyn, "]");}
	;

InterfaceDecl : _interface _id _leftbrace Prototypes _rightbrace {printf("[Reduce %i%s", yyn, "]");}
	 ;

Prototypes : /* zero */     {printf("[Reduce %i%s", yyn, "]");}
	 | Prototypes Prototype {printf("[Reduce %i%s", yyn, "]");}
	 ;

Prototype : Type _id _leftparen Formals _rightparen _semicolon {printf("[Reduce %i%s", yyn, "]");}
	 | _void _id _leftparen Formals _rightparen _semicolon     {printf("[Reduce %i%s", yyn, "]");}
	 ;

StmtBlock : _leftbrace VariableDecls Stmts _rightbrace {printf("[Reduce %i%s", yyn, "]");}
	 ;

Stmts : /* zero */ {printf("[Reduce %i%s", yyn, "]");}
	 | Stmts Stmt  {printf("[Reduce %i%s", yyn, "]");}
	 ;

Stmt : ExprA _semicolon {printf("[Reduce %i%s", yyn, "]");}
	 | IfStmt           {printf("[Reduce %i%s", yyn, "]");}
	 | WhileStmt        {printf("[Reduce %i%s", yyn, "]");}
	 | ForStmt          {printf("[Reduce %i%s", yyn, "]");}
	 | BreakStmt        {printf("[Reduce %i%s", yyn, "]");}
	 | ReturnStmt       {printf("[Reduce %i%s", yyn, "]");}
	 | PrintStmt        {printf("[Reduce %i%s", yyn, "]");}
	 | StmtBlock        {printf("[Reduce %i%s", yyn, "]");}
	 ;

ExprA : /* zero */ {printf("[Reduce %i%s", yyn, "]");}
     | Expr        {printf("[Reduce %i%s", yyn, "]");}
     ;

IfStmt : _if _leftparen Expr _rightparen Stmt %prec IFOnly {printf("[Reduce %i%s", yyn, "]");}
	 | _if _leftparen Expr _rightparen Stmt _else Stmt     {printf("[Reduce %i%s", yyn, "]");}
     ;

WhileStmt : _while _leftparen Expr _rightparen Stmt {printf("[Reduce %i%s", yyn, "]");}
	 ;

ForStmt : _for _leftparen ExprA _semicolon Expr _semicolon ExprA _rightparen Stmt {printf("[Reduce %i%s", yyn, "]");}
	 ;

BreakStmt : _break _semicolon {printf("[Reduce %i%s", yyn, "]");}
	 ;

ReturnStmt : _return ExprA _semicolon {printf("[Reduce %i%s", yyn, "]");}
	 ;

PrintStmt : _println _leftparen Exprs _rightparen _semicolon {printf("[Reduce %i%s", yyn, "]");}
	 ;

Exprs : Expr             {printf("[Reduce %i%s", yyn, "]");}
	 | Exprs _comma Expr {printf("[Reduce %i%s", yyn, "]");}
	 ;	 

Expr : Lvalue _assignop Expr {printf("[Reduce %i%s", yyn, "]");}
	 | Constant             {printf("[Reduce %i%s", yyn, "]");} 
	 | Lvalue               {printf("[Reduce %i%s", yyn, "]");}
	 | Call                 {printf("[Reduce %i%s", yyn, "]");}
	 | _leftparen Expr _rightparen {printf("[Reduce %i%s", yyn, "]");}
	 | Expr _plus Expr             {printf("[Reduce %i%s", yyn, "]");}
	 | Expr _minus Expr            {printf("[Reduce %i%s", yyn, "]");}
	 | Expr _multiplication Expr   {printf("[Reduce %i%s", yyn, "]");}
	 | Expr _division Expr         {printf("[Reduce %i%s", yyn, "]");}
	 | Expr _mod Expr              {printf("[Reduce %i%s", yyn, "]");}
	 | _minus Expr  %prec _multiplication {printf("[Reduce %i%s", yyn, "]");} 
	 | Expr _less  Expr                   {printf("[Reduce %i%s", yyn, "]");}
	 | Expr _lessequal Expr               {printf("[Reduce %i%s", yyn, "]");}
	 | Expr _greater Expr                 {printf("[Reduce %i%s", yyn, "]");}
	 | Expr _greaterequal Expr            {printf("[Reduce %i%s", yyn, "]");}
	 | Expr _equal Expr                   {printf("[Reduce %i%s", yyn, "]");}
	 | Expr _notequal Expr                {printf("[Reduce %i%s", yyn, "]");}      
	 | Expr _and Expr                     {printf("[Reduce %i%s", yyn, "]");}
	 | Expr _or Expr                      {printf("[Reduce %i%s", yyn, "]");}
	 | _not Expr                          {printf("[Reduce %i%s", yyn, "]");}
	 | _readln"()"                        {printf("[Reduce %i%s", yyn, "]");}
	 | _newarray _leftparen _intconstant _comma Type _rightparen {printf("[Reduce %i%s", yyn, "]");}
	 ;

 
/*Shift-Reduce */
Lvalue : _id 				{printf("[Reduce %i%s", yyn, "]");} 
	 | Lvalue LvalueX   			{printf("[Reduce %i%s", yyn, "]");}
	 ;

LvalueX : _leftbracket Expr _rightbracket  	{printf("[Reduce %i%s", yyn, "]");}
   	| LvalueX ProdPDANDID  			{printf("[Reduce %i%s", yyn, "]");} 
	;

Call : _id _leftparen Actuals _rightparen 			{printf("[Reduce %i%s", yyn, "]");}
	 | _id ProdPDANDID _leftparen Actuals _rightparen    {printf("[Reduce %i%s", yyn, "]");} 
	 ;

ProdPDANDID : _period _id
	 ;

Actuals : /* Epsilon */ {printf("[Reduce %i%s", yyn, "]");}
	 | Exprs            {printf("[Reduce %i%s", yyn, "]");}
	 ;
	 
Constant : _intconstant {printf("[Reduce %i%s", yyn, "]");}
	 | _doubleconstant  {printf("[Reduce %i%s", yyn, "]");}
	 | _stringconstant  {printf("[Reduce %i%s", yyn, "]");}
	 | _booleanconstant {printf("[Reduce %i%s", yyn, "]");}
	 ;
%%

int main(){

    yyparse();
    printf("\n");
    return 0;
}

void yyerror (char *s) {fprintf(stderr, "%s\n", s);}

int yywrap (void) {return 1;}









