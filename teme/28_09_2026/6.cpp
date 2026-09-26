#include <cstring>
#include <iostream>
using namespace std;
int main(){
    char s[255];
    cin.get(s, 255);
    int c=0, v=0, d=0;
    for(int i = 0; i < strlen(s); i++){
        if(strchr("aeiou", s[i])!= nullptr){
            cout <<"V";
            v++;
        }
        else if(strchr("qwrtpsdfghjklzxcvbnm", s[i])!= nullptr){
            cout <<"C";
            c++;
        }
        else{
            cout <<"D";
            d++;
        }
    }
    cout << endl;
    cout <<"C: " << c << endl;
    cout <<"V: " << v << endl;
    cout <<"D: " << d << endl;
    return 0;



}