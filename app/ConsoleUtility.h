//
// Created by Guber on 28.01.20.
//

#ifndef IBB_BASICS_P1_CONSOLEUTILITY_H
#define IBB_BASICS_P1_CONSOLEUTILITY_H

struct ConsoleUtility {

    static void printMessage(std::ostream &os, const std::string &message);

    static std::string readUserInput();

    static int readUserInputNbr();

    static void position0();

    static void position1();

    static void position2();

    static void position3();

    static void position4();

    static void position5();

    static void citeElementOptions();

    static void options();

    static void printCiteStyles(const std::vector<CiteStyle> &citeStyles);
};


#endif //IBB_BASICS_P1_CONSOLEUTILITY_H