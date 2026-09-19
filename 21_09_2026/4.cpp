/*4. Un număr natural n format din cel puţin 5 cifre şi cel mult nouă cifre se numeşte 2— palin-
    drom dacă numărul obţinut după eliminarea primelor două cifre şi a ultimelor două cifre
    din numărul n este palindrom. Scrie în limbajul C++ definiția completă a subprogramului
    dpalindrom, care primeşte două numere naturale a, b ( 10^5<a<b<10^9) şi afişează toate numerele 
    2— palindrom ce aparțin intervalului [a,b]. Funcţia dpalindrom va utiliza apeluri
    utile ale funcţiei palindrom de la problema 3.*/
#include <iostream>
#include <cmath>
using namespace std;

int palindrom(int n){
    int aux = n, rev = 0;
    while(aux > 0){
        rev = rev*10 + aux%10;
        aux /= 10;
    }
    if(rev == n) return 1;
    else return 0;
}

void dpalindrom(int a, int b){
    for(int i = a; i <= b; i++){
        int x = i, c = 0;
        while(x > 0){
            c++;
            x /= 10;
        }
        x = i;
        x %= (int)pow(10, c-2);  
        x /= 100;                
        if(palindrom(x) == 1) cout << i << " ";
    }
}

int main(){
    int a, b; cin >> a >> b;
    dpalindrom(a, b);
    return 0;
}

//numere de tip ab(0x)cd vor fii aprobabate deoarece ele verifica palindrom(x) pentru ca 0x= x