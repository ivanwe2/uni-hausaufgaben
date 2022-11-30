#include <stdio.h>
#include <math.h>
#include <ctype.h>


int main()
{
	printf("Hausaufgabe TASK11 selected.\nEnter integer n: ");
	int n;
	scanf_s("%d", &n);
	int sum=0;

	for(int i = 1; i <= n; i++)
	{
		sum += pow(i, 3);
	}

	printf("\Sum of cubes of first n natural integers: {%d} ",sum);
	printf("\nDone! ");
}