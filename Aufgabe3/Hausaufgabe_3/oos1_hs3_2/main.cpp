#define _CRT_SECURE_NO_WARNINGS

#include "Kunde.hpp"
#include <time.h>

int Kunde::anzahl = 0;

using namespace std;
void main() {

	srand(time(NULL));

	const int count = 10;

	Kunde kun[count];

	for (int i = 0; i < count; i++) {

		kun[i].kaufe(rand() % 1000);
		kun[i].print();

	}

}