#include <iostream>
using namespace std;

char s[4];

char & select(int i, const char & c)
{
	s[i]=c;
	return s[i];
}

int main(void)
{
	select(0, 'a');
	select(1, 'b');
	select(2, 'c');		      // s[0]  s[1]  s[2]  s[3]
	select(3, 'd');		      // Zustand 1:
	select(0, 'A');		      // Zustand 2:
	select(0, 'A') = '0';	  // Zustand 3:
	select(1, 'B') 
		= select(2, 'C');     // Zustand 4:
	select(1, select(2, '2')) 
		= select(3, '3');	  // Zustand 5:
	return 0;
}
