#include <cstring>
#include <iostream>
using namespace std;
int main(){
    char s[255];
    cin.get(s, 255);
    char *tokat = strtok(s, " ");
    while(tokat != nullptr){
        
        if(strlen(tokat)%2==0)cout << "lungime para ";
        else cout << "lungime impara ";
        tokat = strtok(nullptr, " ");
        
        
    }
    cout <<endl;
    return 0;



}