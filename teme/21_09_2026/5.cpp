/*5. Subprogramul numere primeşte prin parametrul n un număr natural (2 <= n <= 30) şi prin
parametrul v un tablou unidimensional format din n elemente, numere naturale formate
din cel puțin două cifre şi cel mult şase cifre. Subprogramul furnizează prin parametrul
suma valoarea sumei acelor elemente din tabloul v, pentru care prima cifră este egală cu
suma celorlalte sau furnizează valoarea -l dacă nu există astfel de numere în tablou. Scrie
în limbajul C++ definiția completă a subprogramului numere. De exemplu, dacă n = 5,
v= (125, 624, 44,2110, 23), atunci suma = 624 + 44 + 2110 = 2778.*/
#include <iostream>
using namespace std;
void numere(int n, int v[100], int &suma){
    bool test = false;
    for(int i =0; i <n; i++){
        int aux = v[i], x = 0, s=0;
        while(aux > 0){
            x= aux%10;
            s+=x;
            aux/=10;

        }
        s-=x;
        if(s==x){
            test = true;
            suma += v[i];
        }
    }
    if(!test)suma = -1;
}
int main(){
    int n; cin >> n;
    int v[n];
    for(int i = 0; i < n; i++) cin >> v[i];
    int suma=0;
    numere(n, v, suma);
    cout << suma << endl;
    return 0;
}