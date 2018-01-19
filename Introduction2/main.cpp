#include <iostream>
#include <string>
#include "test.h"
using namespace std;

class Test{
public:
    void print(){
        cout << "Hello" << endl;
    }


};

int main()
{
    Test object;
    object.print();

    return 0;
}
