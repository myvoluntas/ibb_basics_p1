//
// Created by Guber on 22.01.20.
//

#include <iostream>
#include "App.h"
#include "../domain/Book.h"
#include "../domain/CiteStyle.h"
#include "../database/BookRepository.h"
#include "ConsoleUtility.h"

void App::printMessage(std::ostream &os, const std::string &message) {
    os << message << std::endl;
}


std::string App::readUserInput() {
    //std::istream &is
    std::string input{};
    std::getline(std::cin, input);
    return input;
}

int App::readUserInputNbr() {
    std::string input{};
    //std::string bla;
    std::getline(std::cin, input);
    return std::stoi(input);
}


void App::defaultCitation(std::vector<Book> books, CiteStyle style) {
    App::citeBooks(books, style);
}

std::string App::getCiteElement(Book book, CiteElement element) {
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

void App::citeBook(Book book, CiteStyle style) {
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

void App::citeBooks(std::vector<Book> books, CiteStyle style) {
    for (auto book : books) {
        citeBook(book, style);
    }
}

//void App::citeBooksToConsole(std::vector<Book> books, std::vector<CiteStyle> styles, int indexToCite) {
//    citeBooks(books, styles[indexToCite]);
//}


void App::setCiteStyle(const std::string &index) {
    citeStyle = std::stoi(index);
}

int App::getCiteStyle() {
    return citeStyle;
}

bool App::readAppRunState() {
    return quit;
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
    App::printMessage(std::cout, "Waehle Zitierstil");
    const std::string userInput = readUserInput();
    App::setCiteStyle(userInput);
}


Book App::defineBook() {
    Book book = Book();

    App::printMessage(std::cout, "1/6 Nenne den Autor");
    const std::string author = readUserInput();
    book.setAuthor(author);


    App::printMessage(std::cout, "2/6 Nenne den Verlag");
    const std::string publisher = readUserInput();
    book.setPublisher(publisher);

    App::printMessage(std::cout, "3/6 Nenne die ISBN");
    const std::string isbn = readUserInput();
    book.setIsbn(isbn);

    App::printMessage(std::cout, "4/6 Nenne die Ausgabe");
    const std::string volume = readUserInput();
    book.setVolume(volume);

    App::printMessage(std::cout, "5/6 Nenne den Titel");
    const std::string title = readUserInput();
    book.setTitle(title);

    App::printMessage(std::cout, "6/6 Erscheinungsjahr");
    const std::string year = readUserInput();
    book.setYear(year);
    return book;
    //book_database.store(book);

    // Todo create default Cytestyle object
    //CiteStyle::defaultCitation();
}


CiteStyle App::defineCiteStyle() {
    CiteStyle style{};
    App::printMessage(std::cout, "Bennene deinen Zitierstil");
    std::string citeStyleName = readUserInput();
    style.setCiteStyleName(citeStyleName);

    ConsoleUtility::position0();
    ConsoleUtility::citeElementOptions();
    int firstUserInput = readUserInputNbr();
    style.setFirstCiteElement(firstUserInput);

    ConsoleUtility::position1();
    ConsoleUtility::citeElementOptions();
    int secondUserInput = readUserInputNbr();
    style.setSecondCiteElement(secondUserInput);


    ConsoleUtility::position2();
    ConsoleUtility::citeElementOptions();
    int thirdUserInput = readUserInputNbr();
    style.setThirdCiteElement(thirdUserInput);

    ConsoleUtility::position3();
    ConsoleUtility::citeElementOptions();
    int fourthUserInput = readUserInputNbr();
    style.setFourthCiteElement(fourthUserInput);

    ConsoleUtility::position4();
    ConsoleUtility::citeElementOptions();
    int fifthUserInput = readUserInputNbr();
    style.setFifthCiteElement(fifthUserInput);

    ConsoleUtility::position5();
    ConsoleUtility::citeElementOptions();
    int sixthUserInput = readUserInputNbr();
    style.setSixthCiteElement(sixthUserInput);

    return style;
}