#include <iostream>
#include "Zoo.hpp"
using namespace std;

///////////////////////////////////////////////////////
// Klasse Tier

// Konstruktor 
Tier::Tier(string n) : name(n) {}

// Methode print
void Tier::print(bool nl) const {
	cout << string(typeid(*this).name()).substr(6) << " " << name;
	if (nl) { cout << endl; }
}

///////////////////////////////////////////////////////
// Klasse Elefant

// Konstruktor
Elefant::Elefant(string n) : Tier(n) {}

// virtuelle clone-Funktion
Elefant * Elefant::clone() const {
	return new Elefant(*this);
}

///////////////////////////////////////////////////////
// Klasse Tiger

// Konstruktor
Tiger::Tiger(string n) : Tier(n) {}

// virtuelle clone-Funktion
Tiger * Tiger::clone() const {
	return new Tiger(*this);
}

///////////////////////////////////////////////////////
// Klasse Maus

// Konstruktor
Maus::Maus(string n) : Tier(n) {}

// virtuelle clone-Funktion
Maus * Maus::clone() const {
	return new Maus(*this);
}

///////////////////////////////////////////////////////
// Klasse Zoo

// Konstruktor f�r Ausnahmeklasse ElefantTrifftAufMaus
// HIER




// Konstruktor
Zoo::Zoo(string n) {
	// Name zuweisen
	name = n;
	// Wenn der String k�rzer als 4 Zeichen ist, 
	// dann MyException werfen
	// Nutzen Sie die Pr�prozessormakros __LINE__ und __FILE__
	// HIER





	// Ansonsten, den 5. Buchstaben des Namens gro� machen
	name.at(4) = toupper(name.at(4));
}

// Tier dem Zoo hinzuf�gen
void Zoo::hinzu(const Tier & t) {
	// Wenn ein Elefant hinter/nach einer Maus eingef�gt wird, 
	// dann Ausnahme werfen
	// Nutzen Sie die Pr�prozessormakros __LINE__ und __FILE__
	// HIER





	// sonst Tier hinzuf�gen
	// HIER





}

// Alle Zootiere ausgeben
void Zoo::print() const {
	tiere.print();
}
