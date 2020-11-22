#include <iostream>

/*

Home ex. 7.1:
Skriv et lille program (main) hvor i du gør følgende:
1. Opret en char-variable og tildel den værdien ’X’.
2. Opret en char-pointer og sæt den til at peger på din char-variabel.
3. Udskriv værdien af din char-variabel.
4. Udskriv igen værdien af din char-variabel, men denne gang skal du gøre det
vha. din pointer.
5. Tildel nu din char-variabel værdien ’z’. Du skal bruge din pointer til det.
6. Udskriv værdien af din char-variabel.

*/


int main()
{

	using namespace std;

	char variable;
	variable = 'X';

	char* variablePtr = &variable;

	cout << "Vores variable: " << variable << endl;
	cout << "Vores pointer til variable: " << *variablePtr << endl;

	*variablePtr = 'z';
	cout << "Vores variable: " << variable << endl;


	return 0;
}