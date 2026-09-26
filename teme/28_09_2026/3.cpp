#include <cstring>
#include <iostream>
using namespace std;
int main(){
    char s[255];
    cin.get(s, 255);
    char *tokat = strtok(s, " ");
    while(tokat != nullptr){
        
        if(strlen(tokat)%2==0)cout << tokat << endl;
        tokat = strtok(nullptr, " ");
        
        
    }
    return 0;



}