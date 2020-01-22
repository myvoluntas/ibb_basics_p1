//
// Created by Guber on 22.01.20.
//

#include <iostream>
#include "App.h"
#include "../domain/Book.h"
#include "../cite_service/CiteService.h"

void App::printMessage(std::ostream &os, std::string message) {
    os << message << std::endl;
}

std::string App::readUserInputStr() {
    //std::istream &is
    std::string input{};
    std::cin >> input;
    return input;
}

//template<typename T>
//T App::readUserInput(std::istream cin){
//    T input{};
//    cin >> input;
//    return input;
//}

void App::addBook() {
    Book book = Book();

    App::printMessage(std::cout, "Buchtitel");
    const std::string author = readUserInputStr();
    book.Book::setAuthor(author);


    App::printMessage(std::cout, "Verlag");
    const std::string publisher = readUserInputStr();
    book.Book::setPublisher(publisher);

    App::printMessage(std::cout,"ISBN");
    const std::string isbn = readUserInputStr();
    book.Book::setIsbn(isbn);

    App::printMessage(std::cout,"Ausgabe");
    const std::string volume = readUserInputStr();
    book.Book::setVolume(volume);

    App::printMessage(std::cout,"Titel");
    const std::string titel = readUserInputStr();
    book.Book::setTitle(titel);

    App::printMessage(std::cout,"Erscheinungsjahr");
    const std::string year = readUserInputStr();
    book.Book::setYear(year);

    CiteService::storeBook(book);
}

void App::citeDefault() {

}

void App::defineCiteStyle() {

}

void App::deleteBook() {

}

void App::quit() {

}
