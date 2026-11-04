#include <iostream>
using namespace std;

struct punct{
    int x,y;
};
struct segment{
    struct punct A, B;
}s;


int expresie(struct segment sgt){
    if(sgt.A.x ==0 && sgt.B.x == 0)return 1;
    else return 0;
}


int main(){

    cout << "x,y A si dupa x,y B" << endl;
    cin >> s.A.x >> s.A.y >> s.B.x >> s.B.y;
    cout << expresie(s) <<endl;
    return 0;


}