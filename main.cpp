/* Test Cases
  Book constructors
  Created 4 scenarios:
    a) no parameters - output: N/A, N/A, N/A
    b) title parameter - output: The Kite Runner, N/A, N/A
    c) title and author parameter - output: The Hitchhiker's Guide to the Galaxy, Douglas Adams
    d) title, author and publication date parameter - output: Brave New World, Aldous Huxley, 1932

  Library constructors
  Insertion
    created 2 book instances and one duplicate - output: the duplicate failed in inserting
  Removal 
    created 3 book instances and removed 2 identical books - output: all books successfully removed, the identical book failed at being removed
*/

#include <iostream>
#include <string.h>
#include <vector>
#include <cassert>

#include "a5_book.hpp"
#include "a5_library.hpp"

using namespace std;

// function to test the constructors of the classes
void test_constructors() {
  // testing constructors for the BOOK class
  Book book1("The Kite Runner");
  Book book2; // calling default/empty constructor
  Book book3 ("The Hitchhiker's Guide to the Galaxy", "Douglas Adams");
  Book book4 ("Brave New World", "Aldous Huxley", "1932");
  Book book5 ("The Design of Future Things", "Donald A. Norman", "2007");

  //storing BOOK objects into a vector 
  vector<Book> test_books;
  test_books.push_back(book1);
  test_books.push_back(book2);

  // testing constructors for Library class
  Library my_library1; // calling default/empty constructor
  Library my_library2(test_books);

  // outputing Book objects
  book1.print();
  book2.print();
  book3.print();
  book4.print();
  book5.print();

  cout << endl;
}

// function to test inserting a book into the library
void test_book_insertion() {
  // setting up the books
  Book my_book1("book1", "author1", "dpub1");
  Book my_book2("book2", "author2", "dpub2");
  Book my_book3("book2", "author2", "dpub2"); // duplicate value
    
  Library test_library;

  // test the scenarios
  assert(test_library.insert(my_book1));
  assert(test_library.insert(my_book2));
  //assert(test_library.insert(my_book3)); //this should fail as it is a duplicate

  // outputs library with inserted books
  test_library.print();
  cout << endl;
}

void test_book_removal() {
  // setting up the books
  Book my_book1("book1", "author1", "dpub1");
  Book my_book2("book2", "author2", "dpub2");
  Book my_book3("book3", "author3", "dpub3");

  vector<Book> test_books;
  test_books.push_back(my_book1);
  test_books.push_back(my_book2);
  test_books.push_back(my_book3);
    
  Library test_library(test_books);
  test_library.print(); //initial library vector
  cout << endl;

  // test the various scenarios
  assert(test_library.remove(my_book1)); // assertions are optional
  // assert(test_library.remove(my_book1)); // should fail
  assert(test_library.remove(my_book3));
  assert(test_library.remove(my_book2));

  test_library.print(); //final library vector with removed books
  cout << endl;
}

// function that execute all the tests to verify 
void execute_tests(){
  test_constructors();
  test_book_insertion();
  test_book_removal();
}

int main() {
  execute_tests();
  return 0;
}
