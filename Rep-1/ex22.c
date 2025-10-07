#include <stdio.h>
#include <math.h>

int main(){

    
float med, ma = 0;
int i, n, id, maid;

scanf ("%d", &n);

for (i=0; i < n ; i++){ 
    
    scanf ("%d %f", &id, &med);

    if (med >= 8){
        if(med > ma){
            ma = med;
            maid = id;
        }
    }
    
}

if(ma == 0) {
    printf("Minimum note not reached\n");
} else {
    printf("%d\n", maid);
}


return 0;
}
