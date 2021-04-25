#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
using namespace std;

// Models a book instance with corresponding attributes
class Book {
	string title, author, pub_date;
public:
	// Parametric constructors 
  Book ();
  Book (string aTitle);
  Book (string aTitle, string aAuthor);
	Book (string aTitle, string aAuthor, string aPub_date);

	// function that outputs all attribute values
	void print();

  // attribute functions to be used for Library when storing and removing books
  string get_title();
  string get_author();
  string get_pd();
};

#endif
