#include <stdio.h>
#include <math.h>

int main(){

float n, med = 0;
int i=0;



while (i < 2){

    scanf("%f", &n); // ler a nota

    if (n >= 0 && n <= 10){ // verifica se é positiva
        med = med + n; // soma na media
        i++;  // contador incrementa
    } else {  // caso seja negativa
        printf ("nota invalida\n"); 
    }
    
    
}

printf("media = %.2f\n", med / 2);


return 0;
}
