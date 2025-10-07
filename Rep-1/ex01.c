#include <stdio.h>
#include <math.h>

int main(){

    double n, med;
    int i, pos;
    pos = 0;

    for (i = 0; i < 6; i = i+1){
        
        scanf("%lf", &n);

        if (n > 0 ){ 
            pos = pos + 1;
            med =  n + med;
        }

    }

    printf("%d valores positivos\n%.1lf\n", pos, med/pos);
    


    return 0;


}
