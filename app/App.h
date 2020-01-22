//
// Created by Guber on 22.01.20.
//

#ifndef IBB_BASICS_P1_APP_H
#define IBB_BASICS_P1_APP_H


#include <ostream>

struct App {
private:

public:
    static void printMessage(std::ostream &os, std::string message);

//static T readUserInput(std::istream &is);
    static std::string readUserInputStr();
    static int readUserInputNbr();

//    template<typename T>
//    static T readUserInput(std::istream &cin);

    static void addBook();
    static void citeDefault();
    static void defineCiteStyle();
    static void deleteBook();
    static void quit();
};


#endif //IBB_BASICS_P1_APP_H
