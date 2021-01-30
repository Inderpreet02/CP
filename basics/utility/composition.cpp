#include <iostream>

using namespace std;

class Birthday{
    public:
        Birthday(int m, int d, int y);
        void printDate();
    private:
        int month;
        int day;
        int year;
};

Birthday::Birthday(int m, int d,int y){
    month = m;
    day = d;
    year = y;
};

void Birthday::printDate(){
    cout << month << "/" << day << "/" << year << endl;
};


class People{
    public:
        People(string x, Birthday bo);
        void printInfo();
    private:
        string name;
        Birthday dateofBirth;
};

People::People(string x, Birthday bo)
:name(x), dateofBirth(bo)
{

};

void People::printInfo(){
    cout << name << " was born on ";
    dateofBirth.printDate();
};

int main(){

    Birthday birthObj(02,19,2002);
    birthObj.printDate();

    People boiboi("Big Boi", birthObj);
    boiboi.printInfo();
    
    return 0;
}