#include <iostream>
#include "Zoo.hpp"
using namespace std;

int main() {
	string str;
	char c = 'X';
	// Ausnahmeprüfung aktivieren
	// HIER



		cout << "Bitte Name des Zoos eingeben: ";
		cin >> str;
		Zoo z(str);
		while (c != 'e') {
			cout << endl << "Bitte Tierart auswaehlen:" << endl;
			cout << "1 = Elefant" << endl;
			cout << "2 = Tiger" << endl;
			cout << "3 = Maus" << endl;
			cout << "e = Ende mit Eingabe" << endl;
			cout << "Eingabe: ";
			cin >> c;
			if (c != 'e') {
				cout << "Bitte Namen des Tieres eingeben: ";
				cin >> str;
				switch (c) {
				case '1': z.hinzu(Elefant(str)); break;
				case '2': z.hinzu(Tiger(str)); break;
				case '3': z.hinzu(Maus(str)); break;
				case 'e': break;
				default: // Einen String als Ausnahme werfen
					// HIER



				}
			}
			cout << endl;
			z.print();
		}



	// Ausnahmen auffangen
	// Speziellste Ausnahme auffangen und ausgeben
	// HIER






	// MyException auffangen und ausgeben
	// HIER






	// Alle anderen Standardausnahmen auffangen und ausgeben
	// HIER






	// Alle anderen Ausnahmen auffangen
	// HIER





	return 0;
}
