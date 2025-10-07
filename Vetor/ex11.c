#include <stdio.h>

int main()
{
    int i, n, pm = 0;
    
    
    scanf("%d", &n);
    int medida[n];

    for(i=0; i<n; i++){
        scanf("%d", &medida[i]);
        if (medida[i]> medida[pm]){
            pm = i;
        }
        
    }

    
   
    
    for(i=pm; i<n && medida[pm] <= medida[i]; i++); 

    if(i<n){
        printf("%d\n", i+1);
    } else {
        printf("0\n");
    }


    return 0;
}