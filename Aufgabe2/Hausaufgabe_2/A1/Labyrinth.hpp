#include <iostream>
#include <string.h>
// #include <conio.h>
#include <curses.h>
#include <fstream>
#include "Position.hpp"

#pragma once

//class Position;
// Größe des Labyrinths
const int kZeilen = 11;
const int kSpalten = 11;
const int kAnzGeister = 3;

enum Symbole {
	MAUER = '#', WEG = ' ', MUENZE = ':', NL = '\n',
	EOS = '\0', ICH = 'X', GEIST = 'G'
};
using namespace std;

class Labyrinth {
public:
	//instanzvariablen
	int labZeilen;
	int labSpalten;

	int labAnzGeister;

	int muenzen;

	char lab[kZeilen][kSpalten + 2];

	void initialisieren();
	void drucken();
	void erzeugen();

	int getZeilen();
	int getSpalten();
	int getAnzGeister();
	int getMuenzen();

	void legeMuenzen();

	Labyrinth();

	void zeichneChar(char c, Position pos);
	void zeichneChar(char c, Position posalt, Position posneu);
	char getZeichenAnPos(Position pos);
	bool istMuenzeAnPos(Position pos);

	void exportDatei(char* Dateiname);
	void importDatei(char* Dateiname);
};
