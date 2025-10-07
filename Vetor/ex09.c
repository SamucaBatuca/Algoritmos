#include <stdio.h>

int main()
{
    int i, n, menor = 10000, posi;
    scanf("%d", &n);
    
    int x[n];

    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
        if(x[i]< menor){menor = x[i]; posi = i;}
    }

    printf("Menor valor: %d\nPosicao: %d\n", menor, posi);


    return 0;
}