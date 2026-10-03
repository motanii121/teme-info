#include <cstring>
#include <iostream>
using namespace std;

void a(char c1[100], char c2[100], char s[300], char rez[1000]) {
    int l = strlen(c1);
    rez[0] = '\0';
    char *start = s;
    char *p = strstr(s, c1);
    while (p) {
        bool inceput = (p == s || *(p - 1) == ' ');
        bool sfarsit = (p[l] == '\0' || p[l] == ' ');
        if (inceput && sfarsit) {
            strncat(rez, start, p - start);
            strcat(rez, c2);
            start = p + l;
            break;
        }
        p = strstr(p + 1, c1);
    }
    strcat(rez, start);
}

void b(char c1[100], char c2[100], char s[300], char rez[1000]) {
    int l = strlen(c1);
    rez[0] = '\0';
    char *start = s;
    char *p = strstr(s, c1);
    while (p) {
        bool inceput = (p == s || *(p - 1) == ' ');
        bool sfarsit = (p[l] == '\0' || p[l] == ' ');
        if (inceput && sfarsit) {
            strncat(rez, start, p - start);
            strcat(rez, c2);
            start = p + l;
            p = strstr(start, c1);
        } else
            p = strstr(p + 1, c1);
    }
    strcat(rez, start);
}

int main() {
    char alegere, c1[100], c2[100], s[300], rez[1000];
    cin >> alegere;
    cin >> c1 >> c2;
    cin.ignore(1000, '\n');
    cin.getline(s, 300);
    if (alegere == 'a')
        a(c1, c2, s, rez);
    else
        b(c1, c2, s, rez);
    cout << rez << endl;
    return 0;
}