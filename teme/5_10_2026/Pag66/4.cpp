#include <cstring>
#include <iostream>
using namespace std;

void a(char cuv[100], char s[100]) {
    int l = strlen(cuv);
    char *p = strstr(s, cuv);
    while (p) {
        bool inceput = (p == s || *(p - 1) == ' ');
        bool sfarsit = (p[l] == '\0' || p[l] == ' ');
        if (inceput && sfarsit) {
            int k = l;
            if (p[l] == ' ')
                k++;
            char decat[100];
            strcpy(decat, p + k);
            strcpy(p, decat);
            return;
        }
        p = strstr(p + 1, cuv);
    }
}

void b(char cuv[100], char s[100]) {
    int l = strlen(cuv);
    char *p = strstr(s, cuv);
    while (p) {
        bool inceput = (p == s || *(p - 1) == ' ');
        bool sfarsit = (p[l] == '\0' || p[l] == ' ');
        if (inceput && sfarsit) {
            int k = l;
            if (p[l] == ' ')
                k++;
            char decat[100];
            strcpy(decat, p + k);
            strcpy(p, decat);
            p = strstr(p, cuv);
        } else
            p = strstr(p + 1, cuv);
    }
}

int main() {
    char alegere, cuv[100], s[100];
    cin >> alegere;
    cin.ignore(1000, '\n');
    cin.getline(cuv, 100);
    cin.getline(s, 100);
    if (alegere == 'a')
        a(cuv, s);
    else
        b(cuv, s);
    int n = strlen(s);
    if (n && s[n - 1] == ' ')
        s[n - 1] = '\0';
    cout << s << endl;
    return 0;
}