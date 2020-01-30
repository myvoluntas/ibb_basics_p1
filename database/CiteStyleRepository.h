//
// Created by Guber on 26.01.20.
//

#ifndef IBB_BASICS_P1_CITESTYLEREPOSITORY_H
#define IBB_BASICS_P1_CITESTYLEREPOSITORY_H


#include <vector>
#include "../domain/CiteStyle.h"


struct CiteStyleRepository {
private:
    std::vector<CiteStyle> citeStyles;
public:
    void store(const CiteStyle &citeStyle);

    CiteStyle getCiteStyleByIndex(const int &index);

    std::vector<CiteStyle> getCiteStyles();

    int lengthCiteStyles();

    void deleteCiteStyleLIFO();
};


#endif //IBB_BASICS_P1_CITESTYLEREPOSITORY_H
