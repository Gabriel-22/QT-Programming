#include <iostream>
#include <string>
#include "test.h"
using namespace std;
//polygon /rectangle square triangle


int main()
{
    int a,b;

    cout << "enter height " << endl;
    cin >> a;
    cout << "enter width: " << endl;
    cin >> b;

    shape rectangle1;

    rectangle1.setValues(a, b);
    cout << rectangle1.getValues() << endl;

    return 0;
}
