#include <stdio.h>
#include <math.h>
#define aprox 1e-6  // define uma margem de erro pra comparações posteriores (1 * 10^-6)

int main(){

    int j, pint;
    float i, n;
    double pfloat;

    for (i=0; i < 2.2; i = i + 0.2){  // repete de 0.2 em 0.2

        //printf(" loop do: %.1lf\n", i);
        n = n + 1 + i; 
        pint = (int)n;          // faz um type casting, que é tatar aquela variável como o tipo especificado (int)
        pfloat = n - pint;      // nessa parte eu separo o número decimal do inteiro.


        if (fabs(pfloat) < aprox ){             // verifica se o número decimal absoluto é proximo da aproximação em 6 casas decimais
            printf("I=%.0lf J=%.0lf\n", i, n);  // faz a primeira impressão sem o zero
        } else {
            printf("I=%.1lf J=%.1lf\n", i, n);  // faz a primeira impressão com o número decimal
        }
        




        for (j = 0; j<2; j++){  // repete o n 2 vezes incrementando o número inteiro dele, já que o i não aumenta nesta etapa  
            n = n + 1;  
            
            if (fabs(pfloat) < aprox){   // faz a verificação novamente, pois o ultimo número será inteiro
                printf("I=%.0f J=%.0f\n", i, n);    // imprime sem zero
            } else {
                printf("I=%.1f J=%.1f\n", i, n);    // imprime com número decimal
            }
        }

        /* 
        Para que n não aumente seu valor em 1 a cada loop, 
        pois queremos que ele se mantenha em 1 2 e 3
        */

        n = 0;      
        
       
        //A partir daqui o i incrementa em 0.2 e, no próximo loop, ele vai ser adicionado ao n.      
    }

    //printf("%lf %lf", fabs(pfloat), aprox);
    return 0;

  


}

    