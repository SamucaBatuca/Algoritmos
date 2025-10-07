#include <bits/stdc++.h>

using namespace std;

int mapa [1000][1000];
vector<pair <int,int> > fila;
int k, l;



int acha (int n, int m, bool fla){
    int i, j;

    k = i = fila[0].first;
    l = j = fila[0].second;

    //printf("TAMANHO DA FILA: %d\n", fila.size());
    //printf("ESSE EH O FLA: %d\n", fla);
    
    if (!fila.empty() && !fla){

        if (mapa[i][j-1] == 7 && mapa[i][j+1] == 7 && j+1 < m && j-1 >= 0){ // ve se a lateral do 42 é válido
            if (mapa[i-1][j-1] == 7 && mapa[i-1][j] == 7 && mapa[i-1][j+1] == 7 && j+1 < m && j-1 >= 0 && i-1 >=0 && i+1<n){ // vê se a linha superior é valida
                if (mapa[i+1][j-1] == 7 && mapa[i+1][j] == 7 && mapa[i+1][j+1] == 7 && j+1 < m && j-1 >= 0 && i-1 >=0 && i+1<n){
                    fla = true; // achou o sabre
                    //printf("FLA FICOU TRUE \n");
                    return (fla);

                } else { // n achou na linha de baixo
                    fila.erase(fila.begin());
                    fla = acha(n,m, fla);
                }

            } else { // n achou em cima
                fila.erase(fila.begin());
                fla = acha(n,m, fla);
            }

        } else { // não achou no meio
            fila.erase(fila.begin());
            fla = acha(n,m, fla);
        }

    }

    return(fla);
    

}

int main (){
    
    int n, m, i, j;
    bool fla = false;
    
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &mapa[i][j]);
            if(mapa[i][j] == 42){
                fila.push_back({i,j});
                
            }
        }
    }

    
    if (acha(n, m, fla)){
        printf("%d %d\n", fila[0].first , fila[0].second);
    } else {
        printf("0 0\n");
    }


    return 0;
}