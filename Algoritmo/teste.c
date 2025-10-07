#include <stdio.h>

int main() {
    int n = 123;
    int vet[10];
    int temp = n;
    int tamanho = 0;
    int j;

    // Contar dígitos
    while (temp > 0) {
        tamanho++;
        temp /= 10;
    }

    // Extrair dígitos da direita para a esquerda
    for (int i = tamanho - 1; i >= 0; i--) {
        vet[i] = n % 10;
        n /= 10;
    }
    for (j = tamanho - 1; j >=0; j--){
        vet[j] = vet[j] * 10;
    }
    // Exibir o vetor
    for (int i = 0; i < tamanho; i++) {
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    return 0;
}