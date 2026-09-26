#include <cstring>
#include <iostream>
using namespace std;
int main(){
    char s[255], m[255][255];
    int mp = 0;
    cin.get(s, 255);
    char *tokat = strtok(s, " ");
    while(tokat != nullptr){
        
        strcpy(m[mp++], tokat);
        tokat = strtok(nullptr, " ");
        
        
    }
    for(int i =0; i < mp; i++)cout <<m[i]<< endl;
    return 0;



}