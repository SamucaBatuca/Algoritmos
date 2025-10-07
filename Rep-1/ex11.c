#include <stdio.h>
#include <math.h>

int main() {
    int i, n, j;  // ou qualquer quantidade desejada

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {  // repete até i ser igual a n

        for (j = 1; j <= 3; j++){ // loop dos 3 prints

            if (j < 3) {   // verifica se é menor que 3, pra poder printar o espaço
                printf("%.0f ", pow(i, j));  

            } else {       // caso seja o ultimo, printa sem espaço e com \n
                printf("%.0f", pow(i, j));   
            }
            
        }

        printf("\n"); 
    }

    
    return 0;
}