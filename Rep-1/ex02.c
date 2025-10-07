#include <stdio.h>
#include <math.h>

int main(){

    double pos, neg, par, imp;
    int i, n;
    pos = 0;
    neg = 0;
    par = 0;
    imp = 0;

    for (i = 0; i < 5; i = i+1){
        
        scanf("%d", &n);

        if (n > 0 ){  // se positivo
            pos = pos + 1;
        }
        
        if (n < 0 ){ // se negativo
            neg = neg + 1;
        }
        
        if (n % 2 == 0 ){ // se par
            par = par + 1;
        } else { // se impar
            imp = imp + 1;
        }

    }

    printf("%.0lf valor(es) par(es)\n%.0lf valor(es) impar(es)\n%.0lf valor(es) positivo(s)\n%.0lf valor(es) negativo(s)\n", par, imp, pos, neg);
    


    return 0;


}
