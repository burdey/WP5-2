//
// Created by Satori on 2022/9/19.
//

#include "ReduceMinimum.h"

int ReduceMinimum::binaryOperator(int x, int y) {
    if (x < y){
        return x;
    }
    else{
        return y;
    }
}

int ReduceMinimum::reduce(vector<int> vect) {
    int minVal = vect[0], i = 0;
    reduce(vect, i, &minVal);
    return minVal;
}

void ReduceMinimum::reduce(vector<int> vect, int i, int *min) {
    if (i < (vect).size()){
        *min = binaryOperator(*min, vect[i]);
        i = i + 1;
        reduce(vect, i, min);
    }
}