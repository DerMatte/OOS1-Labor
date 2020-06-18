#include <iostream>
#include <typeinfo>
using namespace std;

class A
{	char a;
public:
	A(char a='A') : a(a) {}
};

class B1 : public A
{
public:
	char b1;
	B1(char a='A', char b1='1') : A(a), b1(b1) {}
	virtual void print()
	{	cout << "int(b1) = " << int(b1) << endl; 	}
};

class B2 : public A
{	char b2;
public:
	B2(char a='A', char b2='2') : A(a), b2(b2) {}
};

class C : public B1, public B2
{	char c;
public:
	C(char a='A', char b1='1', char b2='2', char c='C') 
		: B1(a,b1), B2(a,b2), c(c) {}
};

int main()
{
	B1 * b1_ptr = new B1;
	A * a_ptr = b1_ptr;
	cout << "1. Sind die Pointer b1_ptr und a_ptr identisch?" 
		<< endl; 
	cout << boolalpha << (b1_ptr == a_ptr) << endl;

	cout << "2. Wie gross sind *b1_ptr und *a_ptr? " << endl;
	cout << "Groesse von *b1_ptr: " << sizeof(*b1_ptr) << endl;
	cout << "Groesse von *a_ptr:  " << sizeof(*a_ptr) << endl;
	delete b1_ptr;

	C * c_ptr = new C;
	b1_ptr = c_ptr;
	B2 * b2_ptr = c_ptr;
	cout << "3. Sind die Pointer b1_ptr und b2_ptr identisch? " 
		<< endl; 
	cout << boolalpha << ((void*)b1_ptr == (void*)b2_ptr) 
		<< endl;

	cout << "4. Wie gross sind *b1_ptr und *b2_ptr? " << endl;
	cout << "Groesse von *b1_ptr: " << sizeof(*b1_ptr) << endl;
	cout << "Groesse von *b2_ptr: " << sizeof(*b2_ptr) << endl;

	a_ptr = (B2 *)c_ptr;
	cout << "5. Warum kann a_ptr = c_ptr; nicht kompiliert ";
	cout << "werden?" << endl; 
	cout << "a_ptr = " << a_ptr << endl;
	cout << "b2_ptr = " << b2_ptr << endl;
	delete c_ptr;

	a_ptr = new A;
	b1_ptr = (B1*)a_ptr;
	cout << "6. Was ist der Wert der Instanzvariablen b1 von ";
	cout << "*b1_ptr?" << endl;
	cout << hex << int(b1_ptr->b1) << endl;
	b1_ptr->print();

	cout << "7. Welches Ergebnis liefert b1_ptr = ";
	cout << "dynamic_cast<B1*>(a_ptr); ?" << endl;
	b1_ptr = dynamic_cast<B1*>(a_ptr);
	cout << "b1_ptr = " << b1_ptr << endl;

	b1_ptr = new B1;
	cout << "8. Welches Ergebnis liefert c_ptr = ";
	cout << "dynamic_cast<C*>(b1_ptr); ?" << endl;
	c_ptr = dynamic_cast<C*>(b1_ptr);
	cout << "c_ptr = " << c_ptr << endl;
	delete b1_ptr;

	c_ptr = new C;
	b1_ptr = c_ptr; 
	b2_ptr = dynamic_cast<B2*>(b1_ptr);
	cout << "9. Zeigen die Pointer c_ptr, b1_ptr und b2_ptr auf";
	cout << " dasselbe Objekt?" << endl;
	cout << "c_ptr =  " << c_ptr << endl;
	cout << "b1_ptr = " << b1_ptr << endl;	
	cout << "b2_ptr = " << b2_ptr << endl;

	void * v_ptr = dynamic_cast <void *>(b1_ptr);
	cout << "10. Worauf zeigt der Pointer v_ptr?" << endl;
	cout << "v_ptr = " << v_ptr << endl;

	cout << "11. Von welchem Run-Time-Datentyp sind a_ptr, ";
	cout << "c_ptr, *b1_ptr und v_ptr?" << endl;
	cout << "Datentyp von a_ptr:   " << typeid(a_ptr).name() 
		<< endl;
	cout << "Datentyp von c_ptr:   " << typeid(c_ptr).name() 
		<< endl;
	cout << "Datentyp von *b1_ptr: " << typeid(*b1_ptr).name() 
		<< endl;
	cout << "Datentyp von v_ptr:   " << typeid(v_ptr).name() 
		<< endl;
	return 0;
}

