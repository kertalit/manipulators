#ifndef _POINT2D_H
#define _POINT2D_H

#include <iostream>
#include <fstream>
#include <ostream>

using PointPtr = std::shared_ptr<class Point2d>;

class Point2d
{
public:

  Point2d(double x, double y);

  double x;
  double y;
};

std::ostream& operator<< (std::ostream& stream, const Point2d& point);
std::istream& operator>> (std::istream& stream, Point2d& point);

#endif // !_POINT2D_H