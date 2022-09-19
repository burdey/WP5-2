//
// Created by Satori on 2022/9/19.
//

#ifndef WP5_FILTERODD_H
#define WP5_FILTERODD_H
#include "FilterGeneric.h"
#include <iostream>
#include <vector>
using namespace std;

class FilterOdd : public FilterGeneric{
private:
    bool g(int x);
public:
    vector<int> filter(vector<int> vec);
    void filter(vector<int> vec, int i, vector<int> *vect);
};


#endif //WP5_FILTERODD_H
