#include <stdio.h>
#include <math.h>

int main(){


int alt, max, min, n, i=0, cont=0;




while (scanf("%d %d %d", &n, &min, &max) != EOF){ // lê e compara se i é igual a EOF
    //printf("ENTREI NO PRIMEIRO WHILE COM O I EM: %d\n", i);


    while (i < n && scanf("%d", &alt) != EOF){  // enquanto i for menor que a quantidad de pessoas, ele vai ler a altura e essa leitura n pode ser EOF


        if(alt >= min && alt <= max){  // se estiver dentro das medidas, soma no contador
            cont++;
        }
        i++;
    
        //printf("CICLO DO SEGUNDO WHILE FINALIZADO COM ESSE VALOR DE I: %d\n", i);

        
    }

    //printf("SAi DO SEGUNDO WHILE\n");
    printf("%d\n", cont);  // quando sai do loop, digita a contagem


    // área para reiniciar variáveis
    i = 0;
    cont=0;

}


    





return 0;
}
