#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){

    char s1[20], s2[20];
    cin.get(s1, 20);
    cin.ignore();
    cin.get(s2, 20);
    cin.ignore();
    reverse(s1, s1+strlen(s1));
    reverse(s2, s2+strlen(s2));
    int n; cin >>n;
    bool rime = true;
    for(int i = 0; i < n; i++){
        if(s1[i] != s2[i]) {
            rime = false;
            break;
        }
    }
    if(rime)cout <<"DA";
    else cout << "NU";
    cout << endl;
    return 0;
}