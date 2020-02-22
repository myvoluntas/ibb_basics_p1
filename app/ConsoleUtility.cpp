//
// Created by Guber on 28.01.20.
//
#include <string>
#include <iostream>
#include "App.h"
#include "ConsoleUtility.h"
#include <vector>


ConsoleUtility::ConsoleUtility() {
    option = "0/6 [_____, _____, _____, _____, _____, _____]";
    a__ = 1;
    i__ = 0;
}

void ConsoleUtility::position(ConsoleUtility *point, char value, int pos) {
    point->i__ = pos;
    point->a__ = 1;

    point->option[0] = value;

    while (point->a__ < 6) {
        point->option[point->i__] = '#';
        point->i__++;
        point->a__++;
    }
}

//Todo Try catch handling
void ConsoleUtility::printMessage(std::ostream &os, const std::string &message) {
    os << message << std::endl;
}

std::string ConsoleUtility::readUserInput(const std::string &message) {
    std::string input{};
    printMessage(std::cout, message);
    std::getline(std::cin, input);
    return input;
}

int ConsoleUtility::readUserInputNbr() {
    std::string input{};
    std::getline(std::cin, input);
    return std::stoi(input);
}

int ConsoleUtility::readUserInputAppFunctionality() {
    std::string input{};
    std::getline(std::cin, input);
    int inputAsNumber = std::stoi(input);
    try {
        if (inputAsNumber < 0 || inputAsNumber > 5) {
//            return inputAsNumber;
            throw (7);//("Zahl ausserhalb des gueltigen Bereichs")
        } else return inputAsNumber;
    } catch (int errorCode) {
        std::cout << errorCode << std::endl;
        std::cout << "Geben Sie eine Zahl zwischen 0 und 5 ein." << std::endl;
    }
}

int ConsoleUtility::readsUsrInputToPicCiteStyle(int sizeOfCiteStyles) {
    std::string input{};
    std::getline(std::cin, input);
    int inputAsNumber = std::stoi(input);
    try {
        if (inputAsNumber < 0 || inputAsNumber > sizeOfCiteStyles) {
//            return inputAsNumber;
            throw (7);//("Zahl ausserhalb des gueltigen Bereichs")
        } else return inputAsNumber;
    } catch (int errorCode) {
        std::cout << errorCode << std::endl;
        std::cout << "Geben Sie eine Zahl zwischen 0 und " << sizeOfCiteStyles << " ein." << std::endl;
    }


}
//void ConsoleUtility::position(std::ostream &os, const std::string &step, const int &citeIndex) {
//    std::vector<std::string> positionToSet = {"_____", "_____", "_____", "_____", "_____", "_____"};
//    positionToSet.insert(positionToSet.begin() + citeIndex, "#####");
// need to loop over positionToSet
//    std::cout << step << "[" << positionToSet << "]" << std::endl;
//}


void ConsoleUtility::citeElementOptions() {
    printMessage(std::cout,
                 "Welches Buchelement soll die markierte Zitatstelle belegen?");
    printMessage(std::cout, " ");
    printMessage(std::cout, "Buchelemente:");
    printMessage(std::cout, "Autor     -> [1]");
    printMessage(std::cout, "Verlag    -> [2]");
    printMessage(std::cout, "ISBN      -> [3]");
    printMessage(std::cout, "Ausgabe   -> [4]");
    printMessage(std::cout, "Buchtitel -> [5]");
    printMessage(std::cout, "Jahr      -> [6]");
}

void ConsoleUtility::options() {
    printMessage(std::cout, "-------------------------------------------------");
    printMessage(std::cout, "Dir stehen folgende App Funktionen zur Auswahl:");
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
