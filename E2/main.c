/* main.c */

#include <stdio.h>
#include "token.h"
extern int yylex(); // Declaração da função yylex()
extern int yylval;
int main() {
    int token;
  
    while ((token = yylex())) {
        switch (token) {
            case NUMBER:
                printf("constante decimal: %d\n", yylval);
                break;
            case PLUS:
            case MINUS:
            case TIMES:
            case DIV:
                printf("código do token: %d\n", token);
                break;
            default:
                printf("código do token: %d\n", token);
        }
    }
    return 0;
}

