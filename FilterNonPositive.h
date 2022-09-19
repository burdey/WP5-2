//
// Created by Satori on 2022/9/19.
//

#ifndef WP5_FILTERNONPOSITIVE_H
#define WP5_FILTERNONPOSITIVE_H
#include "FilterGeneric.h"
#include <iostream>
#include <vector>
using namespace std;

class FilterNonPositive : public FilterGeneric{
private:
    bool g(int x);
public:
    vector<int> filter(vector<int> vec);
    void filter(vector<int> vec, int i, vector<int> *vect);
};


#endif //WP5_FILTERNONPOSITIVE_H
