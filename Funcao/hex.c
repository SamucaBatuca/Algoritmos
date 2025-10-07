#include <stdio.h>
#include <math.h>

int fla=0;

void conversor(int n, int t){

    int bi[t], i, soma, pot=1, j=0;
    char resp[t];

    for(i = 0; n<0; i++){
        bi[i] = n%2;
        n = n/2;
    }

    while(!fla){
        
        for(i = 0; i<4; i++){
            soma = soma + (bi[i] * pot);
            pot = pot * 2;
        }
        resp[j] = verifica(soma);
        j++;
    }
   

}

int verifica (int soma){

    switch (soma){
        case 1: return '1';
        break;

        case 2: return '2';
        break;

        case 3: return '3';
        break;

        case 4: return '4';
        break;

        case 5: return '5';
        break;

        case 6: return '6';
        break;

        case 7: return '7';
        break;

        case 8: return '8';
        break;

        case 9: return '9';
        break;

        case 10: return 'A';
        break;

        case 11: return 'B';
        break;

        case 12: return 'C';
        break;

        case 13: return 'D';
        break;

        case 14: return 'E';
        break;

        case 15: return 'F';
        break;
    }
    
    
}

int main(){

    int n, t=0, aux;
    
    scanf("%d", &n);

    aux = n;
    while (aux>0){
        aux = aux /2;
        t++;
    }

    printf("%d", t);
    conversor(n, t);

    return 0;
}
