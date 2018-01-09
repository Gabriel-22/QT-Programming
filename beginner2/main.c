#include "bmi.h"
#include <stdio.h>
#include <string>

int main(void)
{
    string name;
    int height;
    double weight;

    cout << "enter your name";
    cin >> name;
    cout << "enter your height";
    cin >> height;
    cout << "enter your weight";
    cin >> weight;

    BMI Student_1(name, height, weight);

    return 0;
}

