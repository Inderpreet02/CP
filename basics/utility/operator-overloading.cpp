#include <iostream>

using namespace std;

class MyClass{
    public:
        int num;
        MyClass();
        MyClass(int);
        MyClass operator+(MyClass);
    private:
        int p;
};

MyClass::MyClass(){

};

MyClass::MyClass(int a)
:p(a)
{
    num = a;
};

MyClass MyClass::operator+(MyClass aso){
    MyClass brandNew;
    brandNew.num = num + aso.num;
    return(brandNew);
};


int main(){

    MyClass a(34);
    MyClass b(21);
    MyClass c;

    c = a + b;

    cout << c.num << endl;
    
    return 0;
}