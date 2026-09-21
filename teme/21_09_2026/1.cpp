/*1. Scrie in limbajul C++ definitia completd a subprogramului suma_cifre care primeste prin
parametrul n un numar natural cu cel mult nous cifre si returneaza suma factorialelor cifrelor
numarului n. De exemplu, daca n = 231, subprogramul va returna valoarea 2!+3!+1!=9.*/


#include <iostream>
using namespace std;
int suma_cifre(int n){
    int s = 0;
    while(n>0){
        int p = 1;
        for(int i = n%10; i > 0; i--){
            p*=i;
        }
        s+=p;
        n/=10;

    }
    return s;

}
int main(){

    int n; cin>>n;
    cout << suma_cifre(n) << endl;
    return 0;


}