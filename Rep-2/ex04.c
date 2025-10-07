#include <stdio.h>
#include <math.h>

int main(){

    // esta versão se trata da questão 4 da lista de repetição 2

    int i=0, n, fib1, fib2, fib3;
    fib1 = -1;
    fib2 = 1;
    scanf("%d", &n);

   
    while (i < n){  

        if (i < n-1){ // caso seja menor que N, printa com espaço após

            fib3 = fib1+fib2;
            printf("%d ", fib3);
            fib1 = fib2;  // primeiro termo vira o segundo
            fib2= fib3;   // segundo termo vira a soma dele com o primeiro

            
        } else { // caso seja igual a N, printa com \n

            fib3 = fib1+fib2;
            printf("%d\n", fib3);
            fib1 = fib2;  // primeiro termo vira o segundo
            fib2= fib3;   // segundo termo vira a soma dele com o primeiro
        }
        
        i++;
    }    

    return 0;


}

    