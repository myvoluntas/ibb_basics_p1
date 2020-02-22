//
// Created by Guber on 28.01.20.
//
#include <string>
#include <iostream>
#include "App.h"
#include "ConsoleUtility.h"
#include <vector>


ConsoleUtility::ConsoleUtility(){
    //             5     12     19     26     33     40
    //       0123456789012345678901234567890123456789012345
    option="0/6 [_____, _____, _____, _____, _____, _____]";
    a__=1;
    i__=0;
}

void ConsoleUtility::position(ConsoleUtility* point, char value, int pos){
    point->i__=pos;
    point->a__=1;

    point->option[0]=value;

    while(point->a__<6){
        point->option[point->i__]='#';
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

//void ConsoleUtility::position(std::ostream &os, const std::string &step, const int &citeIndex) {
//    std::vector<std::string> positionToSet = {"_____", "_____", "_____", "_____", "_____", "_____"};
//    positionToSet.insert(positionToSet.begin() + citeIndex, "#####");
// need to loop over positionToSet
//    std::cout << step << "[" << positionToSet << "]" << std::endl;
//}



void ConsoleUtility::position0() {
    printMessage(std::cout, " ");
    std::string option0 = "1/6 [#####, _____, _____, _____, _____, _____]";
    printMessage(std::cout, option0);
}

void ConsoleUtility::position1() {
    std::string option1 = "2/6 [_____, #####, _____, _____, _____, _____]";
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
