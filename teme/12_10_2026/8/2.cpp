#include <iostream>
#include <string.h>
using namespace std;
int main(){

    char s[255];cin.get(s, 255);
    for(int i = 0; i < strlen(s)-1; i++)if(strchr("aeiouAEIOU", s[i])!=nullptr && strchr("aeiouAEIOU", s[i+1])!=nullptr)cout <<s[i]<<"->"<<s[i+1]<<" ";
    return 0;
}