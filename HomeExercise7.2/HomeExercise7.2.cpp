#include <iostream>
#include "test_pointer.h"

/*

Home ex. 7.2:
Skriv et modul (test_pointer.h og test_pointer.cpp) med følgende funktion:
void test_pointer( int *prt1, int *ptr2 );
Funktionen skal lægge 10 til det som ptr1 peger på og gange det som ptr2 peger
på med 100.
Skriv nu et program (main) hvor i du gør følgende:
1. Opret 2 integer-variable og tildel den ene værdien 5 og den anden værdien 6.
2. Kald funktionen test_pointer(). Argumenterne skal være dine 2 variable.
3. Udskriv nu værdierne af dine 2 variable. Får du 15 og 600 udskrevet på
skærmen? Forstår du hvorfor???

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