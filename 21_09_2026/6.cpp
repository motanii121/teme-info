/*Se consideră un tablou unidimensional x, având n elemente, numere naturale (1<n<=10^9) şi
un număr natural y (0<y<=10^9). Scrie în limbajul C++ definiția completă a subprogramului 
prime, care primeşte ca parametri numerele n, y, tabloul x şi furnizează prin parametrul p un tablou unidimensional, 
ce va contine, elementele din tabloul x care sunt prime cu numărul y, iar prin parametrul np furnizează numărul de elemente din tabloul p. 
Astfel, dacă n = 5, y = 3, x = (9, 11, 2, 33 ,7) atunci se va obţine p = (11, 2, 7) şi np = 3. Utilizează apeluri utile ale subprogramului cmmdc, 
definit mai sus.*/
#include <iostream>
using namespace std;

int cmmdc(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void prime(int n, int y, int x[], int p[], int &np){
    np = 0;
    for(int i = 0; i < n; i++){
        if(cmmdc(x[i], y) == 1){
            p[np] = x[i];
            np++;
        }
    }
}

int main(){
    int n, y;
    cin >> n >> y;
    int x[100], p[100];
    for(int i = 0; i < n; i++) cin >> x[i];

    int np;
    prime(n, y, x, p, np);

    for(int i = 0; i < np; i++) cout << p[i] << " ";
    cout << endl;

    return 0;
}