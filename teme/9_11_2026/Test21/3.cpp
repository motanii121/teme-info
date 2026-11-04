#include <iostream>
using namespace std;

typedef struct{

    char nume[20];
    float medie;
}elev;
int i;
elev clasa[30];


int main(){

    for(int i = 0; i <30; i++){
        cout << "nume elev " << i <<": ";
        cin.get(clasa[i].nume, 20);
        cout << "medie elev " << i << ": ";
        cin >> clasa[i].medie;
    }
    return 0;

}