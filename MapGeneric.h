//
// Created by Satori on 2022/9/18.
//

#ifndef WP5_MAPGENERIC_H
#define WP5_MAPGENERIC_H
#include <iostream>
#include <vector>
using namespace std;


class MapGeneric{
private:
    int f(int x);
public:
    virtual vector<int> map(vector<int> vec) = 0;
};


#endif //WP5_MAPGENERIC_H
