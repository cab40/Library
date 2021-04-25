#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <vector>
#include "book.hpp"

using namespace std;

// Models a Library instance with the corresponding attributes
class Library {
	vector<Book> books;
public:
  Library();

	// Parametric constructor
	Library(vector<Book> books);

	// Inserts a book into the library based on specified values
	bool insert(string, string, string);
	bool insert(Book);

  // Removes books from the library based on specific values
	bool remove(string, string, string);
	bool remove(Book);

  // prints the books stored in the vector
	void print();
};

#endif
