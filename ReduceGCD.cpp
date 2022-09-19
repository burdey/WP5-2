//
// Created by Satori on 2022/9/19.
//

#include "ReduceGCD.h"

int ReduceGCD::binaryOperator(int x, int y) {
    if (x == 0){
        return y;
    }
    return binaryOperator(y % x, x);
}

int ReduceGCD::reduce(vector<int> vect) {
    int gcd = vect[0], i = 0;
    reduce(vect, i, &gcd);
    return gcd;
}

void ReduceGCD::reduce(vector<int> vect, int i, int *gcdValue) {
    if (i < (vect).size()){
        *gcdValue = binaryOperator(*gcdValue, vect[i]);
        i = i + 1;
        reduce(vect, i, gcdValue);
    }
}
