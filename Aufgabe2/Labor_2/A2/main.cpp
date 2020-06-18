#include "fifo.hpp"

using namespace std;

int main() {

  cout << "Test";
  fifo fuffy;

  int selection;
  char input;
  char output;

  while (selection != 0)
  {
    cout << "Bitte waehlen sie einen Modus aus: (1) Schreiben  (2) Lesen  (0) Exit! ";
    cin >> selection;

    

    switch (selection)
    {
    // Push Methode // Eingabe ins Array
    case 1:
      push() = fuffy::push();

      cout << "Char bitte eingeben:"
      cin >> input;

      push(input);

      break;
    case 2:
      pop = fuffy::pop();

      output = pop()
      cout << "Folgender Buchstabe wurde geloescht:" << output;
      

      break;
    case 0:
      cout << "Programm wird geschlossen!";
      exit(1);
      break;
    default:
      cout << "Fehler!";
      break;
    }

  }
  
  
  return 0;
}