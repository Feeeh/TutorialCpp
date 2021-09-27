#include <iostream>

#include "Book.h"

using namespace std;

//void printBookDetails(const Book& book);

int main()
{
	Book gameOfThrones("George Martin", "Game of Thrones", "Fantasy", 865);

	Book mathBook("James Stewart", "Calculus", "Math", 1392);

	Book cppBook("Bjarne Stroustrup", "The C++ Programming Language", "Programming", 1376);

	gameOfThrones.printBookDetails();
	mathBook.printBookDetails();
	cppBook.printBookDetails();

	return 0;
}

//void printBookDetails(const Book& book)
//{
//	cout << book.getTitle() << " by " << book.getAuthor() << " has " << book.getNumPages() << " pages and it's genre is " << book.getGenre() << endl;
//}