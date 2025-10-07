#include <stdio.h>
#include <math.h>

int main(){

    
double f = 0; // proximo numero
int i, fat = 1, n;

scanf ("%d", &n);

for (i = 0; i < n; i++){ // poderia ser um while, mas o exercicio n permite.
    
    fat = fat * (1+f); // faz o fatorial
    f = f+1;  // incrementa pro próximo número
}

printf ("%d\n", fat);


return 0;
}
