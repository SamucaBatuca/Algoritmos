#include <iostream>
#include <deque>
using namespace std;




int main(){
    int n, c, j=0, ser=0, dim=0;
    scanf("%d", &n);
    deque<int> cartas;

    for (int i = 0; i < n; i++){
        scanf("%d", &c);
        cartas.push_front(c);
    }

    while(cartas.empty() == false){
        if (j % 2 == 0) { // vez do ser
            if (cartas.front() > cartas.back()){
                ser = ser + cartas.front();
                cartas.pop_front();
            } else {
                ser = ser + cartas.back();
                cartas.pop_back();
            }
        } else { // vez do dim
           if (cartas.front() > cartas.back()){
                dim = dim + cartas.front();
                cartas.pop_front();
            } else {
                dim = dim + cartas.back();
                cartas.pop_back();
            }
        }
        j++; // passa a vez
    }

    printf ("%d %d\n", ser, dim);
}