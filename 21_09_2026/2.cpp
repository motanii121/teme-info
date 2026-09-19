/*Scrie în limbajul C++ definiția completă a subprogramului baza care primeşte prin para-
metrul n un număr natural cu cel mult nouă cifre, primeşte prin parametrul b un număr
natural (2 < b < 9). Subprogramul returnează 1, dacă numărul n reprezintă un număr în
baza b şi returnează 0 în caz contrar.*/
#include <iostream>
using namespace std;
int baza(int n, int b){
    while(n > 0){
        if(n%10 >= b) return 0;
        n/=10;
    }
    return 1;

}
int main(){
    int n, b; cin >> n >> b;
    cout<< baza(n, b) << endl;
    return 0;
}