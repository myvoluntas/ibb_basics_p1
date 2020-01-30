//
// Created by Guber on 23.01.20.
//

#include <iostream>
#include "ExecuteApp.h"
#include "App.h"
#include "../database/BookRepository.h"
#include "../database/CiteStyleRepository.h"
#include "ConsoleUtility.h"

// Todo: DB instances in Heap
BookRepository book_database = BookRepository{};
CiteStyleRepository citeStyle_database = CiteStyleRepository{};


void initBookDB() {
    //book_database.books.reserve(10);
    Book book1{"Daniel Kahnemann", "Fischer Verlag", "978-435-123", "1", "Schnelles Denken, Langsames Denken", "2015"};
    Book book2{"Torsten t. Will", "Rheinwerk", "978-3836243605", "1", "c++: Das umfassende Handbuch", "2018"};
    Book book3{"Scott Meyers", "O' Reilly", "978-526-423", "1", "Effective Modern C++", "2019"};

    std::vector<Book> defaultBooks{book1, book2, book3};

    for (const auto &book : defaultBooks) {
        book_database.store(book);
    }
}

inline void initCiteDB() {
    CiteStyle harvard;
    harvard.setCiteStyleName("Harvard Citestyle (Pseudo)");
    harvard.setFirstCiteElement(1);
    harvard.setSecondCiteElement(2);
    harvard.setThirdCiteElement(3);
    harvard.setFourthCiteElement(4);
    harvard.setFifthCiteElement(5);
    harvard.setSixthCiteElement(6);

    citeStyle_database.store(harvard);
}


void ExecuteApp::run() {
    int state = App::startApp();

    initBookDB();
    initCiteDB();
    do {
        std::string inputConsole;
        ConsoleUtility::options();
        std::getline(std::cin, inputConsole);
        int inputInt = std::stoi(inputConsole);

        switch (inputInt) {
            case 0:
                state = App::quitApp();
                break;
            case 1: {
                Book book;
                book = App::defineBook();
                book_database.store(book);
                break;
            }
            case 2: {
                CiteStyle style = App::defineCiteStyle();
                citeStyle_database.store(style);
                break;
            }
            case 3:
                App::defaultCitation(book_database.getBooks(), citeStyle_database.getCiteStyleByIndex(0));
                break;
            case 4: {
                ConsoleUtility::printCiteStyles(citeStyle_database.getCiteStyles());
                App::pickCiteStyle();
                App::citeBooks(book_database.getBooks(),
                               citeStyle_database.getCiteStyleByIndex(App::getCiteStyle()));
                break;
            }
            case 5:
                book_database.deleteBookLIFO();
                break;
            default:
                break;
        }

    } while (state);
}