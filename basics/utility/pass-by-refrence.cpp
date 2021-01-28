#include <iostream>

using namespace std;

void passByValue(int x);
void passByRefrence(int *x);

int main(){

    int patric = 13;
    int bog = 13;

    passByValue(patric);
    passByRefrence(&bog);

    cout<< "patric is " << patric <<endl;
    cout<< "bog is " << bog <<endl;

    
    return 0;
}

void passByValue(int x){
    x = 99;
}

void passByRefrence(int *x){
    *x = 66;
}