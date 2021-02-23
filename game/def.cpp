#include <bits/stdc++.h>
#include "dec.h"
using namespace std;


//globular variableses;
string board[9] = {" "," "," "," "," "," "," "," "," "};
int player = 1;
int position = 0;

void introduction(){
    cout << "Press [Enter} to begain: ";
    getchar();//halts the escreen
    cout << "\n\n";
    cout<<"***********\n";
    cout<<"Tic-Tac-Toe\n";
    cout<<"***********\n";
    
    cout<<"Player 1) X\n";
    cout<<"Player 2) O\n";
    
    cout<<"The 3x3 grid is shown below:\n\n";
    
    cout << "     |     |      \n";
    cout << "  1  |  2  |  3   \n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |      \n";
    cout << "  4  |  5  |  6   \n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |      \n";
    cout << "  7  |  8  |  9   \n";
    cout << "     |     |      \n\n";    
}