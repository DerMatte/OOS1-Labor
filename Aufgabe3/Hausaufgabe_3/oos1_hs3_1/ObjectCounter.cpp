#include "ObjectCounter.hpp"



ObjectCounter::ObjectCounter() : ID(++maxID) {

	number++;

}

ObjectCounter::~ObjectCounter() {

	number--;

}

unsigned int ObjectCounter::getID() {

	return ID;

}

unsigned int ObjectCounter::getmaxID() {

	return maxID;

}

unsigned int ObjectCounter::getnumber() {

	return number;

}

