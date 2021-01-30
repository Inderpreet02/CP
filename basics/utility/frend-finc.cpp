#include <iostream>

using namespace std;

class MyClass{
    public:
        MyClass(){stinkyVar = 0;}
    private:
        int stinkyVar;

    friend void stinkysFriend(MyClass &sfo);
};

void stinkysFriend(MyClass &sfo){
    sfo.stinkyVar = 99;
    cout << sfo.stinkyVar << endl;
};

int main(){

    MyClass bob;
    stinkysFriend(bob);
    
    return 0;
}