%{
	#include<stdio.h>
%}
%token SPACE SM INT FLOAT CHAR CM EQ ID OSB NUM CSB OFB CFB FNUM DC
%%
S : T

T : INT SPACE INT_I SM
T : FLOAT SPACE FLOAT_F SM
T : CHAR SPACE CHAR_CH SM

INT_I : INT_X | INT_C
INT_X : INT_P INT_Q | INT_P INT_Q CM INT_X
INT_C : INT_P INT_Q EQ INT_R | INT_P INT_Q EQ INT_R CM INT_C
INT_P : ID
INT_Q : OSB CSB |OSB CSB INT_Q| OSB NUM CSB | OSB NUM CSB INT_Q
INT_R : OFB INT_N CFB | OFB INT_R CFB | OFB INT_N CFB CM INT_R
INT_N : NUM | NUM CM INT_N

FLOAT_F : FLOAT_X | FLOAT_C
FLOAT_X : FLOAT_P FLOAT_Q | FLOAT_P FLOAT_Q CM FLOAT_X
FLOAT_C : FLOAT_P FLOAT_Q EQ FLOAT_R | FLOAT_P FLOAT_Q EQ FLOAT_R CM FLOAT_C
FLOAT_P : ID
FLOAT_Q : OSB NUM CSB | OSB NUM CSB FLOAT_Q
FLOAT_R : OFB FLOAT_N CFB | OFB FLOAT_R CFB | OFB FLOAT_N CFB CM FLOAT_R
FLOAT_N : FNUM | FNUM CM FLOAT_N

CHAR_CH : CHAR_X | CHAR_C
CHAR_X : CHAR_P CHAR_Q | CHAR_P CHAR_Q CM CHAR_X
CHAR_C : CHAR_P CHAR_Q EQ CHAR_R | CHAR_P CHAR_Q EQ CHAR_R CM CHAR_C
CHAR_P : ID
CHAR_Q : OSB NUM CSB | OSB NUM CSB CHAR_Q
CHAR_R : DC ID DC

;
%%

int yyerror(){
	printf("Not a valid string....\n");
	return 0;
}

int yywrap(){
	return 1;
}

int main(){
	if(!yyparse())
		printf("Valid string.....\n");
	return 0;
}
