#include <iostream>
#include <vector>
using namespace std;

vector <char> praia;
int a=0, f=0;

int conta(){
    int i, total;
    for (i=0; i<praia.size(); i++){ //conta   
        if (praia[i] ==  '<'){
           a++;
        } else {
           f++;
       }
    }

    if (a >= f && f>0){
        total = f;
    } else if(f>=a && a>0){
        total = a;
    }

    return(total);
}

int main(){
    int i, j, cont, total = 0;
    char n;

    scanf("%d", &cont);
    cin.ignore(); // tava lendo com '\n', isso faz limpar o buffer
    
    
    for (j = 0; j < cont; j++){
        
        while (cin.get(n) && n!= '\n'){
            if(n != '.') praia.push_back(n); // ignora os "." logo na leitura
        }

        total = conta();
        printf("%d\n", total);

        praia.clear();
        total = a = f= 0;

        /* for (i=0; i<praia.size(); i++){
            printf("%c", praia[i]);
        }*/
    }
}
    