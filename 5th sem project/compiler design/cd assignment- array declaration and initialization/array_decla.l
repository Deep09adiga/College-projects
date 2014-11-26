%{
#include "y.tab.h"
%}
%%
" " 	{ return SPACE;}
"\""    { return DC;}
";"     { return SM;}
"int" 	{ return INT; }
"float" { return FLOAT ;}
"char"  { return CHAR;}
[a-zA-Z]+	{ return ID; }
"["     { return OSB;}
"]"     { return CSB;}
"{"     { return OFB;}
"}"     { return CFB;}
"="     { return EQ;}
","     { return CM;}
[0-9]+  { return NUM;}
[0-9]+[.]?[0-9]*  { return FNUM;}
.|\n 	 return 0; 
%%
