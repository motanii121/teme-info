#include <iostream>
using namespace std;

struct punct{
    int x, y;
};

struct cerc{
    struct punct centru;
    float raza;
}c;

int expresie(struct cerc a){
    if(a.centru.x <0 && a.centru.y > 0) return 1;
    else return 0;
}


int main(){

    cout << "x,y centru si dupa raza" << endl;
    cin >> c.centru.x >> c.centru.y >> c.raza;
    cout << expresie(c)<< endl;
    return 0;


}