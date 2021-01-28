#include <iostream>

using namespace std;

int main(){

    double arr[10];

    cout << sizeof(arr)<<endl;
    
    cout << sizeof(arr)/sizeof(arr[1]);

    return 0;
}