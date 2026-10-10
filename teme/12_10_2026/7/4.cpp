#include <cstddef>
#include <iostream>
#include <string.h>
using namespace std;
int main(){

    char s[255]; cin.get(s, 255);cin.ignore();
    int n; cin >> n;
    char *tokat = strtok(s, " ");
    char sub[20];
    while(tokat !=nullptr){
        strcpy(sub, tokat);
        if(strlen(sub) == n)cout << sub <<endl;
        tokat = strtok(NULL, " ");
    }
    return 0;



}