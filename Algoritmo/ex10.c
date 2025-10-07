#include <stdio.h>
#include <math.h>

int main(){


    double x, y;
    int i;
    scanf("%d", &i);
    

    for (; i > 0; i = i-1){  // repete até i ser 0

        scanf("%lf %lf", &x, &y); // lê x e y

        if (y == 0){  // divisão por 0
            printf("divisao impossivel\n");
        }else{
            printf("%.1f\n", x/y);
        }
    
    }

    return 0;


}

    