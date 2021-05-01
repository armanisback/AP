#include <iostream>
#include <cstdlib>
#include "ball2.hpp"
#include "table2.hpp"
using namespace std;
int main()
{
    Table t(100, 50);
    Ball b(10, 20, 25, 5, &t);
    b.move(10);
}
