#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){

    char s1[20], s2[20];
    cin.get(s1, 20);
    cin.ignore();
    cin.get(s2, 20);
    reverse(s1, s1+strlen(s1));
    reverse(s2, s2+strlen(s2));
    int n;
    if(strlen(s1)<strlen(s2)) n = strlen(s1);
    else n = strlen(s2);
    int prep = 0;
    for(int i = 0; i < n; i++){
        if(s1[i] != s2[i]) break;
        prep++;
    }
    char ss[20];
    strncpy(ss, s1, prep);
    reverse(ss, ss+strlen(ss));
    cout << ss<< endl;
    return 0;
}