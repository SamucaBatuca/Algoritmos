#include <stdio.h>

int main()
{
    int cont=15, i=0, n, j=0, k, par[5], impar[5];


    while(cont--){
        scanf("%d", &n);
        if (n%2 == 0){
            par[i] = n;
            if( i < 4){
                i++;
            } else{
                for (k=0; k<5; k++){
                    printf("par[%d] = %d\n", k, par[k]);
                }
                i=0;
            }
            
        } else {
            impar[j] = n;
            if(j < 4){
                j++;
            } else {
                for (k = 0; k<5 ; k++){
                    printf("impar[%d] = %d\n", k, impar[k]);
                }
                j=0;
            }
        }
        
    }

    cont=j; // imprimir o restante dos impares
    for(j=0; j<cont; j++){
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    cont = i;
    for(i = 0; i<cont; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }


    return 0;
}