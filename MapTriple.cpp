//
// Created by Satori on 2022/9/19.
//

#include "MapTriple.h"

int MapTriple::f(int x) {
    return 3 * x;
}

vector<int> MapTriple::map(vector<int> vec) {
    vector<int> vect;
    vect = vec;
    map(&vect, 0);
    return vect;
}

void MapTriple::map(vector<int> *vect, int i) {
    if (i<(*vect).size()){
        int value = f((*vect)[i]);
        (*vect)[i] = value;
        i = i + 1;
        map(vect, i);
    }
}