#include <cstring>
#include "MyString.hpp"

//Aus den Lösungen von Max

// Standardkonstruktor
MyString::MyString() {
  strSize = 0;
  strCapacity = 10;
  strPtr = new char[strCapacity+1];
memset(strPtr, '\0', strCapacity + 1);
}
// Konvertierkonstruktor
MyString::MyString(const char * cstr) {
  strCapacity = strSize = strlen(cstr);
  strPtr = new char[strCapacity + 1];
  memset(strPtr, '\0', strCapacity + 1);
  strncpy(strPtr, cstr, strSize);
}
// Kopierkonstruktor (tiefe Kopie)
MyString::MyString(const MyString & str) {
  strCapacity = strSize = strlen(str.strPtr);
  strPtr = new char[strCapacity + 1];
  memset(strPtr, '\0', strCapacity + 1);
  strncpy(strPtr, str.strPtr, strSize);
}
// Destruktor
MyString::~MyString() {
  delete[] strPtr;
}
// Speicherplatz für String erweitern
void MyString::reserve(unsigned int s) {
if (s > strCapacity) {
char * tmpptr = strPtr;
strCapacity = s;
strPtr = new char[strCapacity + 1];
memset(strPtr, '\0', strCapacity + 1);
strncpy(strPtr, tmpptr, strSize);
delete[] tmpptr;
}
}
// Länge des Strings zurückgeben
unsigned int MyString::size() {
  return strSize;
}
// Kapazität des Strings zurückgeben
unsigned int MyString::capacity() {
  return strCapacity;
}
// MyString anhängen
MyString & MyString::append(MyString & str) {
  reserve(strSize + str.strSize);
  strncpy(strPtr+strSize, str.strPtr, str.strSize);
  strSize += str.strSize;
  return *this;
}
// MyString zuweisen
MyString & MyString::assign(MyString & str) {
  reserve(str.strSize);
  strncpy(strPtr, str.strPtr, str.strSize);
  strSize = str.strSize;
  return *this;
}
// C-String zuweisen
MyString & MyString::assign(const char * cstr) {
  MyString * tmpstringptr = new MyString(cstr);
  assign(*tmpstringptr);
  delete tmpstringptr;
  return *this;
}
// Liefert einen C-String zurück
const char* const MyString::c_str() {
return strPtr;
}
// MyString leeren, d.h. auf leeren String setzen
void MyString::clear() {
  strSize = 0;
  strPtr[0]='\0';
}
// prüfen, ob der String leer ist
bool MyString::empty() {
  return (strSize == 0);
}
// Zugriff auf die einzelne Zeichen des Strings
char & MyString::at(unsigned int i) {
  if (i < strSize && i >= 0) {
    return strPtr[i];
  }
    return strPtr[0];
}