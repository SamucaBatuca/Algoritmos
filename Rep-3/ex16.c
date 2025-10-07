#include <stdio.h>
#include <math.h>

int main(){


    int x, y, z, i, aux, s, sx, sy, sz;
    float raiz;
    


    while (scanf("%d %d %d", &x, &y, &z) != EOF){

       
        s = 0; // reseta o s
        //colocando o Z como o maior 
        if (x > y && x > z){ // caso o x seja maior
            aux =  z; 
            z = x;
            x = aux;
        } else {
            if ( y > x && y > z){
                aux = z;
                z = y;
                y = aux;
            }
        }
        

        if (pow(z,2) == pow(x,2)+ pow(y,2)){

            for (i = 1; i <= z/2 && x % i != 0 && y % i != 0 && z % i != 0; i++){
                // procura multiplos iguais até metade do maior dos números
            }
            if (i > z/2){
                s++;
            }




            /*raiz = sqrt(x);
            for (i = 1; i <= raiz; i++){
                // vai verificar os multiplos de x
                if (x % i == 0){
                    sx = i; // pega o maior multiplo
                }
            }
            

            raiz = sqrt(y);
            for (i = 2; i <= raiz ; i++){
                // vai verificar os multiplos de y
                if (y % i == 0){
                    sy = i;
                }
            }

            raiz = sqrt(z);
            for (i = 2; i <= raiz; i++){
                // vai verifica os multiplos de z
                if (z % i == 0){
                    sz = i;
                }
            }*/
            

            if (s = 1){   // se todos os números são primos, logo é uma tripla primitiva
                printf("tripla pitagorica primitiva\n");
            } else {      // se não, é só uma tripla pitagórica comum
                printf("tripla pitagorica\n");
            }

        } else {  // caso n seja tripla pitagórica
            printf("tripla\n");
        }


    }
   

return 0;
}
