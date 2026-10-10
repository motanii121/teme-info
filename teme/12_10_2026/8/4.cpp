#include <iostream>
#include <string.h>
using namespace std;
int main(){

    char s[255]; cin.get(s,255);
    char *tokat = strtok(s, " ");
    while (tokat!=nullptr){
        if(strchr("Aa", tokat[0])!=nullptr)cout <<tokat<< endl;
        tokat = strtok(nullptr, " ");
    }
    return 0;
}