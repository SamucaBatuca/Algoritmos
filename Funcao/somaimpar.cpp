#include <stdio.h>
#include <math.h>

int somaI (int x, int y){
    int soma = 0;
    for (int i = x; i < y; i++){
        if (i%2 != 0 && i != x){
            soma = soma + i;
        }
    }
    
    if (soma == x){
        return 0;
    } else {
        return (soma);
    }
}


int main (){
    
    int n, x, y, aux;

    scanf("%d", &n);
    while (n--){
        scanf ("%d %d", &x, &y);
        if (x > y){
            aux = y;
            y = x;
            x = aux;
        }
        printf("%d\n", somaI (x,y));
    }


    return 0;
}