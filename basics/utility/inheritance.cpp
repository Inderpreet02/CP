#include <iostream>

using namespace std;

class Mother{
    public:
        Mother();
        void sayName();
};

class Daughter: public Mother{
    public:
        Daughter();
};

Daughter::Daughter(){

};

Mother::Mother(){

};

void Mother::sayName(){
    cout << "Hahaha funny line" << endl;

};

int main(){

    Mother mom;
    mom.sayName();

    Daughter daut;
    daut.sayName();
    
    return 0;
}