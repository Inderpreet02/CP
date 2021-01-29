#include <iostream>

using namespace std;

class MyClass {
    public:
        void myMethod();
};

void MyClass::myMethod(){
    cout << "hellow boi" << endl;
};

int main(){

    MyClass myObject;
    MyClass *myPointer = &myObject;

    myObject.myMethod();
    myPointer->myMethod();

    return 0;
}

