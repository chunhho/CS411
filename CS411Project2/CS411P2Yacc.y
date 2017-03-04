%{
include <stdio.h>
%}

%start Program
%token _void _id _leftparen _rightparen _leftbrace _rightbrace _leftbracket _rightbracket _semicolon _boolean _double _int _string _class _implements _interface
%token _if _else _break _class _extends _false _for _newarray _println _readln _return _while _comma _period _intconstant _doubleconstant _stringconstant _booleanconstant 
%left _assignop
%left _or
%left _and
%left _equal _notequal
%left _less _lessequal _greater _greaterequal
%left _plus _minus
%left _multiplication _division _mod
%right _not
%left _leftbracket _rightbracket _period

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
	| ids _comma _id
	;

InterfaceDecl : _interface _id _leftbracket Prototypes _rightbracket
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

ReturnStmt : _return ExprA _semicolon
	 ;

PrintStmt : _println _leftparen Exprs _rightparen _semicolon
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
	 | _minus Expr  %prec _multiplication 
	 | Expr _less  Expr 
	 | Expr _lessequal Expr 
	 | Expr _greater Expr 
	 | Expr _greaterequal Expr 
	 | Expr _equal Expr 
	 | Expr _notequal Expr 
	 | Expr _and Expr 
	 | Expr _or Expr 
	 | _not Expr
	 | _readln"()" 
	 | _newarray _leftparen _intconstant _comma Type _rightparen
	 ;


Lvalue : _id 
	 | Lvalue _rightbrace Expr _rightbrace  
	 | Lvalue _period _id
	 ;

Call : _id _leftparen Actuals _rightparen 
	 | _id _period _id _leftparen Actuals _rightparen
	 ;

Actuals : /* Epsilon */ 
	 | Exprs
	 ;
	 
Constant : _intconstant 
	 | _doubleconstant 
	 | _stringconstant 
	 | _booleanconstant
	 ;
%%
