#include <stdio.h>
#include <math.h>

int main(){


    int resp = 1;
    float n1, n2, med;


    while (resp == 1){

        scanf("%f", &n1); // lê a primeira nota

        while (n1 > 10 || n1 < 0){ // confere 
      
            printf("nota invalida\n");
            scanf("%f", &n1);
            
        }
    
        scanf("%f", &n2); // le a segunda
    
        while (n2 > 10 || n2 < 0){ // confere
      
            printf("nota invalida\n");
            scanf("%f", &n2);
            
        }
    
        med = (n1 + n2) /2;
    
        printf("media = %.2f\n", med); // exibe a resposta 
        printf("novo calculo (1-sim 2-nao)\n"); // pergunta
        scanf("%d", &resp);
        
        while (resp < 1 || resp > 2){ //confere
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &resp);
        }
    
    }
   

return 0;
}
