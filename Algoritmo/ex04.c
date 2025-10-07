#include <stdio.h>
#include <math.h>

int main() {
    
	int i, n, x;
    int dentro = 0;
    int fora = 0;
    
    scanf("%d", &n);
    
	for (i = 0; i < n; i = i + 1) {
		scanf("%d", &x);
		if ( x >= 10 && x <= 20 ) { // se estiver dentro da faixa
			dentro = dentro + 1;
		} else {
		    fora = fora + 1;
		}

	}
	
	printf("%d in\n%d out\n", dentro, fora);

	return 0;

}
