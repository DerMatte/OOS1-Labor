#include <clocale>
#include "Bibliothek.hpp"
#include "Buch.hpp"
#include "DVD.hpp"
#include "Student.hpp"
#include "Dozent.hpp"

int main() {
	// Umlaute etc. in der Konsole zulassen
	setlocale(LC_ALL, "");
	// Bibliothek mit 100 Pl�tzen initialisieren
	Bibliothek bib(100);
	// B�cher und DVDs erstellen
	Buch b1("C++: das umfassende Handbuch", "Juergen Wolf", 
		    "Galileo Press", 2014);
	Buch b2("C++ - der Einstieg", "Arnold Willemer", "Wiley", 2014);
	Buch b3("Der C++-Programmierer", "Rainer Grimm", "O'Reilly", 
		    2014);
	Buch b4("C++ for Dummies", "Stephen R. Davies", "Wiley", 2012);
	Buch b5("C++ lernen und professionell anwenden", 
		    "Ulla Kirch und Peter Prinz", "mitp", 2012);
	Buch b6("BeagleBone fuer Einsteiger", "Matt Richardson", 
		    "O'Reilly", 2014);
	DVD d1("Die R�cher von C++", "DVD ex", 1984, 666);
	DVD d2("Ganz nah dabei - Raumgestaltung in Kitas \
f�r 0- bis 3-Jaehrige", "Cornelsen", 2013, 30);
	// Ein Buch und eine DVD ausgeben
	b1.print();
	d1.print();
	// Kopien der B�cher und DVDs (Medien) in die Bibliothek 
	// einfuegen
	bib.mediumBeschaffen(b1);
	bib.mediumBeschaffen(b2);
	bib.mediumBeschaffen(b3);
	bib.mediumBeschaffen(b4);
	bib.mediumBeschaffen(b5);
	bib.mediumBeschaffen(b6);
	bib.mediumBeschaffen(d1);
	bib.mediumBeschaffen(d2);
	// Bestand der Bibliothek ausgeben
	bib.print();
	// Personen anlegen
	Student p1("H�gar", 12345678);
	Student p2("Hilde", 87654321);
	Dozent p3("Prof A", 4711);
	// Suchen im Bibliotheksbestand durchf�hren
	bib.mediumSuchen("C++");
	bib.mediumSuchen("Kita");
	// Medien ausleihen
	bib.mediumAusleihen(2, p1, "25.04.2014");
	bib.mediumAusleihen(7, p2, "26.04.2014");
	bib.mediumAusleihen(6, p3, "21.04.2014");
	// Bestand der Bibliothek ausgeben
	bib.print();
}
