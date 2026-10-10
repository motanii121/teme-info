#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){

    char s[255]; cin.get(s, 255);
    for(int i = 0; i < strlen(s); i++)
        if(strchr("aeiouAEIOU", s[i])!=nullptr){
            for(int j = i; j < strlen(s); j++) s[j]= s[j+1];
            break;
        }
    reverse(s, s+strlen(s));    
    for(int i = 0; i < strlen(s); i++)
        if(strchr("aeiouAEIOU", s[i])!=nullptr){
            for(int j = i; j < strlen(s); j++) s[j]= s[j+1];
            break;
        }
    reverse(s, s+strlen(s)); 
    cout << s <<endl;
    return 0;   

    


}