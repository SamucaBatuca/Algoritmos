#include <iostream>
using namespace std;



int main (){

    int n, m;
    scanf("%d", &n);

    while (n){
        scanf("%d", &m);

        int doce[m], DE[m], DD[m], i, j, sm = 0, final; // cria os doces e os ponteiros do começo e da ponta do vetor
        


        for (i = 0; i < m; i++){ // armazena os doces
            scanf("%d", &doce[i]);
            sm += doce[i];
            DE[i] = sm;
            printf("%d ", DE[i]);
        }
        printf("\n");
        sm = 0;
        for (i = 0; i<m; i++){
            sm += doce[m-1-i];
            DD[i] = sm;
            printf("%d ", DD[i]);
        }

        
        j=0;
        for(i=0; i <m-1 && DE[i]!= DD[j]; i++){
            for(j=0; j < m-1-i && DE[i] != DD[j]; j++);
        }
        
        printf("\n");
        if(DE[i] == DD[j]){
            final = i+j;
            printf("i: %d; j: %d\n", i, j);
            printf("%d\n", final);
        } else {
            printf("0\n");
        }

        n--;
    }


}