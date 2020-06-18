#include <stdio.h>
#include <iostream>
#include "point.hpp"

class circle
{
private:
  point centre;
  double radius;
public:
  circle(/* args */);

  double getCentre();
  double getRadius();
  
  void setCentre(point newcentre);
  void setRadius(double newradius);

  void move(double dx, double dy);

// double x, double y, double radius
  void print() {
    bool newline;
    
  }

  ~circle();
};

