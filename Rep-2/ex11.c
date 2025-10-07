#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(){

char p1[101], p2[101],resp1[6], resp2[6];
int n, i=0, j, r1, r2, c;




while (scanf("%d", &n) != EOF){ // lê e compara se n é igual a EOF
   

    while (i < n ){  // enquanto i for menor que a quantidade de pessoas

        scanf("%s %s %s %s", &p1, &resp1, &p2, resp2);


        for(j = 0; j < 6; j++){  // garante que a resposta estará em maíusculo para futura comparação
            resp1[j] = toupper(resp1[j]);
            resp2[j] = toupper(resp2[j]);
        }
        

        //printf("ESSA É A RESPOSTA 1 ANTES: %s; ESSA É A RESPOSTA 2 ANTES: %s\n", resp1, resp2);

       /* // ESSE BLOCO VAI GARANTIR QUE, SE PELO MENOS UMA DAS RESPOSTAS FOR VÁLIDA, O JOGO CONTINUA
        if (strcmp(resp1, "IMPAR") == 0 ){  //R1 é impar
            strcpy(resp2, "PAR");          

            printf("PRINTEI O PRIMEIRO\n");
        } else {
            if (strcmp(resp1,"PAR") == 0){  // R1 é par
                strcpy(resp2, "IMPAR");

                printf("PRINTEI O SEGUNDO\n");
            } else {
                if (strcmp(resp2,"IMPAR") == 0){  // R2 é impar
                    strcpy(resp1, "PAR");

                    printf("PRINTEI O TERCEIRO\n");
                } else {                     //R2 é par
                    strcpy(resp1, "IMPAR");


                    printf("PRINTEI O QUARTO\n");
                }
                
            }
            
        }

*/
        //printf("PRIMEIRA RESPOSTA: %s; SEGUNDA RESPOSTA: %s\n", resp1, resp2);

        scanf("%d %d", &r1, &r2);  //lê os números colocados

        if ((r1+r2) % 2 == 0){ // caso o resultado seja part
            if (strcmp(resp1,"PAR") == 0){ // se o primeiro disse par
                printf("%s\n", p1);
            } else {                       // se o segundo d isse par
                printf("%s\n", p2);
            }
        } else { // se o resultado for impar
            if (strcmp(resp1,"IMPAR") == 0){ // se o primeiro disse impar
                printf("%s\n", p1);
            } else {                         // se o segundo disse impar
                printf("%s\n", p2);
            }
        
        }
        
        i++; // incrementa o contador

        
    }


    // área para reiniciar variáveis
    i = 0;


}


    





return 0;
}
