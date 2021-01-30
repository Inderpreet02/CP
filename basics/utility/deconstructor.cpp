#include <iostream>

using namespace std;

class MyClass {
    public:
        MyClass();
        ~MyClass();
};

MyClass::MyClass(){
    cout << "why do i exists" << endl;    
};

MyClass::~MyClass(){
    cout << "i am the deconuctor" << endl;    
};

int main(){

    MyClass obj;
    cout << "Hello guys volg ho raha hai" << endl;
    
    return 0;
}