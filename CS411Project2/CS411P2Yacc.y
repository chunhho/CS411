
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

Type : int 
	 | double 
	 | boolean 
	 | string 
	 | Type "[]"  
	 | _id
	 ;

FunctionDecl : Type _id "(" Formals ")" StmtBlock 
	 | vo_id _id "(" Formals ")" StmtBlock
	 ;

Formals : Variables
	 | /* epsilon */
	 ;

/* Left-recursion */
Variables : Variable
	 | Variables "," Variable
	 ;

ClassDecl : class _id "<" extends _id ">" "<" implements ids ">" "{" Fields "}"
	 ;
Fields : /* zero */
	 | Fields Field
	 ;

Field : VariableDecl
	 | FunctionDecl
	 ;

ids : _id
	| ids"," _id
	;

InterfaceDecl : interface _id "{" Prototypes "}"
	 ;

Prototypes : /* zero */
	 | Prototypes Prototype
	 ;

Prototype : Type _id "(" Formals ")" _semicolon
	 | vo_id _id "(" Formals ")" _semicolon
	 ;

StmtBlock : "{" VariableDecls Stmts "}"
	 ;

Stmts : /* zero */
	 | Stmts Stmt
	 ;

Stmt : "<" Expr ">" _semicolon
	 | IfStmt
	 | WhileStmt 
	 | ForStmt 
	 | BreakStmt 
	 | ReturnStmt 
	 | PrintStmt 
	 | StmtBlock
	 ;

IfStmt : if "(" Expr ")" Stmt "<" else Stmt ">"
	 ;


WhileStmt : while "(" Expr ")" Stmt
	 ;

ForStmt : for "(" "<" Expr ">" _semicolon Expr _semicolon "<" Expr ">" ")" Stmt
	 ;

BreakStmt : break _semicolon
	 ;

ReturnStmt : return "<" Expr ">" _semicolon
	 ;

PrintStmt : println "(" Exprs ")" _semicolon
	 ;

Exprs : Expr
	 | Exprs"," Expr
	 ;	 

Expr : Lvalue "=" Expr 
	 | Constant 
	 | Lvalue 
	 | Call 
	 | "(" Expr ")" 
	 | Expr "+" Expr 
	 | Expr "–" Expr 
	 | Expr "*" Expr 
	 | Expr "/" Expr 
	 | Expr "%" Expr 
	 | "-" Expr 
	 | Expr "<"  Expr 
	 | Expr "<=" Expr 
	 | Expr ">" Expr 
	 | Expr ">=" Expr 
	 | Expr "==" Expr 
	 | Expr "!=" Expr 
	 | Expr "&&" Expr 
	 | Expr "||" Expr 
	 | "!" Expr
	 | readln"()" 
	 | newarray "(" intconstant "," Type ")"
	 ;

Lvalue : _id 
	 | Lvalue "[" Expr "]"  
	 | Lvalue "." _id
	 ;

Call : _id "(" Actuals ")" 
	 | _id "." _id "(" Actuals ")"
	 ;

Actuals : /* Epsilon */ 
	 : Exprs
	 ;
	 
Constant ":" intconstant 
	 | doubleconstant 
	 | stringconstant 
	 | booleanconstant
	 ;