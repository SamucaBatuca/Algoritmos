#include <stdio.h>
#include <math.h>

int main() {
    int i, q, j, n;  

    scanf("%d", &q); // le quantos numeros

    for (i = 0; i < q; i++) {  // repete até i ser igual a n

        scanf("%d", &n);

        if (n>0){ // no caso de ser positivo
            if (n % 2 == 0){
                printf("EVEN POSITIVE\n"); // no caso de ser par
            } else {
                printf("ODD POSITIVE\n");  // no caso de ser impar
            }
        } else { // no caso de ser negativo
            if ( n < 0){
                if (n % 2 == 0){
                    printf("EVEN NEGATIVE\n"); // no caso de ser par
                } else {
                    printf("ODD NEGATIVE\n");  // no caso de ser impar
                }
            } else { // se for zero
                printf("NULL\n");
            }
        }

    
    }

    
    return 0;
}