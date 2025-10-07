#include <stdio.h>
#include <math.h>

int main(){

    int i, j, x, y, cont = 1;
    scanf("%d %d", &x, &y);
    

    for (i=1; cont < y; i++){  // repete até i ser igual a n

        for (j = 1; j <= x; j++){ // repete x vezes até o \n

            if (j < x) {   // verifica se é menor que x, pra poder printar o espaço
                printf("%d ", cont); 
                cont = cont + 1; 
            } else {       // caso seja o ultimo, printa sem espaço e com \n
                printf("%d\n", cont);
                cont = cont + 1; 
            }

        }
    



    }

    return 0;

  


}

    