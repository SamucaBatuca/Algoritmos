#include <stdio.h>
#include <math.h>

int main(){


int n,senha = 2002;



    while (scanf("%d", &n) != EOF && n != senha){ // lê e compara se é igual que a senha. Se n for, ele executa o loop
        printf("Senha Invalida\n");
    }
    printf("Acesso Permitido"); // quando sai do loop, ele libera o acesso e encerra o programa

    





return 0;
}
