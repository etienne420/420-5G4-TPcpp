#include <sstream>
#include <algorithm>

#include "book.h"

using namespace std;

//constructeur par défaut
Book::Book() : title(""), author(""), isbn(""){}

//constructeur avec params
Book::Book(const string& title, const string& author, const string& isbn)
    : title(title), author(author), isbn(isbn), isAvailable(true), borrowerId(""){}