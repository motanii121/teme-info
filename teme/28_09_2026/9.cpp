#include <iostream>
using namespace std;

int main() {
    char s[255];
    cin.get(s, 255);

    char c;
    cin >> c;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c)
            cout << i+1 << " ";
    }
    cout << endl;
    return 0;
}