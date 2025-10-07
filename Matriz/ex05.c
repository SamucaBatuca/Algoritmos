#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int jogo=0, i, j, aux=0, fla=0, escx, escy;
    char tabu[6][6];

    srand(time(NULL)); // randomiza a seed pro rand funcionar
    

    //preenche o mapa
    for( i= 0; i<6; i++){
        for (j = 0; j<6; j++){
            if(i%2 == 0){
                tabu[i][j] = '-';
                if (j == 0 || i == 0){
                    tabu[i][j] = ' ';
                }
            } else {
                if (j%2 == 0){
                    tabu[i][j] = '|';
                } else {
                    tabu[i][j] = ' ';
                }
            } 
            
        }
    }
    tabu[0][0] = ' ';
    aux = 1;
    for (i = 1; i<6; i = i+2){ // preenche com as coordenadas
        tabu[i][0] = '0' + aux;
        tabu[0][i] = '0' + aux;
        aux++;
    }


    // o jogo em si
    while(!fla){

        for(i=0; i<6; i++){ // desenha o tabuleiro
            for (j=0; j<6; j++){
                printf("%c ", tabu[i][j]);
            }
            printf("\n");

        }

        switch(aux){
            case 1: printf("Lugar ja preenchido, escolha outra posicao:\n"); break;
        }

        printf("Escreva as coordenas (X Y) de sua jogada: ");
        scanf("%d %d", &escx, &escy);

        if(tabu[escy][escx] == ' '){ // se tiver vazio
            tabu[escy][escx] == 'X';
            aux = 0;

        } else {
            aux = 1; // mensagem de lugar já ocupado
            
           
        }


        for(i=0; i<6; i++){ // se ganhou
            for (j=0; j<6; j++){
                printf("%c ", tabu[i][j]);
            }
            printf("\n");

        }



    }
    
    

    
   

    // faz n1
    i = rand() % 10;
    j = rand() % 10;
    tabu[i][j] = 1;
    //printf("TESTE DE I:%d; TESTE DE J: %d\n", i, j);



   
    

    



    return 0;
}