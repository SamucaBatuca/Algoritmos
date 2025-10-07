#include <stdio.h>
#include <math.h>

int main(){

    // faz um for pra par e outro pra impar, vai ser melhor


    int i, n, cont;
    
  
 
    scanf("%d", &n);
    
    if (n % 2 == 0 ){ // se par
        cont = 1;
        printf("%d\n", cont);
        for (i = 1; i < n/2; i = i+1){
            cont = cont + 2;
            printf("%d\n", cont);
            
        }
        
    } else {  // se for impar
        cont = 1;
        printf("%d\n", cont);
        for (i = 1; i < n/2; i = i+1){
            cont = cont + 2;
            printf("%d\n", cont);
        }
        printf("%d\n", n);
    }
 
    
    


    return 0;


}
