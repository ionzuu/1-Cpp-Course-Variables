#include<iostream>

using namespace std;

/* 
    Types of Variables

    TYPE_OF_VARIABLE nameofVariable
    type_of_variable nameofVariable1, nameofVariable2, nameofVariable3...    
*/

int main(){

    int a = 40, b, c = 20;

    cout << "a = " << a << " and the addres of the variable is " << &a << endl;
    cout << "a = " << b << " and the addres of the variable is " << &b << endl;
    cout << "a = " << c << " and the addres of the variable is " << &c << endl;

    short t1 = 5; // -32768 to 32767, 2 Bytes
    
    cout << t1 << endl;

    float t2 = 5.12; // 4 Bytes nr that are up to 38 zeros
    double t3 = 5.12; // 8 Bytes nr that are up to 308 zeros 5.35651321

    cout << t2 << endl;
    cout << t3 << endl;

    char t4; // character

    t4 = 'a';

    cout << t4 << endl;

    string t5 = "Hey, Hello World :) ";

    cout << t5 << endl;

    string x = "This the first part of a string";
    string y = "This is the second part of the string";
    string mergestring = x + " " + y;

    cout << mergestring <<endl;

    // Boolean | True or false, false is always zero 0, every number (includes negatives) are true
    bool t6 = true;

    cout << t6 << endl;

    // for unsigned short int 0 to 65535
    unsigned short t7 = 3007;
    
    cout << t7 << endl;

    const string NAMEOFGAME = "Dark Souls on C++ ";

    cout << NAMEOFGAME << endl;

}