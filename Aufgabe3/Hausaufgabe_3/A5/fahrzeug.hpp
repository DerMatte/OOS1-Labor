#include "MyString.hpp"


class fahrzeug
{
private:
  /* data */
public:
  fahrzeug(/* args */);
  MyString::MyString kz;
  
  long int vin;
  // char* vin[18];

  int km;

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

