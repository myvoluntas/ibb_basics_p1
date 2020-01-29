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

struct App {
private:

    static std::string getCiteElement(Book book, CiteElement element);

    static void citeBook(Book book, CiteStyle style);

public:
    static bool quitApp();

    static bool startApp();

    static void citeBooks(std::vector<Book> books, CiteStyle style);

    static int getCiteStyle();

    static void setCiteStyle(const std::string &index);

    static void pickCiteStyle();

    static void defaultCitation(std::vector<Book> books,CiteStyle style);

    static void printMessage(std::ostream &os, const std::string &message);

    //static void citeBooksToConsole(std::vector<Book> books, std::vector<CiteStyle> styles, int indexToCite );
    static std::string readUserInput();

    static Book defineBook();

    static void initBookDB();
    //static void storeDefaultCiteStyle();

    static CiteStyle defineCiteStyle();

    static bool readAppRunState();

    static int readUserInputNbr();
};


#endif //IBB_BASICS_P1_APP_H
