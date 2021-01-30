#include <iostream>

using namespace std;

class MyObj{
    public:
        MyObj(int);
        void printCrap();
    private:
        int h;
};

MyObj::MyObj(int num)
:h(num)
{
};

void MyObj::printCrap(){
    cout << "h = " << h << endl;
    cout << "this -> h = " << this->h << endl;
    cout << "(*this).h = " << (*this).h << endl;
};

int main(){

    MyObj obj(66);
    obj.printCrap();
    
    return 0;
}