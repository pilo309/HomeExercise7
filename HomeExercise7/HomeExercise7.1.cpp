#include <iostream>

/*

Home ex. 7.1:
Skriv et lille program (main) hvor i du g�r f�lgende:
1. Opret en char-variable og tildel den v�rdien �X�.
2. Opret en char-pointer og s�t den til at peger p� din char-variabel.
3. Udskriv v�rdien af din char-variabel.
4. Udskriv igen v�rdien af din char-variabel, men denne gang skal du g�re det
vha. din pointer.
5. Tildel nu din char-variabel v�rdien �z�. Du skal bruge din pointer til det.
6. Udskriv v�rdien af din char-variabel.

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