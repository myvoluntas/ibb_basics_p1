//
// Created by Guber on 22.01.20.
//

#ifndef IBB_BASICS_P1_APP_H
#define IBB_BASICS_P1_APP_H


#include <ostream>
#include "../domain/CiteStyle.h"

class App {
    // Todo Implementation with move or &
    std::string getCiteElement(Book book, const CiteElement &element);

    void citeBook(const Book &book, CiteStyle style);

public:
    App(bool appState, int citeStyle);

    bool quitApp();

    bool getAppState();

    void setAppState(const bool &state);

    void citeBooks(const std::vector<Book> &books, const CiteStyle &style);

    void defaultCitation(const std::vector<Book> &books, const CiteStyle &style);

    Book defineBook();

    CiteStyle defineCiteStyle();
};


#endif //IBB_BASICS_P1_APP_H
