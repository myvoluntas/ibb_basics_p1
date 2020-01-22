//
// Created by Guber on 22.01.20.
//

#include "CiteService.h"
#include <vector>
#include <iostream>

std::vector<Book> CiteService::books;
CiteService::CiteElement CiteService::firstCiteElement{};
CiteService::CiteElement CiteService::secondCiteElement{};
CiteService::CiteElement CiteService::thirdCiteElement{};
CiteService::CiteElement CiteService::fourthCiteElement{};
CiteService::CiteElement CiteService::fifthCiteElement{};
CiteService::CiteElement CiteService::sixthCiteElement{};


void CiteService::storeBook(Book book) {
    CiteService::books.push_back(book);
}

const CiteService::CiteElement CiteService::getFirstCiteElement() {
    return firstCiteElement;
}

const CiteService::CiteElement CiteService::getSecondCiteElement() {
    return secondCiteElement;
}
const CiteService::CiteElement CiteService::getThirdCiteElement() {
    return thirdCiteElement;
}
const CiteService::CiteElement CiteService::getFourthCiteElement() {
    return fourthCiteElement;
}
const CiteService::CiteElement CiteService::getFifthCiteElement() {
    return fifthCiteElement;
}
const CiteService::CiteElement CiteService::getSixedCiteElement() {
    return sixthCiteElement;
}




void CiteService::setCiteElement(const int &n, CiteService::CiteElement &citeElement) {
    switch (n) {
        case 1:
            citeElement = author;
            break;
        case 2:
            citeElement = publisher;
            break;
        case 3:
            citeElement = isbn;
            break;
        case 4:
            citeElement = volume;
            break;
        case 5:
            citeElement = title;
            break;
        case 6:
            citeElement = year;
            break;
    }
}

const std::string CiteService::getCiteElementFromBook(const CiteService::CiteElement &config, const Book &book) {
    switch (config) {
        case author:
            book.getAuthor();
            break;
        case publisher:
            book.getPublisher();
            break;
        case isbn:
            book.getIsbn();
            break;
        case volume:
            book.getVolume();
            break;
        case title:
            book.getTitle();
            break;
        case year:
            book.getYear();
    }
}

void CiteService::citation(std::vector<Book> storedBooks) {
    //for(auto it = begin(storedBooks); it != end(storedBooks); ++it)
    //for (auto i = storedBooks.begin(); i != storedBooks.end(); i++)
    for (auto book : storedBooks) {
        const std::string firstElement = CiteService::getCiteElementFromBook(CiteService::getFirstCiteElement(),book);
        const std::string secondElement = CiteService::getCiteElementFromBook(CiteService::getSecondCiteElement(), book);
        const std::string thirdElement = CiteService::getCiteElementFromBook(CiteService::getThirdCiteElement(), book);
        const std::string fourthElement = CiteService::getCiteElementFromBook(CiteService::getFourthCiteElement(), book);
        const std::string fifthElement = CiteService::getCiteElementFromBook(CiteService::getFifthCiteElement(), book);
        const std::string sixthElement = CiteService::getCiteElementFromBook(CiteService::getSixedCiteElement(), book);

        std::cout << firstElement;
    }

}
