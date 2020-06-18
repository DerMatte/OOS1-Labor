// Datei: WetterDaten.hpp

#ifndef WETTERDATEN
#define WETTERDATEN

#include <string>
#include "Datum.hpp"

using namespace std;

/* Ein Objekt der Klasse Wetterdaten speichert einen
   Satz von gemessenen Daten. Dazu wird die Identitaet 
   der Wetterstation und das Messdatum gespeichert.
*/

class WetterDaten {
	int stationsID;
	Datum messDatum;
	int qualiNiveau;
	double relFeuchte;
	double luftTemp;
	double luftDruck;
	double windGeschw;
	double niederschlag;

public:
	int getStationsID() const {return stationsID;}
	Datum getMessDatum() const {return messDatum;}
	int getQualiNiveau() const {return qualiNiveau;}
	double getRelFeuchte() const {return relFeuchte;}
	double getLuftTemp() const {return luftTemp;}
	double getLuftDruck() const {return luftDruck;}
	double getWindGeschw() const {return windGeschw;}
	double getNiederschlag() const {return niederschlag;}


	// Der Eingabestring enthaelt die einzelnen
	// Messdaten getrennt durch Semikolon. Am Ende
	// des Satzes muss ein "eor" stehen.
	WetterDaten(std::string toParse);
	WetterDaten(int Id, Datum datum, int quali, 
		double relF, double luftT, double ldruck, 
		double wind, double regen);

	// Das Ergebnis ist ein String mit den Wetterdaten
	// getrennt durch Semikolon und abgeschlossen durch
	// ein "eor"
	std::string toString() const;

	// Nur fuer Testzwecke zur Ausgabe auf die Konsole:
	void print() const;
};

#endif

