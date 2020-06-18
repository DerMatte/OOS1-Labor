#include "point.hpp"

// Punkt


double point::getX() {
  return x;
}

double point::getY() {
  return y;
}

void point::setX(double px) {
  x = px;
}
void point::setY(double py) {
  y = py;
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

void point::move(double dx, double dy) {
  x += dx;
  y += dy;
}




// point::point(/* args */)
// {
// }

// point::~point()
// {
// }
