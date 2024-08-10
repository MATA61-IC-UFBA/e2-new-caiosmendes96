/* recognize tokens for the calculator */

%option noyywrap nodefault yylineno
%{
#include "token.h"
int yylval;
%}

%%
[0-9]+ { 
    yylval = atoi(yytext);
    return NUMBER;
    }
    
"+" { return PLUS; }
"-" { return MINUS; }
"*" { return TIMES; }
"/" { return DIV; } 
[ \t] {}
.       { return ERROR; }
%%




