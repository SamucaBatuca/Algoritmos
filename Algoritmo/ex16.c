#include <stdio.h>
#include <math.h>

int main(){

    
double med, soma = 0, n;
int i;

scanf ("%lf", &n);

for (i=0; n > 0; i++){ 
    
        if (n > 0){ // testa se o número n for negativo
            soma = soma + n;
        }
    scanf ("%lf", &n);
}
med = soma / i;

printf ("%.2lf\n", med);


return 0;
}
