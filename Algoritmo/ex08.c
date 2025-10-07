#include <stdio.h>
#include <math.h>

int main(){


    int i, j, n1, n2;
    
    n1 = 1;
    n2 = 7;
 
    for (i = 0; n1 <= 9; i = i+1){  // até o n1 ser igual a 9
        for (j = 0; j < 3; j= j+1){  // vai diminuir n2 por 1 três vezes
            printf("I=%d J=%d\n", n1, n2);
            n2 = n2-1;
        }
        n1 = n1+2; // após o primeiro for incrementa o n1 em 2
        n2 = n2+5; // após o primeiro for incremanta o n2 em 4
    }
   

    return 0;


}

    