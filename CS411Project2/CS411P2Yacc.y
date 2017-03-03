
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

Variable : Type id
	 ;

Type : int 
	 | double 
	 | boolean 
	 | string 
	 | Type "[]"  
	 | id
	 ;

FunctionDecl : Type id "(" Formals ")" StmtBlock 
	 | void id "(" Formals ")" StmtBlock
	 ;

Formals : Variables
	 | /* epsilon */
	 ;

/* Left-recursion */
Variables : Variable
	 | Variables "," Variable
	 ;

ClassDecl : class id "<" extends id ">" "<" implements ids ">" "{" Fields "}"
	 ;
Fields : /* zero */
	 | Fields Field
	 ;

Field : VariableDecl
	 | FunctionDecl
	 ;

ids : id
	| ids"," id
	;

InterfaceDecl : interface id "{" Prototypes "}"
	 ;

Prototypes : /* zero */
	 | Prototypes Prototype
	 ;

Prototype : Type id "(" Formals ")" _semicolon
	 | void id "(" Formals ")" _semicolon
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

Lvalue : id 
	 | Lvalue "[" Expr "]"  
	 | Lvalue "." id
	 ;

Call : id "(" Actuals ")" 
	 | id "." id "(" Actuals ")"
	 ;

Actuals : /* Epsilon */ 
	 : Exprs
	 ;
	 
Constant ":" intconstant 
	 | doubleconstant 
	 | stringconstant 
	 | booleanconstant
	 ;