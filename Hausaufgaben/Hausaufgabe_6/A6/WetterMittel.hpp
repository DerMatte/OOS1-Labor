// Datei: WetterMittel.hpp

#ifndef WETTERMITTEL
#define WETTERMITTEL

#include "WetterDaten.hpp"

/* Die Klasse dient dazu die Mittelwerte von Messdaten
   zu berechnen. Dazu werden die Daten mit einem Wert 
   initialisiert. Weitere Werte werden aufsummiert. 
   Bei Abfrage des Ergebnisses werden die Summen 
   noch durch die Anzahl der aufsummierten Datensaetze
   dividiert. Das Datum des Ergebnis-Datensatzes kann vor 
   der Abfrage auf einen beliebigen Wert gesetzt werden.
*/

class WetterMittel {
	static int stationsID;
	static Datum messDatum;
	static int qualiNiveau;
	static double relFeuchte;
	static double luftTemp;
	static double luftDruck;
	static double windGeschw;
	static double niederschlag;
	static int anzahl;

public:
	
	// Initialisiert die Klassenvariablen mit einem 
	// Wetterdatensatz. Setzt die Anzahl auf 0.
	static void initialisiereWerte (const WetterDaten * wd);

	// Addiert die Daten des Wetterdatensatzes zu den 
	// Klassenvariablen hinzu. Stationsid und Messdatum
	// werden hierbei nicht veraendert
	static void summiereWerte (const WetterDaten * wd);

	// Berechnet die Mittelwerte und gibt das Ergebnis
	// als Wetterdatensatz zurueck.
	static WetterDaten * getMittelwerte();

	// Setzt das Datum fuer den Ergebnis-Datensatz, 
	// um beispielsweise festzuhalten, dass die 
	// Mittelwerte fuer einen bestimmten Monat berechnet
	// wurden (d.tag == 0) oder fuer ein bestimmtes Jahr
	// (d.tag == 0) && (d.monat == 0)
	static void setDatum (Datum d) {messDatum = d;}

};

#endif;
