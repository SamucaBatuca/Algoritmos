#include <stdio.h>

int main() {

	int i, n, num;
	unsigned long int vet[60];

	scanf ("%d", &n);



	while (n--) {

		vet[0] = 0;
		vet [1] = 1;

		scanf ("%d", &num);

		for(i=2; i <= num; i++) {
			vet[i] = vet[i-1] + vet[i-2];
		}




		printf("Fib(%d) = %ld\n", num, vet[num]);


	}

	return 0;
}