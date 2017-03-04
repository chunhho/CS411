%{
include <stdio.h>
%}

%start Program
%token _leftbracket _rightbracket _period
%token _not _minus
%token _multiplication _division _mod
%token _plus _minus
%token _less _lessequal _greater _greaterequal
%token _equal _notequal
%token _and
%token _or
%token _assignop
%token _void _id _leftparen _rightparen _doubleconstant _stringconstant _leftbrace _rightbrace _semicolon _boolean _double _int _string _class _implements

%%

Program : Decls
	;

/* Left-recursion */
Decls : Decl
	  | Decls Decl
	  ;

Decl : VariableDecl 
	 | FunctionDecl 
	 | ClassDecl 
	 | InterfaceDecl
	 ;

VariableDecls : /* zero */
	 | VariableDecls VariableDecl
	 ;

VariableDecl : Variable _semicolon
	 ;

Variable : Type _id
	 ;

Type : _int 
	 | _double 
	 | _boolean 
	 | _string 
	 | Type "[]"  
	 | _id
	 ;

FunctionDecl : Type _id _leftparen Formals _rightparen StmtBlock 
	 | _void _id _leftparen Formals _rightparen StmtBlock
	 ;

Formals : Variables
	 | /* epsilon */
	 ;

/* Left-recursion */
Variables : Variable
	 | Variables _comma Variable
	 ;

ClassDecl : _class _id extend implement _leftbracket Fields _rightbracket
     ;

extend: /* zero */
     | _extends _id
	 ;

implement: /* zero */
     | _implements ids
     ;

Fields : /* zero */
	 | Fields Field
	 ;

Field : VariableDecl
	 | FunctionDecl
	 ;

ids : _id
	| ids_comma _id
	;

InterfaceDecl : interface _id _leftbracket Prototypes _rightbracket
	 ;

Prototypes : /* zero */
	 | Prototypes Prototype
	 ;

Prototype : Type _id _leftparen Formals _rightparen _semicolon
	 | _void _id _leftparen Formals _rightparen _semicolon
	 ;

StmtBlock : _leftbracket VariableDecls Stmts _rightbracket
	 ;

Stmts : /* zero */
	 | Stmts Stmt
	 ;

Stmt : ExprA _semicolon
	 | IfStmt
	 | WhileStmt 
	 | ForStmt 
	 | BreakStmt 
	 | ReturnStmt 
	 | PrintStmt 
	 | StmtBlock
	 ;

ExprA : /* zero */
     | Expr
     ;

IfStmt : _if _leftparen Expr _rightparen Stmt else
	 ;

else : /* zero */
     | _else Stmt
     ; 


WhileStmt : _while _leftparen Expr _rightparen Stmt
	 ;

ForStmt : _for _leftparen ExprA _semicolon Expr _semicolon ExprA _rightparen Stmt
	 ;

BreakStmt : _break _semicolon
	 ;

ReturnStmt : return ExprA _semicolon
	 ;

PrintStmt : println _leftparen Exprs _rightparen _semicolon
	 ;

Exprs : Expr
	 | Exprs _comma Expr
	 ;	 

Expr : Lvalue _assignop Expr 
	 | Constant 
	 | Lvalue 
	 | Call 
	 | _leftparen Expr _rightparen 
	 | Expr _plus Expr 
	 | Expr _minus Expr 
	 | Expr _multiplication Expr 
	 | Expr _division Expr 
	 | Expr _mod Expr 
	 | "-" Expr 
	 | Expr _less  Expr 
	 | Expr _lessequal Expr 
	 | Expr _greater Expr 
	 | Expr _greaterequal Expr 
	 | Expr _equal Expr 
	 | Expr _notequal Expr 
	 | Expr _and Expr 
	 | Expr _or Expr 
	 | "!" Expr
	 | _readln"()" 
	 | _newarray _leftparen _intconstant _comma Type _rightparen
	 ;

Lvalue : id 
	 | Lvalue _rightbrace Expr _rightbrace  
	 | Lvalue _period _id
	 ;

Call : id _leftparen Actuals _rightparen 
	 | _id _period _id _leftparen Actuals _rightparen
	 ;

Actuals : /* Epsilon */ 
	 : Exprs
	 ;
	 
Constant : _intconstant 
	 | _doubleconstant 
	 | _stringconstant 
	 | _booleanconstant
	 ;
%%
