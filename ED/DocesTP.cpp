#include <iostream>
#include <deque>
using namespace std;



int main (){

    int n, m;
    scanf("%d", &n);

    while (n){
        scanf("%d", &m);

        int doce[m], i, p1, p2; // cria os doces e os ponteiros do começo e da ponta do vetor
        bool igual = false; // vai ser usado para comparar se os ponteiros são iguais

        for (i = 0; i < m; i++){ // armazena os doces
            scanf("%d", &doce[i]);
        }

        int s1 = doce[0]; //p1 come o primeiro doce
        int s2 = doce[m-1]; // p2 come o segundo doce
        int resp = 0, final=resp; // numero de doces comidos e o numero final
        
        for (p1 = 1, p2 = m-2; p1 <= p2;){ // até que os ponteiros não se passem:
            
            //printf("S1: %d; S2: %d; p1: %d; p2: %d; resp: %d; final: %d\n", s1, s2, p1, p2, resp, final);   

            if (s1<s2){
                s1+= doce[p1]; // se p1 não comeu mais, ent come dnv
                p1++;
                //printf("s1 comeu\n");
                resp++;
            } else if (s2<s1){
                s2 += doce[p2]; // se p2 não comeu mais, ent come dnv
                p2--;
                //printf("s2 comeu\n");
                resp++;
            } else if (s1 == s2) { 
                final = resp; //se comeram o mesmo tanto, salva a resposta
                //printf("salvei\n");
               // printf("%d\n", p1);
                s1+= doce[p1]; // como são iguais, tanto faz quem anda primeiro.
                p1++;
                resp++;
            } 

           
        }

        //printf("S1: %d; S2: %d; p1: %d; p2: %d; resp: %d; final: %d\n", s1, s2, p1, p2, resp, final);   

        if (s1!= s2 && final == 0){ // se no fim, os ponteiros se encontraram e eles não conseguram ficar iguais
            final = 0;
        } else {
            final = final+2;
        }

        printf("%d\n", final);
        n--;
    }


}