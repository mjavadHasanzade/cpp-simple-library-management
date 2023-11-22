#include <iostream>
#include "./library.h"

int main() {

    Library mas("Mjavad");
    mas.addBook("Book 1", false, 1);
    mas.addBook("Book 2", false, 2);
    mas.addBook("Six", false, 3);
    mas.booksList();

    int borrowCode;
    cout << "enter the book code to borrow 0 to exit" << endl;
    while (cin >> borrowCode) {
        if(borrowCode==0){
            break;
        }
        mas.borrowBook(borrowCode);
        mas.booksList();

    }

    string bookToSearch;
    cout << "enter the book name to search 0 to exit" << endl;

    while (cin>>bookToSearch){
        if(bookToSearch=="0"){
            break;
        }
        mas.searchBook(bookToSearch);

    }


    return 0;
}
