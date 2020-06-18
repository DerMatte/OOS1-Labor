// Datei: Boss.cpp

#include <iostream>
using namespace std;
/* HIER */ 

Boss::Boss( const char * vn, const char * nn, double g)
	: Angestellte(vn, nn)
{
	setBossGehalt( g );	
}

void Boss::setBossGehalt( double g)
{
	bossGehalt = (g > 0) ? g : 0;
}

/* HIER */  Boss::einkommen() /* HIER */ 
{
	return bossGehalt;
}

void Boss::print() const
{
	cout << "\nBoss; ";
	Angestellte::print();
}
