#include <stdio.h>
#include <math.h>

int main(){

    int i, n, fib1, fib2, fib3;
    fib1 = -1;
    fib2 = 1;
    scanf("%d", &n);

    ; // printa os dois primeiros termos, que SEMPRE serão estes
    for (i=1; i <= n; i++){  

        if (i < n){ // caso seja menor que N, printa com espaço após

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
        
        
    }    

    return 0;


}

    