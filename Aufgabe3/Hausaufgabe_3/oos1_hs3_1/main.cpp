#include "ObjectCounter.hpp"
#include <iostream>

using namespace std;

unsigned int ObjectCounter::maxID = 0;
unsigned int ObjectCounter::number = 0;

int main() {
	

	const int count = 10;

	ObjectCounter obi[count];
	
	for (int i = 0; i < count; i++) {

		cout << "ID: " << obi[i].getID() << endl;
		cout << "maxID: " << obi[i].getmaxID() << endl;
		cout << "number: " << obi[i].getnumber() << endl;

	}



}