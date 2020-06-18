#include <iostream>
#include <sstream>
#include "ObjectCounter.hpp"
using namespace std;

class Objekt : public ObjectCounter {
	string name;
public:
	Objekt(string n) : name(n) {
		cout << "Konstruktor der Klasse Objekt  ";
		print(); 
	}
	Objekt(const Objekt & o) : name(o.name) {
		cout << "Kopierkonstruktor der Klasse Objekt  ";
		print();
	}
	~Objekt() {
		cout << "Destruktor der Klasse Objekt  ";
		print();
	}
	void print() {
		cout << "Objekt-Id = " << getId();
		cout << "   Name = " << name << endl;
	}
};

unsigned int ObjectCounter::maxId = 0;
unsigned int ObjectCounter::number = 0;

string iToS(int i) {
	stringstream ss;
	ss << i;
	return ss.str();
}

void f(int i) {
	cout << "Aufruf f(" << i << ")" << endl;
	Objekt o("f(" + iToS(i) + ")");
	if (i > 1) {
		f(--i);
	}
	if (i == 1) {
		cout << "Ausnahme in f(" + iToS(i) + ") werfen ..." << endl;
		throw Objekt("Ausnahmeobjekt in f(" + iToS(i) + ")");
	}
	cout << "Am Ende der Funktion f(" + iToS(i) + ")";
}

int main() {
	cout << "Am Beginn Hauptfunktion" << endl;
	Objekt o("main");
	int i = 0;
	cout << "Eine ganze Zahl >= 0 eingeben: " << endl;
	cin >> i;
	try {
		try {
			try {
				f(i);
			}
			catch (Objekt) {
				cout << "Handler 1: " << endl;
				cout << "Anonymes Objekt aufgefangen und weitergeworfen ..." << endl;
				throw;
			}
		}
		catch (Objekt & e) {
			cout << "Handler 2: " << endl;
			cout << "Referenziertes Objekt aufgefangen und weitergeworfen ..." << endl;
			throw e;
		}
	}
	catch (Objekt e) {
		cout << "Handler 3: " << endl;
		cout << "Kopiertes Objekt aufgefangen ..." << endl;
		e.print();
	}
	catch (...) {
		cout << "Defaulthandler" << endl;
	}
	cout << "Am Ende der Hauptfunktion" << endl;
	return 0;
}

