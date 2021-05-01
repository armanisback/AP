#ifndef __BALL1_HPP__
#define __BALL1_HPP__
#include "table1.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;
class Ball
{
public:
    Ball(double _x, double _y, double _vx, double _vy, Table *t);
    void move(double dt);
    double get_x() { return x; }
    double get_y() { return y; }
    double get_vx() { return vx; }
    double get_vy() { return vy; }

private:
    double x;
    double y;
    double vx;
    double vy;
    Table *table;
};
#endif
