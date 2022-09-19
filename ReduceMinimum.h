//
// Created by Satori on 2022/9/19.
//

#ifndef WP5_REDUCEMINIMUM_H
#define WP5_REDUCEMINIMUM_H
#include "ReduceGeneric.h"
#include <iostream>
#include <vector>
using namespace std;

class ReduceMinimum : public ReduceGeneric{
private:
    int binaryOperator(int x, int y);
public:
    int reduce(vector<int> vect);
    void reduce(vector<int> vect, int i, int *min);
};


#endif //WP5_REDUCEMINIMUM_H
