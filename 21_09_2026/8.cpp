/*8. Scrie în limbajul C++ definiţia completă a subprogramului interschimbare care primeşte prin parametrii n, m, liniel, linie2 
trei numere naturale (2<=n,m<=40, l<=liniel, linie2 <=n), primeşte prin parametrul a un tablou bidimensional de tip întreg, 
având n linii şi m coloane şi interschimbă elementele din cele două liniel şi linie2. */
#include <iostream>
using namespace std;

void interschimbare(int n, int m, int linie1, int linie2, int a[40][40]){



    for(int j = 0; j < m; j++){


        int aux = a[linie1-1][j];
        a[linie1-1][j] = a[linie2-1][j];
        a[linie2-1][j] = aux;


    }
}

int main(){
    int n, m, linie1, linie2;
    cin >> n >> m >> linie1 >> linie2;

    int a[40][40];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){


            cin >> a[i][j];
        }
    
    }
    interschimbare(n, m, linie1, linie2, a);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";

        }
        cout << endl;
    }

    return 0;
}