#include <cctype>
#include <iostream>
using namespace std;

int main() {
    char s[300];
    int fr[256] = {0};
    cin.getline(s, 300);
    for (char *p = s; *p; p++)
        if (isalpha((unsigned char)*p))
            fr[(unsigned char)*p]++;
    int distincte = 0;
    for (int i = 0; i < 256; i++)
        if (fr[i])
            distincte++;
    cout << distincte << endl;
    for (int i = 0; i < 256; i++)
        if (fr[i])
            cout << (char)i << " " << fr[i] << endl;
    return 0;
}