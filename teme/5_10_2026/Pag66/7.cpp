#include <cctype>
#include <iostream>
using namespace std;

int main() {
    char a[100], b[100];
    int fr[256] = {0};
    cin >> a >> b;
    for (char *p = a; *p; p++)
        fr[tolower((unsigned char)*p)]++;
    for (char *p = b; *p; p++)
        fr[tolower((unsigned char)*p)]--;
    bool anagrame = true;
    for (int i = 0; i < 256; i++)
        if (fr[i])
            anagrame = false;
    if (anagrame)
        cout << "sunt anagrame";
    else
        cout << "nu sunt anagrame";
    return 0;
}