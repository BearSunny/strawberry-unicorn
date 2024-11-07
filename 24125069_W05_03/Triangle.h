#pragma once

#include <iostream>

#include "Point.h"

/// @brief A triangle
/// @details A triangle is a polygon with three vertices
struct Triangle
{
  Point a;
  Point b;
  Point c;
};

/// @brief  Calculate the perimeter of a triangle
double calcPerimeterOfTriangle(Triangle& t);

/// @brief  Input a triangle
void inputTriangle(Triangle& t);

/// @brief  Output a triangle
void outputTriangle(Triangle& t);

/// @brief Calculate centroid of a triangle
Point calcCentroid(Triangle& t);

/// @brief Input a triangle list
void inputTriangleList(Triangle v[], int n);

/// @brief Output a triangle list
void outputTriangleList(Triangle v[], int n);

/// @brief Find triangle with largest perimeter
Triangle largestPerimeter(Triangle v[], int n);

