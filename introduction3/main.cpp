#include <iostream>
#include <cstring>
using namespace std;

class Books{
private:
    int id = 256;
public:
    void setId(int x){
        id = x;
        cout << x;
    }

    void printBookId(){
        cout << "the book id is: " << id << endl;
    }
};

int main()
{
    Books book1;

    book1.printBookId();

    book1.setId(3);

    return 0;
}

