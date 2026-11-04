#include <iostream>
#include <cstring>
using namespace std;

typedef struct{
    char s[256];
    int varsta;
}pers;
typedef struct{
    pers locatar;
    int nr_apart;
}apart;
apart x;

apart unui_locatar;


int main(){

    cout << "nume, varsta, nr apartament" << endl;
    cin.get(x.locatar.s, 256);
    cin >> x.locatar.varsta >> x.nr_apart;

    strcpy(unui_locatar.locatar.s, "Popescu Gigel");
    unui_locatar.locatar.varsta = 48;
    unui_locatar.nr_apart = 174;
    return 0;



}