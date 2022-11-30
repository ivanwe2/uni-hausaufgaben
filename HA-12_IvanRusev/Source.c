#include <stdio.h>
#include <math.h>
#include <ctype.h>


int main()
{
	printf("Hausaufgabe TASK12 selected.\nEnter integer n: ");
	int n=0;
	scanf_s("%d", &n);
	double s = sqrt(n);

	if ((int)s == s)
	{
		printf("\nNumber {%d} is exact square of: {%d}", n, (int)s);
	}
	else
	{
		printf("\Number {%d} is NOT exact square.", n);
	}

	printf("\nDone! ");
}