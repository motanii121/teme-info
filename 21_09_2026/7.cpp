/*7. Se consideră două tablouri unidimensionale x si y, având fiecare câte n elemente (1<=n<=50). Fiecare tablou conţine numere întregi, dispuse 
in ordine strict crescătoare. Scrie in limbajul C++ definiţia completă a subprogramului egale, care primeşte ca parametri numărul n, 
tablourile x, y şi care returnează prin parametrul eg numărul de elemente egale din cele două tablouri. Se va utiliza un algoritm eficient din punct de 
vedere al timpului de execuţie.*/
#include <iostream>
using namespace std;

void egale(int n, int x[], int y[], int &eg){
    eg = 0;
    int i = 0, j = 0;
    while(i < n && j < n){
        if(x[i] == y[j]){
            eg++;
            i++;
            j++;
        }
        else if(x[i] < y[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int x[50], y[50];
    for(int i = 0; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++) cin >> y[i];

    int eg;
    egale(n, x, y, eg);
    cout << eg << endl;

    return 0;
}