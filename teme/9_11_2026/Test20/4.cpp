#include <iostream>
using namespace std;

struct p{
    int a,b;
}x, y;
int t;



int main(){

    cout << "a,b x si dupa a,b y" << endl;
    cin >> x.a >> x.b >> y.a >> y.b;
    t = x.a;
    x.a = y.a;
    y.a = t;
    return 0;

}