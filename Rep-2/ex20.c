#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(){

    int n, i, j, p, prox, atual, sinal = 0, sinalatual, sinalprox;


    while( scanf("%d %d", &p, &n) != EOF ){

        scanf("%d", &atual); // lê o cano atual
        //printf("ESSE E O PRIMEIRO: %d\n", atual);

        for (i = 1; i<n; i++){ // começa em um pq o primeiro cano
            
            scanf("%d", &prox); 

            //printf("ESSE E O PROXIMO: %d\n", prox);

            if( prox >= atual && (atual +  p) > prox){   // se proximo cano for maior e o salto for alto o suficiente, ele consegue passar
                atual = prox;
                //printf("ESSE E O ATUAL, CASO SEJA MAIOR: %d\n", atual);
            } else {                 
                if (prox < atual && (atual - prox) <= p ){  // se o proximo cano for menor e a diferença não for maior que o salto, ele passa
                    atual = prox;
                    //printf("ESSE E O ATUAL, CASO SEJA MENOR: %d\n", atual);
                } else {            // se não for nenhum dos casos, ele morre, mas continua recebendo variável
                    sinal= 1;
                    sinalatual = atual;
                    sinalprox = prox;
                    //i = n;
                    //printf("ESSE E O PRIMEIRO SINAL: %d; ESSE E O PROX NO SINAL: %d; ESSE É O PULO: %d\n", atual, prox, p);
                   
                }
            }
        }

        if( sinal == 0){  // se n bater a flag, ent o sapo passou por todos os canos
            printf("YOU WIN\n");
        } else {
            printf("GAME OVER\n");
        }

    }

    sinal = 0; // reseta variavel

return 0;
}
