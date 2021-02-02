#include <iostream>

using namespace std;

template <class T>
class Buck{
    T first, second;
    public:
        Buck(T a, T b){
        first = a;
        second = b;
        };

        T bigger();
};

template <class T>
T Buck<T>::bigger(){
    return (first>second?first:second);
};

int main(){

    Buck <int> bo(69, 105);

    cout << bo.bigger();
    
    return 0;
}