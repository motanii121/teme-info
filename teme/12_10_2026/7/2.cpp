#include <iostream>
#include <string.h>
using namespace std;
int main(){

    char s[20][20];
    int n; cin>> n;cin.ignore();
    for(int i=0; i<n; i++){
        cin.get(s[i],20);
        cin.ignore();
    }
    int x = -1;
    int xp = 0;
    for(int i=0; i < n; i++){
        int nr = 0;
        for(int j = 0; j <strlen(s[i]); j++){
            if((int)s[i][j] >= 65 && (int)s[i][j] <=90)nr++;
        }
        if(nr>x){
            x = nr;
            xp = i;
        }
    }
    cout<<s[xp]<<endl;
    return 0;


}