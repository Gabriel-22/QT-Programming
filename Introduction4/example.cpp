#include "example.h"
#include <iostream>
#include <string>
using namespace std;


Example::Example(){

    data = 50;
}

void Example::typeSomething(){

    cout << "constructor being called" << endl;
}

void Example::display(){

    cout << "data is equal to " << data << endl;
}
