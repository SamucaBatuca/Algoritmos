#include <stdio.h>
#include <math.h>

int main(){

float nota[8], soma = 0, aux, dif;
int i = 0, n, j, cont=0;
char nome[32];



while (scanf("%d", &n) != EOF){ // leitura de quantas vezes

    while (cont < n){

        scanf("%s %f", &nome, &dif);  // nome do mergulhador e a dificuldade do teste
        for (i=0; i < 7; i++){   // vai contar as notas
            scanf("%f", &nota[i]);
        }

        for (i = 0; i< 6; i++){             // faz uma verificação em cada vetor
            //printf("LOOP: %d\n", i);
            for(j = 0; j < 6; j++){         // organiza o vetor seguinte e o atual
                if (nota[j] > nota[j+1]){   // se a nota atual é maior que a próxima, e assim, o valor vai ser passado pra frente
                    //printf("A NOTA ANTERIOR ERA: %f; ", nota[j]);
                    aux = nota[j+1];        // salva a proxima na auxiliar
                    nota[j+1] = nota[j];    // substitui
                    nota[j] = aux;          // coloca a auxiliar na atual
    
                    //printf("A NOTA ATUAL E: %f\n", nota[j]);
                }
    
            }
        }


        //printf("NOTA MAXIMA: %f; NOTA MINIMA: %f\n", max, min);

        for (i = 1; i<6; i++){ // vai somar ignorando a primeira e a ultima pq elas são a menor e a maior nota respectivamente
            soma = soma + (nota[i] * dif); // já multiplica pela dificuldade pq da no mesmo e poupa linha de codigo
            //printf("soma atual: %f \n", soma);
        }
        
        printf("%s %.2f\n", nome, soma);

        cont++;
        soma=0; // reseta pra cada ciclo interno
    }

    // área das variaveis que deverão ser resetadas a cada inicialização
    cont = soma=0;


}
    





return 0;
}
