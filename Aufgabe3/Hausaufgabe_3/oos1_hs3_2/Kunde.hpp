#include <stdio.h>
#include <iostream>
#include <string>

class Kunde {

	char* name;
	char* ort;

	int alter;
	double umsatz;

	int transaktion;
	int id;

	static int anzahl;

public:

	Kunde(const char* name = "name", const char* ort = "ort", int alter = 0);
	~Kunde();

	void kaufe(double u);
	int getAnzahl();
	void print();

};