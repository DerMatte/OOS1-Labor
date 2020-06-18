#pragma once

#include <string>
#include "MyList.hpp"
#include "MyException.hpp"
using namespace std;

// Klasse der Tiere
class Tier : public MyData {
	// Name des Tiers
	string name;
public:
	// Konstruktor
	Tier(string = "");
	// virtuelle print-Funktion
	virtual void print(bool = true) const;
};

class Elefant : public Tier {
public:
	// Konstruktor
	Elefant(string = "");
	// virtuelle clone-Funktion
	virtual Elefant * clone() const;
};

class Tiger : public Tier {
public:
	// Konstruktor
	Tiger(string = "");
	// virtuelle clone-Funktion
	virtual Tiger * clone() const;
};

class Maus : public Tier {
public:
	// Konstruktor
	Maus(string = "");
	// virtuelle clone-Funktion
	virtual Maus * clone() const;
};

class Zoo {
	// Name des Zoos
	string name;
	// Die Tiere werden in einer MyList gespeichert 
	MyList tiere;
public:
	// Konstruktor
	Zoo(string);
	// Eigene Exceptionklasse "ElefantTrifftAufMaus"
	// abgeleitet von MyException
	class ElefantTrifftAufMaus /*HIER*/ 
		// HIER




	};
	// Ein Tier dem Zoo hinzufügen
	void hinzu(const Tier &);
	// Alle Zootiere ausgeben
	void print() const;
};


