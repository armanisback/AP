#ifndef __BALL2_HPP__
#define __BALL2_HPP__
#include "table2.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;
class Table;
class Ball
{
public:
    Ball(double _x, double _y, double _vx, double _vy, Table *t);
    void move(double dt);
    double get_x() { return x; }
    double get_y() { return y; }
    double get_vx() { return vx; }
    double get_vy() { return vy; }
    void set_location(double _x, double _y);
    void set_speed(double _vx, double _vy);

private:
    double x;
    double y;
    double vx;
    double vy;
    Table *table;
};
#endif
