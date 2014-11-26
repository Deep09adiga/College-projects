%{
#include<stdio.h>
#include "y.tab.h"
%}
%%
"class"		{ printf("class");return CL_ST;}
"end"		{ printf("end");return EN;}
"def" 		{ printf("def");return DEF_ST;}
"while" 	{ printf("while");return WHI_ST;}
"for" 		{ printf("for");return FOR_ST;}
"in" 		{ printf("in");return IN_ST;}
"if" 		{ printf("if");return IF_ST;}
"elif" 		{ printf("elif");return ELSEIF_ST;}
"else" 		{ printf("else");return ELSE_ST;}
" " 		{ printf(" ");return SPACE;}
[a-zA-Z]+[0-9]*	{ printf("id");return ID;}
"=" 		{ printf("=");return EQ;}
[0-9]+ 		{ printf("9");return NUM;}
"[" 		{ printf("[");return OSB;}
"]" 		{ printf("]");return CSB;}
"," 		{ printf(",");return CM;}
"(" 		{ printf("(");return OB;}
")" 		{ printf(")");return CB;}
".." 		{ printf("..");return TWO;}
"..." 		{ printf("...");return THREE;}
"<="         	{ printf("<=");return LE;}
">="         	{ printf(">=");return GE;}
"<"         	{ printf("<");return LT;}
">"         	{ printf(">");return GT;}
"=="         	{ printf("==");return DEQ;}
"!="          	{ printf("!=");return NE;}
"||"           	{ printf("||");return OR;}
%%
