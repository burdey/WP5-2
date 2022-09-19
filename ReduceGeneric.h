//
// Created by Satori on 2022/9/18.
//

#ifndef WP5_REDUCEGENERIC_H
#define WP5_REDUCEGENERIC_H
#include <iostream>
#include <vector>
using namespace std;

class ReduceGeneric{
private:
    int binaryOperator(int x, int y);
public:
    virtual int reduce(vector<int> vect) = 0;
};


#endif //WP5_REDUCEGENERIC_H
