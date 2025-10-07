#include <stdio.h>

int main() {

	int i;
    float vet[100];

	for(i=0; i <100; i++) {
		scanf("%f", &vet[i]);
		if (vet[i] <= 10) {
            printf("A[%d] = %d\n", i, vet[i]);
		}
	}



	return 0;
}