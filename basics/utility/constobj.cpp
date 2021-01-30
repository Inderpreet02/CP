#include <iostream>

using namespace std;

class boi{
    public:
        boi();
        void printSomething();
        void printSomething2() const;
};

boi::boi(){
    
};

void boi::printSomething(){
    cout << "i am a regular func" << endl;
};

void boi::printSomething2() const{
    cout << "i am a const func" << endl;
};

int main(){

    const int x = 3;
    // x = 5;
    cout << x << endl;

    boi boiboi;

    boiboi.printSomething();


    const boi boiconst;
    boiconst.printSomething2();
    
    return 0;
}