#include "book.hpp"

// default constructor with all attributes set to "N/A"
Book::Book():
  title("N/A"),
  author ("N/A"),
  pub_date ("N/A") {}

// constructor with title  given
Book::Book(string aTitle):
  title (aTitle),
  author ("N/A"),
  pub_date ("N/A") {}

// constructor with title and author given
Book::Book(string aTitle, string aAuthor):
  title(aTitle),
	author(aAuthor),
  pub_date ("N/A") {}

// constructor with all parameters given
Book::Book(string aTitle, string aAuthor, string aPub_date) :
	title(aTitle),
	author(aAuthor),
	pub_date(aPub_date) {}

// returns the title for the get_title function
string Book::get_title() {
	return title;
}

// returns the author for the get_author function
string Book::get_author() {
	return author;
}

// returns the publication date for get_pb
string Book::get_pd() {
	return pub_date;
}

// outputting the values of each BOOK object
void Book::print() {
	cout << title << ", " << author << ", " << pub_date << endl;
}
