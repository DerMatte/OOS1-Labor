#include "MyString.hpp"
#include <cstring>
#include <malloc.h>

using namespace std;

MyString::MyString() {

	strSize = 0;
	strCapacity = 10;

	strPtr = new char[strCapacity + 1];

}

MyString::MyString(const char cstring[]) {

	strPtr = new char[(strlen(cstring) + 1)];
	strcpy(strPtr, cstring);
	setSize();
	setCapacity();

}

MyString::MyString(MyString& rhs) {

	strPtr = new char(rhs.size());
	strSize = rhs.strSize;
	strCapacity = rhs.strCapacity;
	strPtr = new char[rhs.strCapacity + 1];
	strcpy(strPtr, rhs.strPtr);

}

MyString::~MyString() {

	if(strPtr != NULL && size() != 0)
		delete[] (strPtr);

}

void MyString::reserve(unsigned int c) {

	if (capacity() < c) {

		char* strPtr2 = new char[c * sizeof(char)];
		strcpy(strPtr2, strPtr);
		strPtr = new char[c * sizeof(char)];
		strcpy(strPtr, strPtr2);
		delete(strPtr2); 
		setSize();
		setCapacity();

	}

}

MyString& MyString::append(MyString& str) {

	unsigned int l = size() + str.size() + 1;
	if (l < capacity()) {

		strcat(strPtr, str.strPtr);

	}
	else {

		char* strPtr2 = new char[l];
		strcpy(strPtr2, strPtr);
		strcat(strPtr2, str.strPtr);
		delete(strPtr);
		strPtr = new char[l];
		strcpy(strPtr, strPtr2);
		delete(strPtr2);
		setSize();
		setCapacity();

	}

	return *this;

}

MyString& MyString::assign(MyString& str) {

	if (empty()) {
		if (str.size() < capacity()) {
			strcpy(strPtr, str.strPtr);
		}

		else {
			strPtr = new char[str.size() + 1];	
			strcpy(strPtr, str.strPtr);
		}
	}
	else {
		if (str.strSize < capacity()) {
			delete (strPtr);
			strPtr = new char[str.strSize + 1];	
			strcpy(strPtr, str.strPtr);
		}

		else {
			char* strPtr2 = new char[str.strSize + 1];	
			strcpy(strPtr2, strPtr);
			strcat(strPtr2, str.strPtr);
			strPtr = new char[str.strSize + 1];	
			strcpy(strPtr, strPtr2);
			delete(strPtr2);

		}
	}
	str.setSize();
	str.setCapacity();
	return *this;
}

char* MyString::c_str() {

	return strPtr;

}

void MyString::setSize(int s) {

	if (s == -1)
		strSize = strlen(strPtr);
	else
		strSize = s;

}

unsigned int MyString::size() const{
	
	return strSize;

}

void MyString::setCapacity(int c) {

	if (c == -1)
		strCapacity = malloc_usable_size(strPtr);
	else
		strCapacity = c;

}

unsigned int MyString::capacity() const{

	return strCapacity;

}

void MyString::clear() {

	memset(strPtr, '\0', size());

}

bool MyString::empty() {

	if (strPtr != NULL && size() != 0) {
		return true;
	}
	else {
		return false;
	}

}

char& MyString::at(int i) {

	if (strPtr[i - 1] == '\0') {
		return strPtr[capacity()];
	}
	else 
		return strPtr[i - 1];
}



MyString& MyString::operator+ (MyString& a) {

	MyString neu;
	neu.strPtr = new char(sizeof(this->strPtr) + sizeof(a.strPtr) + 1);
	neu.assign(*this);
	neu.append(a);

	return neu;

}

bool MyString::operator== (MyString& a) {

	if (strcmp(this->strPtr, a.strPtr) == 0)
		return true;
	else
		return false;

}

MyString& MyString::operator= (MyString& neu) {

	/*delete (strPtr);
	strPtr = new char(neu.size() + 1);
	strcpy(strPtr, neu.strPtr);*/
	this->assign(neu);
	return *this;

}

ostream &operator<< (ostream &out,  MyString &a) {

	out << a.c_str();
	return out;

}
