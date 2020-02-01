//
// Created by Guber on 22.01.20.
//

#ifndef IBB_BASICS_P1_APP_H
#define IBB_BASICS_P1_APP_H


#include <ostream>
#include "../domain/CiteStyle.h"

// Todo next: Get rid of static and implement quit as private field in App class.
static bool quit;
static int citeStyle;

class App {
    // Todo Implementation with move or &
    static std::string getCiteElement(Book book, const CiteElement &element);

    static void citeBook(const Book &book, CiteStyle style);

public:
    static bool quitApp();

    static bool startApp();

    static void citeBooks(const std::vector<Book> &books, const CiteStyle &style);

    static int getCiteStyle();

    static void setCiteStyle(const std::string &index);

    static void pickCiteStyle();

    static void defaultCitation(const std::vector<Book> &books, const CiteStyle &style);

    static Book defineBook();

    static CiteStyle defineCiteStyle();
};


#endif //IBB_BASICS_P1_APP_H
