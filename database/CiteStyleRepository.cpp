//
// Created by Guber on 26.01.20.
//

#include "CiteStyleRepository.h"
// No static values!
void CiteStyleRepository::store(CiteStyle citeStyle) {
    citeStyles.push_back(citeStyle);
}

std::vector<CiteStyle> CiteStyleRepository::getCiteStyle() {
    return citeStyles;
}

int CiteStyleRepository::lengthCiteStyles() {
    return citeStyles.size();
}

void CiteStyleRepository::deleteCiteStyleLIFO() {
    citeStyles.pop_back();
}

CiteStyle CiteStyleRepository::getCiteStyleByIndex( int index) {
    return citeStyles[index];
}