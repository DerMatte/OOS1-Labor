// Labor1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	//cout.precisi++
	//on(5);
	//cout.width(9);
	double d = 1.234;
	cout << "Nr Oct Hex String Fixed Scientific " << endl;
	for (int k = 1; k < 11; k++) {
		

		cout << dec << right << k << " ";

		cout << oct << setw(4 - ceil(k / 8)) << '0' << k;

		cout << setw(4) << hex << "0x" << k << " ";

		cout << string(k % 5 + 1, '*') << setw(8 - ceil(k % 5 + 1)) << cout.fill('+');

		cout.width(9); cout.fill(' ');
		cout << setw(9) << fixed << setprecision(3) << internal << showpos << d;

		cout.width(9); cout.fill(' ');
		cout << setw(12) << right << scientific << noshowpos << d;

		d = d * -2;
		cout << endl;

	}
	return 0;
}
