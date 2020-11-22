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

void test_pointer(int* prt1, int* ptr2)
{
	*prt1 += + 10;
	*ptr2 *= 100;

}
