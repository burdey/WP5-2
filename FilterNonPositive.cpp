//
// Created by Satori on 2022/9/19.
//

#include "FilterNonPositive.h"

bool FilterNonPositive::g(int x) {
    return x < 0;
}

vector<int> FilterNonPositive::filter(vector<int> vec) {
    vector<int> vect;
    int i = 0;
    filter(vec, i, &vect);
    return vect;
}

void FilterNonPositive::filter(vector<int> vec, int i, vector<int> *vect) {
    if (i < (vec).size()){
        bool oddFlag = g((vec)[i]);
        if (oddFlag){
            (*vect).push_back((vec)[i]);
        }
        i = i + 1;
        filter(vec, i, vect);
    }
}