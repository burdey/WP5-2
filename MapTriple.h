//
// Created by Satori on 2022/9/19.
//

#ifndef WP5_MAPTRIPLE_H
#define WP5_MAPTRIPLE_H
#include "MapGeneric.h"
#include <iostream>
#include <vector>
using namespace std;

class MapTriple : public MapGeneric {
private:
    int f(int x);
public:
    vector<int> map(vector<int> vec);
    void map(vector<int> *vect, int i);
};



#endif //WP5_MAPTRIPLE_H
