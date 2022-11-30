#include <stdio.h>
#include <math.h>
#include <ctype.h>


int main()
{
	printf("Hausaufgabe TASK10 selected.\nEnter char to check: ");
	char c;
	c = getchar();
	if (c == '\n')
	{
		c = getchar();
	}

	if (islower(c))
	{
		printf("\Char {%c} is LOWERCASE.", c);
	}
	else
	{
		printf("\Char {%c} is UPPERCASE.", c);
	}

	printf("\nDone! ");
}