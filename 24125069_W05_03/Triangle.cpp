#include <iostream>
#include <cmath>
#include "Triangle.h"
#include "Point.h"
using namespace std;

double calcPerimeterOfTriangle(Triangle& t)
{
  double perimeter = calcDistance(t.a, t.b) + calcDistance(t.b, t.c) + calcDistance(t.c, t.a);
  return perimeter;
}

void inputTriangle(Triangle& t) {
    cout << "Enter the first point: ";
    inputPoint(t.a);
    cout << "Enter the second point: ";
    inputPoint(t.b);
    cout << "Enter the third point: ";
    inputPoint(t.c);
}

void outputTriangle(Triangle& t)
{
    cout << "Triangle vertices: " << endl;
    outputPoint(t.a);
    cout << " ";
    outputPoint(t.b);
    cout << " ";
    outputPoint(t.c);
}

Point calcCentroid(Triangle& t) {
    Point d;
    d.x = (t.a.x + t.b.x + t.c.x) / 3;
    d.y = (t.a.y + t.b.y + t.c.y) / 3;
    return d;
}

void inputTriangleList(Triangle v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Input Triangle " << i + 1 << ":" << endl;
        inputTriangle(v[i]);
    }
}

void outputTriangleList(Triangle v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Output Triangle " << i + 1 << ":" << endl;
        outputTriangle(v[i]);
    }
}

Triangle largestPerimeter(Triangle v[], int n) {
    double maxPerimeter = -1;
    Triangle largest = v[0];
    for (int i = 0; i < n; i++) {
        double p = calcPerimeterOfTriangle(v[i]);
        if (p > maxPerimeter) {
            maxPerimeter = p;
            largest = v[i];
        }
    }
    return largest;
}
