#include <iostream>
#include "Point.h"
#include "Triangle.h"
using namespace std;

int main() { 
    int n; 
    cout << "Enter the number of triangles: ";
    cin >> n;
    Triangle v[n]; 
    inputTriangleList(v, n); 
    outputTriangleList(v, n); 

    Triangle largest = largestPerimeter(v, n); 
    cout << "Largest triangle: " << endl;
    outputTriangle(largest); 
    cout << "Perimeter of largest triangle: " << calcPerimeterOfTriangle(largest) << endl;
    cout << "Centroid: ";
    Point c = calcCentroid(largest); 
    outputPoint(c);
    return 0;
}