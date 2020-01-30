//
// Created by Guber on 22.01.20.
//

#include <iostream>
#include "App.h"
#include "../domain/Book.h"
#include "../domain/CiteStyle.h"
#include "../database/BookRepository.h"
#include "ConsoleUtility.h"


void App::defaultCitation(const std::vector<Book> &books, const CiteStyle &style) {
    App::citeBooks(books, style);
}

std::string App::getCiteElement(Book book, const CiteElement &element) {
    switch (element) {
        case CiteElement::author:
            return book.getAuthor();
        case CiteElement::title:
            return book.getTitle();
        case CiteElement::publisher:
            return book.getPublisher();
        case CiteElement::isbn:
            return book.getIsbn();
        case CiteElement::volume:
            return book.getVolume();
        case CiteElement::year:
            return book.getYear();
        default:
            break;
    }
}

void App::citeBook(const Book &book, CiteStyle style) {
    std::string first = getCiteElement(book, style.getFirstCiteElement());
    std::string second = getCiteElement(book, style.getSecondCiteElement());
    std::string third = getCiteElement(book, style.getThirdCiteElement());
    std::string fourth = getCiteElement(book, style.getFourthCiteElement());
    std::string fifth = getCiteElement(book, style.getFifthCiteElement());
    std::string sixth = getCiteElement(book, style.getSixthCiteElement());

    std::string space = ", ";
    std::cout << "[" << first <<
              space << second << space << third << space << fourth << space
              << fifth << space << sixth << "]" << std::endl;
}

void App::citeBooks(const std::vector<Book> &books, const CiteStyle &style) {
    for (const auto &book : books) {
        citeBook(book, style);
    }
}

void App::setCiteStyle(const std::string &index) {
    citeStyle = std::stoi(index);
}

int App::getCiteStyle() {
    return citeStyle;
}

bool App::quitApp() {
    quit = false;
    return quit;
}

bool App::startApp() {
    quit = true;
    return quit;
}

void App::pickCiteStyle() {
    ConsoleUtility::printMessage(std::cout, "Waehle Zitierstil");
    const std::string userInput = ConsoleUtility::readUserInput();
    App::setCiteStyle(userInput);
}


Book App::defineBook() {
    Book book = Book();

    ConsoleUtility::printMessage(std::cout, "1/6 Nenne den Autor");
    const std::string author = ConsoleUtility::readUserInput();
    book.setAuthor(author);


    ConsoleUtility::printMessage(std::cout, "2/6 Nenne den Verlag");
    const std::string publisher = ConsoleUtility::readUserInput();
    book.setPublisher(publisher);

    ConsoleUtility::printMessage(std::cout, "3/6 Nenne die ISBN");
    const std::string isbn = ConsoleUtility::readUserInput();
    book.setIsbn(isbn);

    ConsoleUtility::printMessage(std::cout, "4/6 Nenne die Auflage/Ausgabe des Buches ");
    const std::string volume = ConsoleUtility::readUserInput();
    book.setVolume(volume);

    ConsoleUtility::printMessage(std::cout, "5/6 Nenne den Buchtitel");
    const std::string title = ConsoleUtility::readUserInput();
    book.setTitle(title);

    ConsoleUtility::printMessage(std::cout, "6/6 Nenne das Erscheinungsjahr");
    const std::string year = ConsoleUtility::readUserInput();
    book.setYear(year);
    return book;
}


CiteStyle App::defineCiteStyle() {
    CiteStyle style{};
    ConsoleUtility::printMessage(std::cout, "Wie soll dein Zitierstil heißen? Beispiel: TU Darmstadt Stil");
    std::string citeStyleName = ConsoleUtility::readUserInput();
    style.setCiteStyleName(citeStyleName);

    ConsoleUtility::position0();
    ConsoleUtility::citeElementOptions();
    int firstUserInput = ConsoleUtility::readUserInputNbr();
    style.setFirstCiteElement(firstUserInput);

    ConsoleUtility::position1();
    ConsoleUtility::citeElementOptions();
    int secondUserInput = ConsoleUtility::readUserInputNbr();
    style.setSecondCiteElement(secondUserInput);


    ConsoleUtility::position2();
    ConsoleUtility::citeElementOptions();
    int thirdUserInput = ConsoleUtility::readUserInputNbr();
    style.setThirdCiteElement(thirdUserInput);

    ConsoleUtility::position3();
    ConsoleUtility::citeElementOptions();
    int fourthUserInput = ConsoleUtility::readUserInputNbr();
    style.setFourthCiteElement(fourthUserInput);

    ConsoleUtility::position4();
    ConsoleUtility::citeElementOptions();
    int fifthUserInput = ConsoleUtility::readUserInputNbr();
    style.setFifthCiteElement(fifthUserInput);

    ConsoleUtility::position5();
    ConsoleUtility::citeElementOptions();
    int sixthUserInput = ConsoleUtility::readUserInputNbr();
    style.setSixthCiteElement(sixthUserInput);

    return style;
}