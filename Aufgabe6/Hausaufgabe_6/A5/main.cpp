#include <iostream>
using namespace std;

class Test {
	char * ptr;
public:
	Test() {
		ptr = new char[500000000];
	}
};

int main() {
	try {
		int i = 1;
		while (true) {
			cout << i++ << endl;
			new Test;
		}
	}
	// HIER









	return 0;
}
