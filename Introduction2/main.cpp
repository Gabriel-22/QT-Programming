#include <iostream>
#include <string>
#include "test.h"
using namespace std;


int main()
{
    test book1;

    book1.setBookId(100);

    cout << book1.getBookId() << endl;

    return 0;
}
