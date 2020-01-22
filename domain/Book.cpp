//
// Created by Guber on 22.01.20.
//

#include "Book.h"

#include <string.h>
#include "Book.h"

Book::Book(const std::string &author, const std::string &publisher,
           const std::string &isbn, const std::string &volume, const std::string &title, const std::string &year) :
        author_(author), publisher_(publisher), isbn_(isbn), volume_(volume), title_(title), year_(year) {
};


// --------------------- Setter

void Book::setAuthor(const std::string &author) {
    author_ = author;
}

void Book::setPublisher(const std::string &publisher) {
    publisher_ = publisher;
}

void Book::setIsbn(const std::string &isbn) {
    isbn_ = isbn;
}

void Book::setVolume(const std::string &volume) {
    volume_ = volume;
}

void Book::setTitle(const std::string &title) {
    title_ = title;
}

void Book::setYear(const std::string &year) {
    year_ = year;
}


// ----------------------- Getter

const std::string &Book::getAuthor() const {
    return author_;
}

const std::string &Book::getPublisher() const {
    return publisher_;
}

const std::string &Book::getIsbn() const {
    return isbn_;
}

const std::string &Book::getVolume() const {
    return volume_;
}

const std::string &Book::getTitle() const {
    return title_;
}

const std::string &Book::getYear() const {
    return year_;
}