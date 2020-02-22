//
// Created by Guber on 22.01.20.
//

#ifndef IBB_BASICS_P1_CITESTYLE_H
#define IBB_BASICS_P1_CITESTYLE_H


#include <string>
#include <vector>
#include "Book.h"

#include <algorithm>
#include <iterator>

enum class CiteElement {
    author, publisher, isbn, volume, title, year

};

class CiteStyle {
    CiteElement firstCiteElement;
    CiteElement secondCiteElement;
    CiteElement thirdCiteElement;
    CiteElement fourthCiteElement;
    CiteElement fifthCiteElement;
    CiteElement sixthCiteElement;

    std::string citeStyleName_;

//    std::vector<CiteElement> cite_;
public:
    explicit CiteStyle( std::string citeStyleName = " " );

    CiteElement getFirstCiteElement();

    CiteElement getSecondCiteElement();

    CiteElement getThirdCiteElement();

    CiteElement getFourthCiteElement();

    CiteElement getFifthCiteElement();

    CiteElement getSixthCiteElement();

    std::string getCiteStyleName();


    void setFirstCiteElement(int n);

    void setSecondCiteElement(int n);

    void setThirdCiteElement(int n);

    void setFourthCiteElement(int n);

    void setFifthCiteElement(int n);

    void setSixthCiteElement(int n);

    void setCiteStyleName(const std::string &citeName);


};

#endif //IBB_BASICS_P1_CITESTYLE_H
