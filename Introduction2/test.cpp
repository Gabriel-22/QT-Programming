#include "test.h"
#include "test.ui"


void shape::setValues(int a, int b){

    height = a;
    width = b;
}

int shape::getValues(){

    return height*width;
}
