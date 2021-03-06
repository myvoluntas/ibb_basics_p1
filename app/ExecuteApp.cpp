//
// Created by Guber on 23.01.20.
//

#include <iostream>
#include "ExecuteApp.h"
#include "App.h"
#include "../database/BookRepository.h"
#include "../database/CiteStyleRepository.h"
#include "ConsoleUtility.h"

BookRepository book_database = BookRepository{};
CiteStyleRepository citeStyle_database = CiteStyleRepository{};


void initBookDB() {
    //book_database.books.reserve(10);
    Book book1{"Daniel Kahnemann", "Fischer Verlag",
               "978-435-123", "1", "Schnelles Denken, Langsames Denken", "2015"};
    Book book2{"Torsten t. Will", "Rheinwerk",
               "978-3836243605", "1", "c++: Das umfassende Handbuch", "2018"};
    Book book3{"Scott Meyers", "O' Reilly",
               "978-526-423", "1", "Effective Modern C++", "2019"};

    std::vector<Book> defaultBooks{book1, book2, book3};

    for (const auto &book : defaultBooks) {
        book_database.store(book);
    }
}

// Das ist ein Test
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
    App app = App();
    app.setAppState(true);
    initBookDB();

    ConsoleUtility::options();
    initCiteDB();
    do {
        int inputInt = ConsoleUtility::readUserInputAppFunctionality();
        switch (inputInt) {
            case 0:
                app.quitApp();
                break;
            case 1: {
                Book book;
                book = App::defineBook();
                book_database.store(book);
                std::cout << " " << std::endl;
                std::cout << "Danke. Buch gespeichert" << std::endl;
                std::cout << "Du kannst wieder zwischen den App Funktionen waehlen!" << std::endl;
                break;
            }
            case 2: {
                CiteStyle style = App::defineCiteStyle();
                citeStyle_database.store(style);
                std::cout << " " << std::endl;
                std::cout << "Du kannst zwischen den App Funktionen waehlen!" << std::endl;
                break;
            }
            case 3: {
                App::defaultCitation(book_database.getBooks(), citeStyle_database.getCiteStyleByIndex(0));
                std::cout << " " << std::endl;
                std::cout << "Du kannst zwischen den App Funktionen waehlen!" << std::endl;
                break;
            }
            case 4: {
                ConsoleUtility::printCiteStyles(citeStyle_database.getCiteStyles());
                ConsoleUtility::printMessage(std::cout, "Waehle Zitierstil");

                int sizeOfCiteStyles = citeStyle_database.lengthCiteStyles();
                try {
                    int userData = ConsoleUtility::readsUsrInputToPicCiteStyle(sizeOfCiteStyles);
                    App::citeBooks(book_database.getBooks(),
                                   citeStyle_database.getCiteStyleByIndex(userData));
                    std::cout << " " << std::endl;
                    std::cout << "Du kannst zwischen den App Funktionen waehlen!" << std::endl;
                } catch (int &errorCode) {

                    std::cout << "Deine Auswahl wurde nicht gefunden." << " error code: " << errorCode
                              << std::endl;
                    std::cout << "Waehle erneut zwischen den App Funktionen waehlen!" << std::endl;
                }
                break;
            }
            case 5:
                try {
                    if (!book_database.isBooksEmpty()) {
                        book_database.deleteBookLIFO();
                        // Todo: Print all books from repo.
                        std::cout << " " << std::endl;
                        std::cout << "Du kannst zwischen den App Funktionen waehlen!" << std::endl;
                    } else throw (42);
                }
                catch (int &errorCode) {
                    std::cout << "Deine Buchdatenbank ist leer. Drucke die 1 um ein neues Buch zu speichern."
                              << std::endl;
                    std::cout << " error code: " << errorCode << std::endl;
                    break;
                }
            default:
                break;
        }

    } while (app.getAppState());
}
