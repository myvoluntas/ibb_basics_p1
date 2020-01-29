//
// Created by Guber on 26.01.20.
//

#include "BookRepository.h"

void BookRepository::store(Book book) {
    books.push_back(book);
}

std::vector<Book> BookRepository::getBooks() {
    return books;
}

void BookRepository::deleteBookLIFO() {
    books.pop_back();
}

std::string BookRepository::getBookById(int id) {
    return books[id].getPublisher();
}
