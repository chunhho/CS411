CS411 Project 2 Syntax Analyzer:

This program runs on a linux environment and it requires flex and yacc/bison to be installed. The shift-conflict information can be read in y.output after running the make -f CS411P2Makefile.mk command.

Type the following commands to execute this program:

make -f CS411P2Makefile.mk

./a.out < WorkingTest1.toy > WorkingOutput1.txt

./a.out < WorkingTest2.toy > WorkingOutput2.txt

./a.out < test.toy > TestOutput.txt

./a.out < TestFromP1.toy > FailOutput1.txt

./a.out < FailInput.toy > FailOutput2.txt


To remove the files:

make -f CS411P2Makefile.mk clean

By Chun Ho and Mark Erickson
