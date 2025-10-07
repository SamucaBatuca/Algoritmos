#include <stdio.h>

int main()
{
    int i;
    long int n;
    double vet[101];
    
    scanf("%ld", &n);
    vet[0] = n;

    for(i=0; i<100; i++){
        printf("N[%d] = %.4f\n", i, vet[i]);
        vet[i+1] = vet[i]/2.0;
    }


    return 0;
}