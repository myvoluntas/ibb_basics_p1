//
// Created by Guber on 22.01.20.
//

#include <iostream>
#include "App.h"
#include "../domain/Book.h"
#include "../domain/CiteStyle.h"
#include "../database/BookRepository.h"
#include "ConsoleUtility.h"


App::App(bool appState) :
        appState_(appState) {}

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

bool App::getAppState() {
    return appState_;
}

void App::setAppState(const bool &state) {
    appState_ = state;
}


bool App::quitApp() {
    appState_ = false;
    return appState_;
}

Book App::defineBook() {
    Book book = Book();
    const std::string author = ConsoleUtility::readUserInput(
            "1/6 Nenne den Autor");
    book.setAuthor(author);

    const std::string publisher = ConsoleUtility::readUserInput(
            "2/6 Nenne den Verlag");
    book.setPublisher(publisher);

    const std::string isbn = ConsoleUtility::readUserInput(
            "3/6 Nenne die ISBN");
    book.setIsbn(isbn);

    const std::string volume = ConsoleUtility::readUserInput(
            "4/6 Nenne die Auflage/Ausgabe des Buches");
    book.setVolume(volume);

    const std::string title = ConsoleUtility::readUserInput(
            "5/6 Nenne den Buchtitel");
    book.setTitle(title);

    const std::string year = ConsoleUtility::readUserInput(
            "6/6 Nenne das Erscheinungsjahr");
    book.setYear(year);
    return book;
}

CiteStyle App::defineCiteStyle() {
    CiteStyle style{};
    std::string citeStyleName = ConsoleUtility::readUserInput(
            "Wie soll dein Zitierstil heißen? Beispiel: TU Darmstadt Stil");
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