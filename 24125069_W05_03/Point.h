#pragma once
#include <iostream>

/// @brief A point in 2D space
/// @details A point is a location in 2D space
struct Point
{
  int x;
  int y;
};

/// @brief  Calculate the distance between two points
double calcDistance(Point& a, Point& b);

/// @brief  Input a point
void inputPoint(Point& p);

/// @brief  Output a point
void outputPoint(Point& p);


