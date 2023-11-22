//
// Created by mjavad on 11/22/23.
//

#include "library.h"

using namespace std;

Library::Library(string name) {
    cout << "============================ " << name << " ==========================" << endl;
}

void Library::booksList() {
    for (int i = 0; i < books.size(); ++i) {
        cout << i + 1 << "--=> code " << books[i].code << " <=- " << books[i].name + " "
             << (books[i].borrowed ? "borrowed" : "not borrowed") << endl;
    }
}

void Library::addBook(string bookName, bool bookBorrowed, int bookCode) {
    books.push_back({bookName, bookBorrowed, bookCode});
}

void Library::borrowBook(int bookCode) {
    int ex = bookExists(bookCode);
    if (ex != -1) {
        if (books[ex].borrowed) {
            cout << "Already borrowed" << endl;
        } else {
            books[ex].borrowed = true;
            cout << " borrowed successfully" << endl;
        }
    } else {
        cout << "-!-!- error: not exists -!-!-" << endl;
    }
}

int Library::bookExists(int code) {
    for (int i = 0; i < books.size(); ++i) {
        if (code == books[i].code) {
            return i;
        }
    }
    return -1;
}

void Library::searchBook(string name) {
    bool ex=false;
    for (int i = 0; i < books.size(); ++i) {
        if (name == books[i].name) {
            cout << "--=> code " << books[i].code << " <=- " << books[i].name + " "
                 << (books[i].borrowed ? "borrowed" : "not borrowed") << endl;
            ex=true;
        }
    }

    if(!ex)
        cout <<"not exists"<<endl;
}