#include "example.h"
#include <iostream>
#include <string>
using namespace std;

Shape::Shape(){


}

Example::~Example()
{
    cout << "deconstructor" << endl;
}

void Example::printCrap(){

    cout << "Hello" << endl;
}
