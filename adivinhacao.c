//for compile run `gcc advinhacao.c -o advinhacao.out/.exe`

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RETRIE_NUMBER 3

int main() {
    printf("************************************\n");
    printf("* Bem vindo ao jogo de adivinhação *\n");
    printf("*                                  *\n");
    printf("*           (  )                   *\n");
    printf("*            ||                    *\n");
    printf("*            ||                    *\n");
    printf("*         ___|""|__.._               *\n");
    printf("*       /____________\\             *\n");
    printf("*jrei   \\____________/~~~.         *\n");
    printf("*in www.asciiart.eu                *\n");
    printf("*                                  *\n");
    printf("************************************\n");
    
    srand(time(0));
    int secretnumber = rand() % 100;
    int kick;
    int retries = 1;
    double score = 1000;
    
    
    while (1) {
        
        printf("Tentativa %d\n", retries);
            
        printf("Qual é seu chute?");
        scanf("%d", &kick);
            
        printf("Seu chute foi %d\n", kick);
        
        
        if(kick < 0) {
            printf("Você não pode chutar números negativos\n");
            continue;
        }
                
        
        if(kick == secretnumber) {
            printf("Parabéns! Você acertou!\n");
            break;
        } else if(kick > secretnumber) {
            printf("Seu chute foi maior do que o número secreto!\n");
        } else {
            printf("Seu chute foi menor do que o número secreto!\n");
        }
        
        retries++;
        
        double dawnscore = abs(kick - secretnumber) / 2.0;
        score = score - dawnscore;
    }
    
    printf("Fim de jogo.\n");
    printf("Voce acertou em %d tentativas\n", retries);
    printf("Voce fez um total de %.1f pontos", score);
    
}
