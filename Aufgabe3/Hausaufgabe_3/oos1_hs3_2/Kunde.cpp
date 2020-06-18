#include "Kunde.hpp"


using namespace std;

Kunde::Kunde(const char* name, const char* ort, int alter) {

	this->name = new char[sizeof(name)];
	strcpy(this->name, name);
	this->ort = new char[sizeof(ort)];
	strcpy(this->ort, ort);
	this->alter = alter;
	umsatz = 0;
	transaktion = 0;
	id = ++anzahl;

}

Kunde::~Kunde() {
	if(name != NULL)
		free(name);
	if(ort != NULL)
		free(ort);


}

void Kunde::kaufe(double u) {

	umsatz += u;
	transaktion++;

}

int Kunde::getAnzahl() {

	return anzahl;

}

void Kunde:: print() {

	cout << "Kunde " << name << " aus " << ort << "(ID = " << id << ", " << alter << " Jahre) hatte " << transaktion << "Transaktion(en) und " << umsatz << " Euro Umsatz" << endl;

}