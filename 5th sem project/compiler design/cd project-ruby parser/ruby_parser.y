%{
	#include<stdio.h>
	#include<stdlib.h>
	extern FILE * yyin;
%}
%token CL_ST SPACE ID EN EQ NUM OSB CSB CM DEF_ST OB CB WHI_ST FOR_ST IN_ST TWO THREE IF_ST ELSEIF_ST ELSE_ST LE GE DEQ NE LT GT OR AND
%%
S 	: CL_ST SPACE ID BDY EN {printf("Input accepted\n"); exit(0);}
BDY 	: VAR | VAR BDY 
BDY 	: ARR | ARR BDY 
BDY 	: FUN | FUN BDY 
BDY	: WHI | WHI BDY 
BDY	: FOR | FOR BDY 
BDY	: IF | IF BDY 

VAR 	: ID EQ ID | ID EQ NUM

ARR 	: ID EQ OSB N CSB
N 	: NUM | NUM CM N

FUN 	: DEF_ST SPACE ID SPACE B BDY EN
B	: OB CB | OB PARAM CB | PARAM
PARAM 	: ID | ID EQ ID | ID EQ NUM |ID CM PARAM | ID EQ ID CM PARAM | ID EQ NUM CM PARAM

WHI 	: WHI_ST SPACE WHI_CON BDY EN
WHI_CON : ID RELOP OPR
RELOP 	: LE | GE | DEQ | NE | OR | AND | LT | GT
OPR	: ID | NUM

FOR 	: FOR_ST SPACE FOR_CON BDY EN
FOR_CON : ID SPACE IN_ST SPACE RANGE
RANGE 	: OB NUM TWO NUM CB | OB NUM THREE NUM CB | OB ID CB

IF 	: IF_ST SPACE IF_CON BDY EN|IF_ST SPACE IF_CON BDY ELIF EN
ELIF 	: ELSEIF_ST SPACE IF_CON BDY | ELSEIF_ST SPACE IF_CON BDY ELS | ELSEIF_ST SPACE IF_CON BDY ELIF | ELS
ELS 	: ELSE_ST  BDY
IF_CON 	: ID | ID RELOP ID | ID RELOP NUM
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
	yyin = fopen("input_file.rb","r");
	if(!yyparse())
		printf("Valid string.....\n");
	return 0;
}
