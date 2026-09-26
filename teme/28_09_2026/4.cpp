#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    char s[255];
    cin.get(s, 255);
    char *tokat = strtok(s, " ");
    while(tokat != nullptr){
        char rev[255];
        strcpy(rev, tokat);
        reverse(rev, rev + strlen(rev));
        if(strcmp(tokat, rev)==0)cout <<tokat << endl;
        tokat = strtok(nullptr, " ");
    }
    return 0;



}