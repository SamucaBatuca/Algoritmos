#include <stdio.h>
#include <math.h>

int main(){


    int i, n, j;
    
    n = 1;
    j = 60;
 
    for (i = 1; j >= 0; i = i+1){ //enquanto J for maior que 0, ele continua o for

        printf("I=%d J=%d\n", n, j);
        n = n+3;
        j = j-5;

    }
   

    return 0;


}

    