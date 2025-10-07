#include <stdio.h>
#include <math.h>

int main(){


int i=1, inter, grem, esc, grenal=0, vint=0, vgrem=0, empa = 0;


while (i == 1){

    scanf ("%d %d", &inter, &grem); // pede os pontos
    
    grenal++; // conta os grenal

    if (inter > grem){ // inter ganhou?
        vint = vint + 1;
    } else {
        if (grem > inter){  // gremeio ganhou?
            vgrem = vgrem + 1;
        } else{   // pelo visto, empatou
            empa = empa + 1;
        }
    }

    printf ("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &i);

}

if(vint > vgrem) { // caso o inter ganhe mais
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n", grenal, vint, vgrem, empa);
} else {
    if (vgrem > vint){  // caso gremio ganhe mais
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nGremio venceu mais\n", grenal, vint, vgrem, empa);
    } else{
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nNão houve vencedor\n", grenal, vint, vgrem, empa);
    }
}


return 0;
}
