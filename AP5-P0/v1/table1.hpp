#ifndef __TABLE1_HPP__
#define __TABLE1_HPP__

#include <iostream>
#include <cstdlib>
using namespace std;


class Table
{
public:
    Table(double w, double h);
    bool contains_point(double x, double y);
    void reflect(double &x, double &y, double &vx, double &vy);

private:
    double width;
    double height;
};
#endif
