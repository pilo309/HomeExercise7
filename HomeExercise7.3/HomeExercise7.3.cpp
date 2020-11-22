#include <stdio.h>
#define SIZE 80

size_t mystery2(const char* s); // prototype

int main(void)
{
	char string[SIZE]; // create char array
	puts("Enter a string: ");
	scanf_s("%79s", string);
	printf("%d\n", mystery2(string));
}
// What does this function do?

size_t mystery2(const char* s)
{
size_t x;
// loop through string
for (x = 0; *s != '\0'; ++s) //tæller et x for hvert plads i array som ikke er '\0'
{
++x;
}

return x; //når den når '\0' vil den returnere antallet af pladser i string,  
}