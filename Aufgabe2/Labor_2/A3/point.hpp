#include <stdio.h>
#include <iostream>
#include <string.h>



class point
{
private:
  double x;
  double y;
public:
  point(/* args */);

  double getX();
  double getY();
  
  void setX(double x);
  void setY(double y);

  void move(double dx, double dy);
  
  void print(bool nline);

  ~point();
};

