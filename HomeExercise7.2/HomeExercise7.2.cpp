#include <iostream>
#include "test_pointer.h"

/*

Home ex. 7.2:
Skriv et modul (test_pointer.h og test_pointer.cpp) med f�lgende funktion:
void test_pointer( int *prt1, int *ptr2 );
Funktionen skal l�gge 10 til det som ptr1 peger p� og gange det som ptr2 peger
p� med 100.
Skriv nu et program (main) hvor i du g�r f�lgende:
1. Opret 2 integer-variable og tildel den ene v�rdien 5 og den anden v�rdien 6.
2. Kald funktionen test_pointer(). Argumenterne skal v�re dine 2 variable.
3. Udskriv nu v�rdierne af dine 2 variable. F�r du 15 og 600 udskrevet p�
sk�rmen? Forst�r du hvorfor???

*/

int main()
{
	using namespace std;

	int test1 = 5;
	int test2 = 6;

	test_pointer(&test1, &test2); //ambersome er andet ord for adressen til vores variable

	cout << "vores 5-variable kommer til at hedde: " << test1 << endl; //printer vores nye variabler
	cout << "vores 6-variable kommer til at hedde: " << test2 << endl; //printer de nye variabler




	return 0;
}