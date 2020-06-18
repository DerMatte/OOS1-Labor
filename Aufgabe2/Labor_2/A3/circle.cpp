#include "circle.hpp"




point circle::getCentre() {
 return centre;
}
double circle::getRadius() {
  return radius;
}



void setCentre(point newcentre) {

  centre.setX(newcentre.getX());
  centre.setY(newcentre.getY());
}

void setRadius(double newradius) {
  radius += newradius
}

void circle::move(double dx, double dy) {
  x += dx;
  y += dy;
}

void point::print(bool newline) {
  newline = true;
  if (newline == true)
  {
    cout << "(" << getX() << ", " << getY() << endl;
  }
  else
  {
    cout << "(" << getX() << ", " << getY();
  }

}

// circle::circle(/* args */)
// {
// }

// circle::~circle()
// {
// }
