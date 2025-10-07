#include <stdio.h>
#include <math.h>

int main(){

    int i=0, n, t=0, j, sinal = 0, cont = 0; 
    long int fib1, fib2, fib3, aux[32], fibaux; // fib3 é a soma do primeiro com o segundo
    fib1 = 1; // primeiro termo
    fib2 = 2;  // segundo termo 
   
    //scanf("%d", &n);
   
    while (scanf("%d", &n) != EOF){  // vai conferir se o contador de multiplo ta batendo com a posição pedida
        
        while(i < n){

    
            fib3 = fib1+fib2; // soma o primeiro termo com o segundo
            fib1 = fib2;  // o segundo termo vira o primeiro
            fib2= fib3;   // o primeiro termo vira a soma dele com o segundo
            
            fibaux = fib3; // salvando o resultado pra usar mais tarde
    
            t=0; // zera o tamanho
            while (fibaux > 0){ // conferindo o tamanho do número
                t++;            // conto um
                fibaux /= 10;   // tiro um digito dele, já que é uma divisão de inteiro
            }
            
            
            fibaux = fib3; // volta a receber o resultado prara usar a seguir
    
            for (j = 0; j < t; j++ ){  // salvando digito por digito pois terei que conferir se pelo menos 1 dele é um 3 (-1 pois n conto o "\0")
                aux[j] = fibaux%10;        // salva o ultimo digito
                if (aux[j] == 3){          // confere se o digito em questão é 3
                    sinal = 1;             // caso seja, sinal recebe TRUE
                    j = t;                 // encerra a verificação
                } else {                   // caso não seja
                    fibaux = fibaux / 10;  // remove o ultimo digito
                } 
            }
            
    
            if (fib3 % 3 == 0 || sinal == 1){ // se o número é multiplo de 3 ou o sinal for TRUE (ou seja, há um digito 3 no número)
                i++; // conta uma vez
                // printf("TESTE FIB3: %ld; TESTE CONTADOR: %ld; TESTE DO SINAL: %ld\n", fib3, i, sinal);
            }
        
            printf("TESTE FIB3: %ld; TESTE CONTADOR: %ld; TESTE DO SINAL: %ld\n", fib3, i, sinal);

            sinal = 0; // tem que zerar o sinal toda vez que recomeçar
    
            /* 
            Sem essa parte, o contador vai rodar uma vez a mais, e não queremos isso.
            Caso fosso decrementado no inicio (usando "i<n-1" por exeplo), ele não
            acertaria quando fosse inserido o número 1
            */

               
            }
            
        printf("%ld\n", fib3);
    
        fib3 = i = 0; // reseta o contador e o resultado final pois, a cada loop, ele vai ter que começar do zero
        fib1 = 1; // reinicia o primeiro termo
        fib2 = 2;  // reinicia o segundo termo
        sinal = 0; // tem que zerar o sinal toda vez que recomeçar
        
        
        
    }    
     
    return 0;


}

    