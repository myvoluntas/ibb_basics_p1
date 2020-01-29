//
// Created by Guber on 28.01.20.
//
#include <string>
#include <iostream>
#include "App.h"
#include "ConsoleUtility.h"


void ConsoleUtility::position0() {
    std::string option0 = "1/6 [#####, _____, _____, _____, _____, _____]";
    App::printMessage(std::cout, option0);
}

void ConsoleUtility::position1() {
    std::string option1 = " 2/6 [_____, #####, _____, _____, _____, _____]";
    App::printMessage(std::cout, option1);
}

void ConsoleUtility::position2() {
    std::string option2 = "3/6 [_____, _____, #####, _____, _____, _____]";
    App::printMessage(std::cout, option2);

}

void ConsoleUtility::position3() {
    std::string option3 = "4/6 [_____, _____, _____, #####, _____, _____]";
    App::printMessage(std::cout, option3);

}

void ConsoleUtility::position4() {
    std::string option4 = "5/6 [_____, _____, _____, _____, #####, _____]";
    App::printMessage(std::cout, option4);

}

void ConsoleUtility::position5() {
    std::string option5 = "6/6 [_____, _____, _____, _____, _____, #####]";
    App::printMessage(std::cout, option5);

}

void ConsoleUtility::citeElementOptions() {
    App::printMessage(std::cout, "[1] <- Autor");
    App::printMessage(std::cout, "[2] <- Verlag");
    App::printMessage(std::cout, "[3] <- ISBN");
    App::printMessage(std::cout, "[4] <- Ausgabe");
    App::printMessage(std::cout, "[5] <- Buchtitel");
    App::printMessage(std::cout, "[6] <- Jahr");
}

void ConsoleUtility::options() {
    App::printMessage(std::cout, "-------------------------------------------------");
    App::printMessage(std::cout, "Dir stehen folgende Funktionen zur Auswahl:");
    App::printMessage(std::cout, "[0] <- Beende die App");
    App::printMessage(std::cout, "[1] <- Ein neues Buch einpflegen");
    App::printMessage(std::cout, "[2] <- Einen eigenen Zitierstil definieren");
    App::printMessage(std::cout, "[3] <- Buecher mit vordefinierten Stil zitieren");
    App::printMessage(std::cout, "[4] <- Einen Zitierstil auswaehlen");
    App::printMessage(std::cout, "[5] <- Das zuletzt angelegte Buch loeschen");
    App::printMessage(std::cout, "-------------------------------------------------");

}
