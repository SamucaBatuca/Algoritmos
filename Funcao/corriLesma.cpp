#include <iostream>
#include <queue>
using namespace std;

int velo(int n){
    int vel, res;
    priority_queue <int> q;
    q.push(0);
    while (n--){
        scanf("%d", &vel);
        if (q.top() < vel ){
            q.pop();
            q.push(vel);
        }
    }
    if (q.top()< 10){ res = 1;}
    else if(q.top() >= 20) { res = 3;}
    else {res = 2;}
    return (res);

}

int main (){
    
    int n, aux;

    
    while (scanf("%d", &n) != EOF){
        printf("%d\n", velo(n));
    }


    return 0;
}