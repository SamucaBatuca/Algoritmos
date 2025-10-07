#include <stdio.h>
#include <math.h>

int main(){


    int i, j, x, y, aux;
    scanf("%d %d", &x, &y);
    
    // incremento os valores recebidos para que o for não teste os números inseridos
    x = x+1;
    y = y+1;

    if (y>x){  // ordena para que X seja o maior numero
    
        aux = x;  // auxiliar vai receber o menor
        x = y;   // x se torna o maior valor
        y = aux;  // y se torna o menor valor

    } else {    // caso x já seja o maior valor
        aux = y; // auxiliar recebe o menor valor para ser utilizada como condição de continuidade do for
    }
 
    for (i = 1; i < x-aux; i++){  // utilizo a auxiliar para manter o valor fixo, já que y será alterado no loop
        
        if ( y % 5 == 2 || y % 5 == 3){
            printf("%d\n", y);
        }
        y = y+1;
    }
   

    return 0;


}

    