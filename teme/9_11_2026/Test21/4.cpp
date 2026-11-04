#include <cstring>
using namespace std;

struct data{
    int zi;
    int luna;
    int an;
};

struct elev{
    char nume[30];
    struct data data_nasterii;
    float media;
}ev;

int main(){

    strcpy(ev.nume, "Popescu Ion");
    return 0;

}