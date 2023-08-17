#include "Book.h"

void Book::setBook(string title_, double price) {
    title = title_;
    if (price > 0) {
        costPrice = price;
    }
}

void Book::print()
{
	cout << "Title : " << title << endl;
	cout << "Price : " << costPrice << endl;
}



