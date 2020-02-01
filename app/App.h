//
// Created by Guber on 22.01.20.
//

#ifndef IBB_BASICS_P1_APP_H
#define IBB_BASICS_P1_APP_H


#include <ostream>
#include "../domain/CiteStyle.h"

class App {
    // Todo Implementation with move or &
    static std::string getCiteElement(Book book, const CiteElement &element);

    static void citeBook(const Book &book, CiteStyle style);

    bool appState_;

public:
    explicit App(bool appState = false);

    bool quitApp();

    bool getAppState();

    void setAppState(const bool &state);

    static void citeBooks(const std::vector<Book> &books, const CiteStyle &style);

    static void defaultCitation(const std::vector<Book> &books, const CiteStyle &style);

    static Book defineBook();

    static CiteStyle defineCiteStyle();
};


#endif //IBB_BASICS_P1_APP_H
