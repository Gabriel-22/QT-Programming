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
    void setValues(int a, int b)
};

class rectangle : public shape
{
public:
    int area();
};

class triangle : public shape
{
public:
    int area();
};

#endif // TEST_H
