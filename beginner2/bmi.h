//function declaration
#ifndef BMI_H
#define BMI_H

#include <stdio.h>
#include <iostream>

using namespace std;

class BMI{
public:
    //default constructor
    BMI();

    //overload constructor
    BMI(string, int, double);

private:
    //member variables
    string newname;
    int newheight;
    double newweight;
};

#endif // BMI_H
