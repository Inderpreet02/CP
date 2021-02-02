#include <iostream>

using namespace std;

class Mother{
    public:
        Mother();
        ~Mother();
};

class Daughter: public Mother{
    public:
        Daughter();
        ~Daughter();
};

Mother::Mother(){
    cout << "I am the Mother constructor" << endl;
}

Mother::~Mother(){
    cout << "I am the ma deconstructor" << endl;
}

Daughter::Daughter(){
    cout << "I am the Daughtre constructor" << endl;
}

Daughter::~Daughter(){
    cout << "I am the da deconstructor" << endl;
}

int main(){

    // Mother ma;

    Daughter da;
    
    return 0;
}