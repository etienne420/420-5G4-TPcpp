#include <sstream>
#include <algorithm>

#include "book.h"

using namespace std;

//constructeur par défaut
Book::Book() : title(""), author(""), isbn(""){}

//constructeur avec params
Book::Book(const string& title, const string& author, const string& isbn)
    : title(title), author(author), isbn(isbn), isAvailable(true), borrowerId(""){}

//getters
string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
string Book::getISBN() const { return isbn; }
bool Book::getAvailability() const { return isAvailable; }
string Book::getBorrowerId() const { return borrowerId; }