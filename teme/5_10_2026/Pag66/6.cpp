#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char a[100], b[100];
    cin >> a >> b;
    int la = strlen(a), lb = strlen(b);
    int p = 0;
    while (a[p] && a[p] == b[p])
        p++;
    int s = 0;
    while (s < la && s < lb && a[la - 1 - s] == b[lb - 1 - s])
        s++;
    if (p > 0) {
        cout << "prefix: ";
        cout.write(a, p);
        cout << endl;
    } else
        cout << "nu au prefix comun" << endl;
    if (s > 0) {
        cout << "sufix: ";
        cout.write(a + la - s, s);
        cout << endl;
    } else
        cout << "nu au sufix comun" << endl;
    return 0;
}