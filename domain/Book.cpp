//
// Created by Guber on 22.01.20.
//

#include "Book.h"

#include <utility>

//Experiment with move()
Book::Book(std::string author, std::string publisher,
           std::string isbn, std::string volume, std::string title, std::string year) :
        author_(std::move(author)), publisher_(std::move(publisher)), isbn_(std::move(isbn)),
        volume_(std::move(volume)), title_(std::move(title)), year_(std::move(year)) {}


// Setter

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


// Getter

std::string Book::getAuthor() {
    return author_;
}

std::string Book::getPublisher() {
    return publisher_;
}

std::string Book::getIsbn() {
    return isbn_;
}

std::string Book::getVolume() {
    return volume_;
}

std::string Book::getTitle() {
    return title_;
}

std::string Book::getYear() {
    return year_;
}