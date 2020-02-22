//
// Created by Guber on 28.01.20.
//

#ifndef IBB_BASICS_P1_CONSOLEUTILITY_H
#define IBB_BASICS_P1_CONSOLEUTILITY_H

class ConsoleUtility {

    int a__;
    int i__;

public:

    ConsoleUtility();

    std::string option;

    static void position(ConsoleUtility *point, char value, int pos);

    static void printMessage(std::ostream &os, const std::string &message);

    static std::string readUserInput(const std::string &message);

    static int readUserInputNbr();

    static int readUserInputAppFunctionality();

    static int readsUsrInputToPicCiteStyle(int sizeOfCiteStyles);
    static void citeElementOptions();

    static void options();

    static void printCiteStyles(const std::vector<CiteStyle> &citeStyles);
};


#endif //IBB_BASICS_P1_CONSOLEUTILITY_H
