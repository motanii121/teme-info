#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char s[100], t[100], copie[100];
    cin.get(s, 100);
    strcpy(copie, s);      
    t[0] = '\0';           

    char *tokat = strtok(s, " ,.");
    int cuv = 0;
    while (tokat != nullptr) {
        cuv++;
        tokat = strtok(nullptr, " ,.");
    }
    cout << cuv << endl;

    tokat = strtok(copie, " ,.");   
    while (tokat != nullptr) {
        strcat(t, tokat);
        cout << tokat << endl;
        tokat = strtok(nullptr, " ,.");
    }
    cout << t << endl;
    return 0;
}