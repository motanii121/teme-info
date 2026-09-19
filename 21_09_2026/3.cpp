/*3. Scrie în limbajul C++ definiția completă a subprogramului palindrom care primeşte prin
parametrul n un număr natural cu cel mult nouă cifre. Subprogramul returnează 1, dacă
numărul n reprezintă un număr palindrom şi returnează 0 în caz contrar.*/
#include <iostream>
using namespace std;
int palindrom(int n){
    int aux =n, rev=0;
    while(aux>0){
        rev = rev*10 + aux%10;
        aux/=10;
    }
    if(rev==n) return 1;
    else return 0;
}
int main(){

    int n; cin >> n;
    cout <<palindrom(n) <<endl;
    return 0;
}