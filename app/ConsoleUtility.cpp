//
// Created by Guber on 28.01.20.
//
#include <string>
#include <iostream>
#include "App.h"
#include "ConsoleUtility.h"

//Todo
void ConsoleUtility::printMessage(std::ostream &os, const std::string &message) {
    os << message << std::endl;
}

std::string ConsoleUtility::readUserInput() {
    std::string input{};
    std::getline(std::cin, input);
    return input;
}

// Todo Templates/Generics
int ConsoleUtility::readUserInputNbr() {
    std::string input{};
    std::getline(std::cin, input);
    return std::stoi(input);
}

void ConsoleUtility::position0() {
    printMessage(std::cout, " ");
    std::string option0 = "1/6 [#####, _____, _____, _____, _____, _____]";
    printMessage(std::cout, option0);
}

void ConsoleUtility::position1() {
    std::string option1 = " 2/6 [_____, #####, _____, _____, _____, _____]";
    printMessage(std::cout, option1);
}

void ConsoleUtility::position2() {
    std::string option2 = "3/6 [_____, _____, #####, _____, _____, _____]";
    printMessage(std::cout, option2);

}

void ConsoleUtility::position3() {
    std::string option3 = "4/6 [_____, _____, _____, #####, _____, _____]";
    printMessage(std::cout, option3);

}

void ConsoleUtility::position4() {
    std::string option4 = "5/6 [_____, _____, _____, _____, #####, _____]";
    printMessage(std::cout, option4);

}

void ConsoleUtility::position5() {
    std::string option5 = "6/6 [_____, _____, _____, _____, _____, #####]";
    printMessage(std::cout, option5);

}

void ConsoleUtility::citeElementOptions() {
    printMessage(std::cout, "Welches Buchelement soll die markierte Zitatstelle belegen?");
    printMessage(std::cout, " ");
    printMessage(std::cout, "Buchelemente:");
    printMessage(std::cout, "[1] <- Autor");
    printMessage(std::cout, "[2] <- Verlag");
    printMessage(std::cout, "[3] <- ISBN");
    printMessage(std::cout, "[4] <- Ausgabe");
    printMessage(std::cout, "[5] <- Buchtitel");
    printMessage(std::cout, "[6] <- Jahr");
}

void ConsoleUtility::options() {
    printMessage(std::cout, "-------------------------------------------------");
    printMessage(std::cout, "Dir stehen folgende Funktionen zur Auswahl:");
    printMessage(std::cout, "[0] <- App beenden");
    printMessage(std::cout, "[1] <- Ein neues Buch speichern");
    printMessage(std::cout, "[2] <- Einen eigenen Zitierstil definieren");
    printMessage(std::cout, "[3] <- Die Buecher vordefiniert nach Harvard-Stil zitieren");
    printMessage(std::cout, "[4] <- Stil auswaehlen und zitieren");
    printMessage(std::cout, "[5] <- Das zuletzt angelegte Buch loeschen");
    printMessage(std::cout, "-------------------------------------------------");

}

void ConsoleUtility::printCiteStyles(const std::vector<CiteStyle> &citeStyles) {
    int i{0};
    for (auto style : citeStyles) {
        std::cout << "[" << i << "] " << style.getCiteStyleName() << std::endl;
        i++;
    }
}
