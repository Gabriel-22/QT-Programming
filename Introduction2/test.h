#ifndef TEST_H
#define TEST_H
#include <iostream>
#include <string>
using namespace std;


class shape{

protected:
    int height;
    int width;

public:
    void setValues(int a, int b);
    int getValues();
};

#endif // TEST_H
