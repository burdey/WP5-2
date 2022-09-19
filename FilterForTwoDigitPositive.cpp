//
// Created by Satori on 2022/9/19.
//

#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int x) {
    if ((x > 9 && x < 100) && x != -x){
        return true;
    }
    else{
        return false;
    }
}

vector<int> FilterForTwoDigitPositive::filter(vector<int> vec) {
    vector<int> vect;
    int i = 0;
    filter(vec, i, &vect);
    return vect;
}

void FilterForTwoDigitPositive::filter(vector<int> vec, int i, vector<int> *vect) {
    if (i < (vec).size()){
        bool twoDigitPosFlag = g((vec)[i]);
        if (twoDigitPosFlag){
            (*vect).push_back((vec)[i]);
        }
        i = i + 1;
        filter(vec, i, vect);
    }
}