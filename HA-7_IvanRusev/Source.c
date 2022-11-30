#include <stdio.h>
#include <stdbool.h>


int main()
{
	printf("Hausaufgabe TASK7 selected.\nEnter number whose factorial to find: ");
	int n; int prod=1;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		prod *= i;
	}
	printf("\nFactorial of {%d} is : {%d}",n,prod);
	printf("\nDone! ");
}