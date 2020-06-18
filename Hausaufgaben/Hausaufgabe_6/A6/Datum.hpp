// Datei: Datum.hpp

#ifndef DATUM
#define DATUM

#include <string>
using namespace std;

/* Die Klasse Datum speichert Tag, Monat und Jahr
   und erlaubt den Direktzugriff auf diese Variablen.
   Verschiedene Konstruktoren erlauben das Erzeugen
   von Objekten. Ausserdem gibt es eine Methode, um 
   einen String zu parsen und in die Datums-Komponenten 
   zu zerlegen, sowie eine Methode, um die Stringform
   eines Datumsobjektes zu erzeugen.
*/

class Datum {
public:

	int tag, monat, jahr;

	// Datum muss als int in Form einer 8-stelligen Zahl
	// vorliegen: JJJJMMTT
	Datum (int d = 0);

	// Datum kann auf einen beliebigen Wert gesetzt werden.
	// Mit t=0 kann man einen Monat und mit t=0 und m=0
	// kann man ein Jahr bestimmen.
	Datum (int j, int m, int t);

	// Der String muss in der Form einer 8-stelligen Zahl
	// vorliegen: JJJJMMTT. Aus diesem String werden die
	// Attribute des aktuellen (this) Objektes berechnet.
	void toParse(string s);

	// Die Werte des aktuellen Objektes werden in einen
	// String in der Form einer 8-stelligen Zahl 
	// JJJJMMTT gewandelt.
	string toString() const;
};

#endif
