#include <stdio.h>
#include <iostream>


class ObjectCounter {

	const unsigned int ID;

	static unsigned int maxID;
	static unsigned int number;

public:

	ObjectCounter();
	~ObjectCounter();

	unsigned int getID();
	unsigned int getmaxID();
	unsigned int getnumber();

};