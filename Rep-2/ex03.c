#include <stdio.h>
#include <math.h>

int main(){

float med = 0;
int i=0, n, j, cont = 1;

scanf("%d",&n);

while (i < n){

    j = 0;

    while(j < 4){ // printa 4 vezes

        if(j < 3){ // os 3 primeiros tem espaço após
            printf("%d ", cont); 
        } else {
            printf("PUM\n"); // o ultimo é PUM e uma quebra de linha
        }
        cont++;
        j++;
    }
    
    i++;
    
}



return 0;
}
