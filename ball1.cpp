#include <iostream>
#include <cstdlib>
#include "ball1.hpp"
using namespace std;
Ball::Ball(double _x, double _y, double _vx, double _vy, Table *t)
{
    cout << "Ball constructor called" << endl;
    table = t;
    if (!table->contains_point(_x, _y))
        abort();
    x = _x;
    y = _y;
    vx = _vx;
    vy = _vy;
    cout << "Initial position is: (" << x << ',' << y << ')' << endl;
}

void Ball::move(double dt)
{
    cout << "Ball::move called" << endl;
    x += vx * dt;
    y += vy * dt;

    while (!table->contains_point(x, y))
        table->reflect(x, y, vx, vy);
    cout << "New position is: (" << x << ',' << y << ')' << endl;
}
