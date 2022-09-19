//
// Created by Satori on 2022/9/19.
//

#include "MapAbsoluteValue.h"

int MapAbsoluteValue::f(int x) {
    if (x < 0){
        return -1 * x;
    }
    return x;
}

vector<int> MapAbsoluteValue::map(vector<int> vec) {
    vector<int> vect;
    vect = vec;
    map(&vect, 0);
    return vect;
}

void MapAbsoluteValue::map(vector<int> *vect, int i) {
    if (i<(*vect).size()){
        int value = f((*vect)[i]);
        (*vect)[i] = value;
        i = i + 1;
        map(vect, i);
    }
}