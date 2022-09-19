//
// Created by Satori on 2022/9/18.
//

#ifndef WP5_FILTERGENERIC_H
#define WP5_FILTERGENERIC_H
#include <iostream>
#include <vector>
using namespace std;


class FilterGeneric{
private:
    bool g(int value);
public:
    virtual vector<int> filter(vector<int> vec) = 0;
};










#endif //WP5_FILTERGENERIC_H
