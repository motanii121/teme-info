#include <iostream>
using namespace std;
int main(){
    char s[255][255];
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) cin.getline(s[i], 255);
    for(int i = n-1; i >=0; i--)cout << s[i] << " ";
    return 0;
   



}