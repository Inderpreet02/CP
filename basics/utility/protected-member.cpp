#include <iostream>

using namespace std;

class Mother{
    public:
        int publicv;
    private:
        int privatev;
    protected:
        int protectedv;
};

class Daughter: public Mother{
    public:
        void doSomething();
};

void Daughter::doSomething(){
    publicv = 1;
    protectedv = 2;
    // privatev = 3;
    cout << publicv << protectedv << endl;
};

int main(){

    Daughter gaben;
    gaben.doSomething();
    
    return 0;
}