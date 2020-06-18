// Main für Hausaufgabe 2
#include "Labyrinth.hpp"

int main() {
	Labyrinth lab;
	lab.drucken();
	lab.erzeugen();
	lab.drucken();
	char Dateiname[] = "lab.txt";
	lab.exportDatei(Dateiname);
	Labyrinth lab2;
	lab2.importDatei(Dateiname);
	lab2.drucken();
	lab2.legeMuenzen();
	lab2.drucken();
}
