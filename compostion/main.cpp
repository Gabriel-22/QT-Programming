#include <iostream>
#include "birthday.h"
#include "people.h"
using namespace std;

int main()
{

    Birthday birthobj(7, 19, 1995);

    People gabriel("gabriel", birthobj);
    gabriel.printInfo;

    return 0;
}

