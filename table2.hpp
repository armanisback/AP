#ifndef __TABLE2_HPP__
#define __TABLE2_HPP__

#include <iostream>
#include <cstdlib>
#include "ball2.hpp"
using namespace std;
class Ball;
class Table
{
public:
    Table(double w, double h);
    bool contains_point(double x, double y);
    void reflect(Ball *b);

private:
    double width;
    double height;
};
#endif
