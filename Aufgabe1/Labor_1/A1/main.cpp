#include <string>
#include /* xxx */ 
#include /* xxx */ 
using namespace std;

int main() {
	double d = 1.234;
	cout << "Nr  Oct  Hex String  Fixed     Scientific " << endl;
	for (int k = 1; k < 11; k++) {
		cout << /* xxx */  << k;
		cout << /* xxx */  << k;
		cout << /* xxx */  << k << " ";
		cout << /* xxx */  << string(k % 5 + 1, '*') << " ";
		cout << /* xxx */  << d;
		cout << /* xxx */  << d;
		d = d*-2;
		cout << endl;
	}
	return 0;
}



cout << right << dec << right << k << " ";

cout << left << "0" << oct << k << " ";

cout.width(5); cout.fill(' ');
cout << "0x" << hex << k << " ";

cout.width(7); cout.fill('+'); showpos;
cout << left << fixed << setprecision(3) << string(k % 5 + 1, '*') << " "; // printf("%+9.5f", k);
noshowpos;

cout << cout.fill(' ') << setw(10) << d << " ";

cout << scientific << d << " ";

d = d * -2;
cout << endl;