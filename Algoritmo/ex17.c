#include <stdio.h>
#include <math.h>

int main(){


    int i, x;
    scanf("%d", &x);
    
    
    for (i = 0; i <10000; i++){  
        
        if ( i % x == 2){ // verifica se o resto é dois e, se for, printa.
            printf("%d\n", i);
        }
    }
   

    return 0;


}

    