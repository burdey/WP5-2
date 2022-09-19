//
// Created by Satori on 2022/9/19.
//

#include "MapSquare.h"

int MapSquare::f(int x) {
    return x * x;
}
vector<int> MapSquare::map(vector<int> vec) {
    vector<int> vect;
    vect = vec;
    map(&vect, 0);
    return vect;
}
void MapSquare::map(vector<int> *vect, int i) {
    if (i<(*vect).size()){
        int value = f((*vect)[i]);
        (*vect)[i] = value;
        i = i + 1;
        map(vect, i);
    }
}
