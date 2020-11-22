#include <stdio.h>

int main()
{
	//a)
	int number = 1;
	int* numberPtr = &number;				//pointer peger ikke på noget
	printf("%d\n", numberPtr);

	//b)
	float* realPtr;
	/* long* */ float* integerPtr;
	integerPtr = realPtr;

	//c)
	int* x, *y; //manglede et * bag y
	x = y;

	//d)
	char s[] = "this is a character array";
	int count;
	for (; *s != '\0'; ++s) //s er ikke n flytbar pointer
		printf("%c ", *s);

	//e)
	short* numPtr, *result;			//mangler et * bag result
	void* genericPtr = numPtr;		//man kan ikke omdefinere hvad der er på adresse med void data type
	result = genericPtr + 7;

	//f) 
	float x = 19.34;
	float* xPtr = &x;			//mangler en *
	printf("%f\n", xPtr);

	//g)
	char s = 'k';
	char* sPtr = &s;				//s var ikke initialiseret
	printf("%s\n", sPtr);
	return 0;
}