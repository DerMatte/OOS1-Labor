// Datei: Arbeiter.cpp

#include <iostream>
using namespace std;
/* HIER */ 


Arbeiter::Arbeiter(const char *vn, const char * nn, 
                   double stdl, double std)
: Angestellte(vn, nn)
{
	setStundenLohn(stdl);
	setStunden(std);
}

void Arbeiter::setStundenLohn( double stdl)
{
	stundenLohn = (stdl>0) ? stdl : 0;
}

void Arbeiter::setStunden(double std)
{
	stunden = (std>=0)? std : 0;
}

/* HIER */  Arbeiter::einkommen() /* HIER */ 
{
	if (stunden <= 40) return stundenLohn * stunden;
	else return 40*stundenLohn + (stunden-40)*stundenLohn*1.5;
}

void Arbeiter::print() const
{
	cout << "\nArbeiter: ";
	Angestellte::print();
}

