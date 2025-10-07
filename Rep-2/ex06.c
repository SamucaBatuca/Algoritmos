#include <stdio.h>
#include <math.h>

int main(){

double pa, pb, ga, gb;
int i = 0, n, ano = 0, sinal;



while (scanf("%d", &n) != EOF){ // leitura de quantas vezes

    while (i < n){


        scanf("%lf %lf %lf %lf",&pa, &pb, &ga, &gb); //lê os valores


        while (pa <= pb){ // enquanto a população de A for menor
            
            pa = (int)(pa * (1+(ga/100)));  // a cidade A cresce e PA recebe o type casting inteiro da conta de incremento
            pb = (int)(pb * (1+(gb/100)));  // a cidade B cresce e PB recebe o type casting inteiro da conta de incremento
            
            if (ano >= 100){ // se o contador chegar em 100, ele manda o sinal pra parar
                sinal = 1;
                pa = pb+1;     // força a condição de parada
            } else {
                ano++;  // conta-se um ano
            }
            
            

            //printf(" VALOR A: %lf ; VALOR B: %lf; ANO: %d; CONTADOR: %d\n", pa, pb, ano, i);
        }

        if (sinal == 1){
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", ano);
        }

           
        ano = 0;  // zera o ano a cada ciclo

        sinal = 0; // reinicia o sinal a cada ciclo
        i++;
    }

    i = 0; // quando ele "finalizar o progarama", o i deve ser zerado novamente
}
    





return 0;
}
