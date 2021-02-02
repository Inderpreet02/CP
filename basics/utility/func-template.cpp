#include <iostream>

using namespace std;

template <class lol>
lol addCrap(lol a, lol b){
    return a + b;
}

int main(){

    double x = 7.6, y = 42.3, z;

    z = addCrap(x, y);

    cout << z << endl;
    
    return 0;
}