#include <stdio.h>
 
int main() {
    
    int vet[10], i;
    
    scanf("%d", &vet[0]);
    for(i=1; i <10; i++){
        vet[i] = vet[i-1] *2;
    }
    
    for(i=0; i <10; i++){
        printf("N[%d] = %d\n", i, vet[i]);
    }
 
    return 0;
}