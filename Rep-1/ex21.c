#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(){


    int i, n, j, cont = 0;
    char resp1[32], resp2[32];

    scanf("%d", &n);

    
    for (i = 0; i < n; i++){ 
    

        scanf("%s %s", &resp1, &resp2); // recebe as respostas

        for (j= 0; j < 32; j++){ // faz resp1 ser toda maiúscula
            resp1[j] = toupper(resp1[j]);
           
        }
        //printf("%s\n", resp1);

        for (j = 0; j < 32; j++){ // faz resp2 ser toda maiúscula
            resp2[j] = toupper(resp2[j]);
          
        }
        //printf("%s\n", resp2);

        cont = cont + 1;  // para a contagem de casos
        // para pedra
        if(strcmp(resp1, "PEDRA") == 0 ){
            if(strcmp(resp2,"LAGARTO") == 0 || strcmp(resp2,"TESOURA") == 0){ // se a segunda resposta for oq a pedra vence
                printf("Caso #%d: Bazinga!\n", cont);
            } else {
                if(strcmp(resp2, "SPOCK") == 0 || strcmp(resp2, "PAPEL") == 0 ){ // se a segunda resposta for oq vence a pedra
                    printf("Caso #%d: Raj trapaceou!\n", cont);
                } else {
                    printf("Caso #%d: De novo!\n", cont);  // caso seja pedra
                }
            }
        } else {

            // para papel

            if(strcmp(resp1, "PAPEL") == 0 ){
                if(strcmp(resp2,"SPOCK") == 0 || strcmp(resp2,"PEDRA") == 0){ // se a segunda resposta for oq o paple vence
                    printf("Caso #%d: Bazinga!\n", cont);
                } else {
                    if(strcmp(resp2, "TESOURA") == 0 || strcmp(resp2, "LAGARTO") == 0 ){ // se a segunda resposta for oq vence o papel
                        printf("Caso #%d: Raj trapaceou!\n", cont);
                    } else {
                        printf("Caso #%d: De novo!\n", cont);  // caso seja papel
                    }
                }
            } else {

                //para tesoura
                if(strcmp(resp1, "TESOURA") == 0 ){
                    if(strcmp(resp2,"PAPEL") == 0 || strcmp(resp2,"LAGARTO") == 0){ // se a segunda resposta for oq a tesoura vence
                        printf("Caso #%d: Bazinga!\n", cont);
                    } else {
                        if(strcmp(resp2, "PEDRA") == 0 || strcmp(resp2, "SPOCK") == 0 ){ // se a segunda resposta for oq vence a tesoura
                            printf("Caso #%d: Raj trapaceou!\n", cont);
                        } else {
                            printf("Caso #%d: De novo!\n", cont);  // caso seja tesoura
                        }
                    }
                } else {

                    //para lagarto
                    if(strcmp(resp1, "LAGARTO") == 0 ){
                        if(strcmp(resp2,"PAPEL") == 0 || strcmp(resp2,"SPOCK") == 0){ // se a segunda resposta for oq o lagarto vence
                            printf("Caso #%d: Bazinga!\n", cont);
                        } else {
                            if(strcmp(resp2, "TESOURA") == 0 || strcmp(resp2, "PEDRA") == 0 ){ // se a segunda resposta for oq vence o lagarto
                                printf("Caso #%d: Raj trapaceou!\n", cont);
                            } else {
                                printf("Caso #%d: De novo!\n", cont);  // caso seja lagarto
                            }
                        }
                    } else {
                        // para spock
                        if(strcmp(resp2,"PEDRA") == 0 || strcmp(resp2,"TESOURA") == 0){ // se a segunda resposta for oq spok vence
                            printf("Caso #%d: Bazinga!\n", cont);
                        } else {
                            if(strcmp(resp2, "PAPEL") == 0 || strcmp(resp2, "LAGARTO") == 0 ){ // se a segunda resposta for oq vence o spock
                                printf("Caso #%d: Raj trapaceou!\n", cont);
                            } else {
                                printf("Caso #%d: De novo!\n", cont);  // caso seja spock
                            }
                        }   
                    }
        
                }
    
            }




        }
       
    }
   
    

    return 0;


}

    