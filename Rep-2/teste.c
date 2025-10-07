#include <stdio.h>
#include <math.h>

int main(){

float nota[8], max = 0, min = 100000000, soma = 0, aux;
int i = 0, n, j=0;
char nome[32];



while (scanf("%d", &n) != EOF){ // leitura de quantas vezes

    while (i < n){

        scanf("%s", &nome);                 // nome do mergulhador
        for (i=0; i < 7; i++){              // vai contar as notas
            scanf("%f", &nota[i]);
        }

        for (i = 0; i< 6; i++){             // faz uma verificação em cada vetor
            //printf("LOOP: %d\n", i);
            for(j = 0; j < 6; j++){         // organiza o vetor seguinte e o atual
                if (nota[j] > nota[j+1]){   // se a nota atual é maior que a próxima, e assim, o valor vai ser passado pra frente
                    printf("A NOTA ANTERIOR ERA: %f; ", nota[j]);
                    aux = nota[j+1];        // salva a proxima na auxiliar
                    nota[j+1] = nota[j];    // substitui
                    nota[j] = aux;          // coloca a auxiliar na atual
    
                    printf("A NOTA ATUAL E: %f\n", nota[j]);
                }
    
            }
            
        }
        for (i=0; i<7; i++){
            printf("%f ", nota[i]);
        }

        printf("\n %f", nota[7]);
    
    }

    i = 0; // quando ele "finalizar o progarama", o i deve ser zerado novamente
}
    





return 0;
}
