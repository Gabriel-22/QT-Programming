#include <iostream>
#include <cstring>
using namespace std;

struct books{

    char name[50];
    char author[50];
    int id;
};

void printBook(struct books book){

    cout << "Book 1 name: " << book.name << endl;
    cout << "Book 1 author: " << book.author << endl;
    cout << "Book 1 id: " << book.id << endl;
}

int main()
{
    struct books book1;

    strcpy(book1.name, "whateverBook");
    strcpy(book1.author, "Gabriel");
    book1.id = 1;

    printBook(book1);

    return 0;
}

