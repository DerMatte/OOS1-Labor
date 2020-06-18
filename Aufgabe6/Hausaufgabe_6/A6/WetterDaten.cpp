// Datei: WetterDaten.cpp

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

#include "WetterDaten.hpp"

using namespace std;






























































void WetterDaten::print() const {

	cout << "Station: " << stationsID << endl;
	cout << "Messdatum: " << messDatum.toString() << endl;
	cout << "Qualitaetsniveau: " << qualiNiveau << endl;
	cout << "Relative Feuchte: " << relFeuchte << endl;
	cout << "Lufttemperatur: " << luftTemp << endl;
	cout << "Luftdruck: " << luftDruck << endl;
	cout << "Windgeschwindigkeit: " << windGeschw << endl;
	cout << "Niederschlagsshoehe: " << niederschlag << endl;
};

