#include "Book.h"

#include <iostream>

Book::Book(string author, string title, string genre, int numPages)
{
	this->author = author;
	this->title = title;
	this->genre = genre;
	this->numPages = numPages;
}

string Book::getAuthor() const
{
	return author;
}

string Book::getTitle() const
{
	return title;
}

string Book::getGenre() const
{
	return genre;
}

int Book::getNumPages() const
{
	return numPages;
}

void Book::printBookDetails() const
{
	cout << title << " by " << author << " has " << numPages << " pages and it's genre is " << genre << endl;
}