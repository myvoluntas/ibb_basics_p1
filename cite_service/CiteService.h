//
// Created by Guber on 22.01.20.
//

#ifndef IBB_BASICS_P1_CITESERVICE_H
#define IBB_BASICS_P1_CITESERVICE_H


#include <string>
#include <vector>
#include "../domain/Book.h"

#include <algorithm>
#include <iterator>

struct CiteService {
private:

    static std::vector<Book> books;

    /*static std::vector<Book> books;
    CiteService::books.reserve(5);*/

    enum CiteElement {
        author, publisher, isbn, volume, title, year
    };
    static CiteElement firstCiteElement;
    static CiteElement secondCiteElement;
    static CiteElement thirdCiteElement;
    static CiteElement fourthCiteElement;
    static CiteElement fifthCiteElement;
    static CiteElement sixthCiteElement;

public:

    static const static CiteElement getFirstCiteElement();

    static const CiteService::CiteElement getSecondCiteElement();

    static const CiteService::CiteElement getThirdCiteElement();

    static const CiteService::CiteElement getFourthCiteElement();

    static const CiteService::CiteElement getFifthCiteElement();

    static const CiteService::CiteElement getSixedCiteElement();

    static void storeBook(Book book);

    static void setCiteElement(const int &n, CiteElement &citeElement);

    static const std::string getCiteElementFromBook(const CiteElement &config, const Book &book);

    static void citation(std::vector<Book> storedBooks);
};


#endif //IBB_BASICS_P1_CITESERVICE_H
