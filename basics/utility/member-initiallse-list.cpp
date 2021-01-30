#include <iostream>

using namespace std;

class MyObj{
    public:
        MyObj(int a, int b);
        void print();
    private:
        int regVar;
        const int constVar;
};

MyObj::MyObj(int a, int b)
: regVar(a), constVar(b)
{

};

void MyObj::print(){
    cout << "regular var is: " << regVar << " const var is: " << constVar << endl;
};

int main(){

    MyObj tempObj(3, 87);
    tempObj.print();
    
    return 0;
}