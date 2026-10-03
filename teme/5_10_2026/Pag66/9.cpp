#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char s[500], copie[500];
    cin.getline(s, 500);
    int nr = 0;
    strcpy(copie, s);
    char *t = strtok(copie, ".,!?");
    while (t) {
        while (*t == ' ')
            t++;
        if (*t)
            nr++;
        t = strtok(nullptr, ".,!?");
    }
    cout << nr << endl;
    strcpy(copie, s);
    t = strtok(copie, ".,!?");
    while (t) {
        while (*t == ' ')
            t++;
        if (*t)
            cout << t << endl;
        t = strtok(nullptr, ".,!?");
    }
    return 0;
}