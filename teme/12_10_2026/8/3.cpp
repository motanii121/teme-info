#include <iostream>
#include <string.h>
using namespace std;
int main(){

    int n; cin >>n; cin.ignore();
    char s[20][20];
    for(int i =0; i<n; i++){
        cin.get(s[i], 20);
        cin.ignore();

    }
    for(int i =0; i<n;i++){
        bool es = false;
        for(int j= 0; j<strlen(s[i]); j++){
            if(strchr("Ss", s[i][j])!=nullptr){
                es=true;
                break;
            }
        }
        if(es)cout<<s[i]<<endl;
    }
    return 0;
}