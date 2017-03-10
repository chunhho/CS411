CS411P2: lex.yy.c y.tab.c
	gcc lex.yy.c y.tab.c -ly -ll

lex.yy.c: y.tab.c CS411P2Lex.l
	lex CS411P2Lex.l

y.tab.c: CS411P2Yacc.y
	yacc -dyv CS411P2Yacc.y
	sed -i '1418i printf("[Shift]");' y.tab.c

clean:	
	rm -f lex.yy.c y.tab.c y.tab.h a.out y.output
	echo clean done
