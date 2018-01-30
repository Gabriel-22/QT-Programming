#include "example.h"
#include <iostream>
#include <string>
using namespace std;


int main(){

    int variable = 20;
    int *pointer;

    pointer = &variable;

    cout << "value of variable: " << variable << endl;
    cout << "adress of variable: " << &variable << endl;
    cout << endl;
    cout << "value stored in pointer: " << *pointer << endl;
    cout << "adress stored in pointer: " << pointer << endl;


    Example ob1,ob2;
    ob1.typeSomething();
    ob2.typeSomething();
    ob1.display();
    ob2.display();

    return 0;
}
