#include <stdio.h>
 
int main() {
    
    int vet[1000], i, t, cont=0;
    

    scanf("%d", &t);
    for(i=0; i <1000; i++){
        vet[i] = cont;
        printf("N[%d] = %d\n", i, cont);
        if (cont < t-1){
            cont++;
        } else {
            cont = 0;
        }

    }
    
    
 
    return 0;
}