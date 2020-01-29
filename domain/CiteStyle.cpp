//
// Created by Guber on 22.01.20.
//

#include "CiteStyle.h"
#include <vector>

CiteElement CiteStyle::getFirstCiteElement() {
    return firstCiteElement;
}

CiteElement CiteStyle::getSecondCiteElement() {
    return secondCiteElement;
}

CiteElement CiteStyle::getThirdCiteElement() {
    return thirdCiteElement;
}

CiteElement CiteStyle::getFourthCiteElement() {
    return fourthCiteElement;
}

CiteElement CiteStyle::getFifthCiteElement() {
    return fifthCiteElement;
}

CiteElement CiteStyle::getSixthCiteElement() {
    return sixthCiteElement;
}

void CiteStyle::setFirstCiteElement(int n) {
    switch (n) {
        case 1:
            firstCiteElement = CiteElement::author;
            break;
        case 2:
            firstCiteElement = CiteElement::publisher;
            break;
        case 3:
            firstCiteElement = CiteElement::isbn;
            break;
        case 4:
            firstCiteElement = CiteElement::volume;
            break;
        case 5:
            firstCiteElement = CiteElement::title;
            break;
        case 6:
            firstCiteElement = CiteElement::year;
            break;
        default: break;
    }
}

void CiteStyle::setSecondCiteElement(int n) {
    switch (n) {
        case 1:
            secondCiteElement = CiteElement::author;
            break;
        case 2:
            secondCiteElement = CiteElement::publisher;
            break;
        case 3:
            secondCiteElement = CiteElement::isbn;
            break;
        case 4:
            secondCiteElement = CiteElement::volume;
            break;
        case 5:
            secondCiteElement = CiteElement::title;
            break;
        case 6:
            secondCiteElement = CiteElement::year;
            break;
        default: break;
    }
}

void CiteStyle::setThirdCiteElement(int n) {
    switch (n) {
        case 1:
            thirdCiteElement = CiteElement::author;
            break;
        case 2:
            thirdCiteElement = CiteElement::publisher;
            break;
        case 3:
            thirdCiteElement = CiteElement::isbn;
            break;
        case 4:
            thirdCiteElement = CiteElement::volume;
            break;
        case 5:
            thirdCiteElement = CiteElement::title;
            break;
        case 6:
            thirdCiteElement = CiteElement::year;
            break;
        default: break;
    }
}

void CiteStyle::setFourthCiteElement(int n) {
    switch (n) {
        case 1:
            fourthCiteElement = CiteElement::author;
            break;
        case 2:
            fourthCiteElement = CiteElement::publisher;
            break;
        case 3:
            fourthCiteElement = CiteElement::isbn;
            break;
        case 4:
            fourthCiteElement = CiteElement::volume;
            break;
        case 5:
            fourthCiteElement = CiteElement::title;
            break;
        case 6:
            fourthCiteElement = CiteElement::year;
            break;
        default: break;
    }
}

void CiteStyle::setFifthCiteElement(int n) {
    switch (n) {
        case 1:
            fifthCiteElement = CiteElement::author;
            break;
        case 2:
            fifthCiteElement = CiteElement::publisher;
            break;
        case 3:
            fifthCiteElement = CiteElement::isbn;
            break;
        case 4:
            fifthCiteElement = CiteElement::volume;
            break;
        case 5:
            fifthCiteElement = CiteElement::title;
            break;
        case 6:
            fifthCiteElement = CiteElement::year;
            break;
        default: break;
    }
}

void CiteStyle::setSixthCiteElement(int n) {
    switch (n) {
        case 1:
            sixthCiteElement = CiteElement::author;
        case 2:
            sixthCiteElement = CiteElement::publisher;
        case 3:
            sixthCiteElement = CiteElement::isbn;
        case 4:
            sixthCiteElement = CiteElement::volume;
        case 5:
            sixthCiteElement = CiteElement::title;
        case 6:
            sixthCiteElement = CiteElement::year;
            break;
        default:
            break;
    }
}

std::string CiteStyle::getCiteStyleName() {
    return citeStyleName;
}


void CiteStyle::setCiteStyleName(std::string citeName) {
    citeStyleName = citeName;
}
