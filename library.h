//
// Created by mjavad on 11/22/23.
//

#ifndef LIBRARY_LIBRARY_H
#define LIBRARY_LIBRARY_H

#include "vector"
#include <iostream>
using namespace std;

class Library {

private:

        struct book{
            string name;
            bool borrowed;
            int code;
        };
        vector<book> books;

        int bookExists(int code);
public:
        Library(string name);
        void booksList();
        void addBook(string bookName,bool borrowed,int code);
        void borrowBook(int bookCode);
        void searchBook(string name);

};


#endif //LIBRARY_LIBRARY_H
