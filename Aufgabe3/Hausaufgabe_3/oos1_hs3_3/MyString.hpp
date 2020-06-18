#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

class MyString {

	char* strPtr = new char[0];

	unsigned int strSize;
	unsigned int strCapacity;

public:
	MyString();
	explicit MyString(const char cString[]);
	explicit MyString(MyString&);
	~MyString();

	void reserve(unsigned int c);

	MyString& append(MyString& str);
	MyString& assign(MyString& str);

	char* c_str();

	void setSize(int s = -1);
	unsigned int size() const;

	void setCapacity(int c = -1);
	unsigned int capacity() const;

	void clear();
	bool empty();

	char& at(int i);

	MyString& operator+ (MyString& a);
	bool operator== (MyString& a);

	MyString& operator= (MyString& neu);

	friend ostream& operator<< (ostream &out, MyString &a);
	
};