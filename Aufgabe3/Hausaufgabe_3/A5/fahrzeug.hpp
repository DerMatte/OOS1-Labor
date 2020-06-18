#include "MyString.hpp"
#include <string>

class fahrzeug
{
private:
  /* data */
public:
  fahrzeug(kz);
  MyString::MyString kz;
  
  long int vin;
  // char* vin[18];

  double km;

  int fahren(double km);

  ~fahrzeug();
};

fahrzeug::fahrzeug(/* args */)
{

  


}





fahrzeug::~fahrzeug()
{
  delete fahrzeug;
}

