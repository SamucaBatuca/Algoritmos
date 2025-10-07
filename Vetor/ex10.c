#include <stdio.h>

int main()
{
    int i, n, pico = 0, pp, vale = 1000000, pv, sinal = 0;
    
    scanf("%d", &n);

    int x[n];


    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
        if (x[i] > pico){
            pico = x[i];
            pp = i;
        } else {
            if (x[i] < vale){
                vale = x[i];
                pv = i;
            }
        }
    }

    if(pp-1 >= i){ // se a posição de pico não for a primeira
        if (x[pp] > x[pp+1] && x[pp] > x[pp-1]){

            if(pv+1 <= n){ // se a posição do vale não for a ultima
                if(x[pv] < x[pv-1] && x[pv] < x[pv+1]){
                    sinal++;
                }
            } else {
                if(x[pv] < x[pv-1]){ // se a posição do vale for a última
                    sinal++;
                }
            }

        }
    } else { // se a posição de pico for a primeira
        if (x[pp] > x[pp+1]){

            if(pv+1 <= n){ // se a posição do vale não for a ultima
                if(x[pv] < x[pv-1] && x[pv] < x[pv+1]){
                    sinal++;
                }
            } else {
                if(x[pv] < x[pv-1]){ // se a posição do vale for a última
                    sinal++;
                }
            }

        }
    }
    
   printf("%d\n", sinal);

    return 0;
}