//
// Created by Guber on 26.01.20.
//

#ifndef IBB_BASICS_P1_BOOKREPOSITORY_H
#define IBB_BASICS_P1_BOOKREPOSITORY_H


//#include <vector>
#include <vector>
#include "../domain/Book.h"


class BookRepository {
    std::vector<Book> books;
public:
    void store(const Book &book);
    bool isBooksEmpty();
    std::vector<Book> getBooks();

    void deleteBookLIFO();

    // Todo: No used
    std::string getBookById(int id);

};


#endif //IBB_BASICS_P1_BOOKREPOSITORY_H
