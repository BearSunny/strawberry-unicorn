#include <cmath>
#include <iostream>

#include "Point.h"
using namespace std;

double calcDistance(Point& a, Point& b)
{
  return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void inputPoint(Point& p)
{
    cout << "Input x: ";
    cin >> p.x;
    cout << "Input y: ";
    cin >> p.y;
}

void outputPoint(Point& p)
{
    cout << "( " << p.x << ", " << p.y << " )" << endl;

}



