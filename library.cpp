#include "library.hpp"

#include <string>
#include <iostream>
using namespace std;

Library::Library() {} 

Library::Library(vector<Book> n_books) {
  //Sets the library vector based off the books input
  for (int index = 0; index < n_books.size(); index++){
    books.push_back(n_books[index]);
  }
}

bool Library::insert(string n_title, string n_authors, string n_dop) {
	return insert(Book(n_title, n_authors, n_dop));
}

bool Library::insert(Book n_book) {
  /*
  The function here walks through the library vector and if it reaches a book with the same title as the one requested, then it fails the test. If there is no book with the same title, it then pushes the new book onto the stack.
  */
	for (int index = 0; index < books.size(); index++){
		if (books[index].get_title() == n_book.get_title()) return false;
	}
	books.push_back(n_book);

	return true;
}

bool Library::remove(string r_title, string r_authors, string r_dop) {
	return remove(Book(r_title, r_authors, r_dop));
}

bool Library::remove(Book n_book) {
  /*
  The function here walks through the library vector and if it reaches a book with the same title as the one requested, then it erases it. If there is no book with that title, it returns false
  */
  for (int index = 0; index < books.size(); index++){
    if (books[index].get_title() == n_book.get_title()){
      books.erase(books.begin()+index);
      return true;
    }
  }
	return false;
}

// function that prints the book instances in the Library
void Library::print() {
  for (int index = 0; index < books.size(); index++){
    books[index].print();
  }
}
