#include <stdio.h>
#include <math.h>


void verifica(int p, int j1, int j2, int r, int a){

    if(r == 1 && a == 1){
        printf("Jogador 2 ganha!\n");
    } else {
        if ( r == 1){
            printf("Jogador 1 ganha!\n");
        } else {
            if (p == 1){
                if((j1 + j2) % 2 == 0){
                    printf("Jogador 1 ganha!\n");
                } else {
                    printf("Jogador 2 ganha!\n");
                }
            } else {
                if((j1 + j2) % 2 != 0){
                    printf("Jogador 1 ganha!\n");
                } else {
                    printf("Jogador 2 ganha!\n");
                }
            }
        }
    }

}




int main(){

    int p, j1, j2, r, a;
    
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    verifica(p, j1, j2, r, a);

    return 0;
}
