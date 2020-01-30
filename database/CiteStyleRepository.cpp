//
// Created by Guber on 26.01.20.
//

#include "CiteStyleRepository.h"

// No static values!
void CiteStyleRepository::store(const CiteStyle &citeStyle) {
    citeStyles.push_back(citeStyle);
}

std::vector<CiteStyle> CiteStyleRepository::getCiteStyles() {
    return citeStyles;
}

CiteStyle CiteStyleRepository::getCiteStyleByIndex(const int &index) {
    return citeStyles[index];
}

// Todo not used
int CiteStyleRepository::lengthCiteStyles() {
    return citeStyles.size();
}

// Todo not used
void CiteStyleRepository::deleteCiteStyleLIFO() {
    citeStyles.pop_back();
}

