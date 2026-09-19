/*9. Se consideră două puncte A şi B definite în planul xOy, având coordonate numere reale. Scrie în limbajul C++ definiţia completă a 
subprogramului distanta care primeşte prin doi parametri punctele A şi B şi returnează valoarea distanţei dintre ele. */
#include <iostream>
#include <cmath>
using namespace std;

double distanta(double A[2], double B[2]){
    return sqrt((A[0]-B[0])*(A[0]-B[0]) + (A[1]-B[1])*(A[1]-B[1]));
    
}

int main(){
    double A[2], B[2];
    cin >> A[0] >> A[1];
    cin >> B[0] >> B[1];

    cout << distanta(A, B) << endl;

    return 0;
}