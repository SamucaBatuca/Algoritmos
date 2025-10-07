#include <stdio.h>
#include <math.h>

int main(){


    int i, n, cont;
    
  
 
    scanf("%d", &n);
  
    
 
    
    cont = 2;
    printf("%d^2 = %d\n", cont, cont * cont);
    for (i = 1; i < n/2; i = i+1){
        cont = cont + 2;
        printf("%d^2 = %d\n", cont, cont * cont);
    }
   


    return 0;


}

    