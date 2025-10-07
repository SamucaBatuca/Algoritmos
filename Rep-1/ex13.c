#include <stdio.h>
#include <math.h>

int main(){

    int i, n, max, posi ;

    max = 0;


    for (i=1; i <=100; i++){  
       
        scanf("%d", &n); //
        if (n>max){ // se N for o menor até agora
            max = n;
            posi = i;
        } 


    }

    printf("%d\n%d\n", max, posi);
    

    return 0;

  


}

    