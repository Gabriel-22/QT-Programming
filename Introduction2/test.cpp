#include "test.h"

test::test()
{

}

void shape::setValues(int a, int b){

    height = a;
    width = b;
    }

int rectangle::area(){

        return(height * width);
    }

int triangle::area(){

        return((height * width)/2);
    }
