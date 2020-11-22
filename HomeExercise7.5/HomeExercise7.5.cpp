#include <stdio.h>
#define SIZE 80
int mystery3(const char* s1, const char* s2); // prototype

// ex07_26.c
// What does this program do?
//What does this program do, assuming that the user enters two strings of the same length?

int main(void)
{
	char string1[SIZE]; // create char array
	char string2[SIZE]; // create char array
	
	puts("Enter two strings: ");
	scanf_s("%79s%79s", string1, string2);
	printf("The result is %d\n", mystery3(string1, string2));
}

int mystery3(const char* s1, const char* s2)
{
	int result = 1;
		
	for (; *s1 != '\0' && *s2 != '\0'; ++s1, ++s2) //går gennem begge strings og stopper når en af dem
													//er lig '\0'
	{
		if (*s1 != *s2) //returnerer 0 hvis de 2 strenge ikke er lige lange
		{
			result = 0;
			
		}
		
	}
	
		return result;
}