#include <cstring>
#include <iostream>
#include <algorithm> //nu exista strrev()
using namespace std;
int main(){
    char s[255];
    cin.get(s, 255);
    char *tokat = strtok(s, " ");
    while(tokat != nullptr){
        
        reverse(tokat, tokat + strlen(tokat));
        cout << tokat << endl;
        tokat = strtok(nullptr, " ");
    }
    return 0;



}