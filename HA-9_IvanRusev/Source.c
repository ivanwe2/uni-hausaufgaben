#include <stdio.h>
#include <math.h>

int convert(int n) {
	int dec = 0, i = 0, rem;

	while (n != 0) {
		rem = n % 10;
		n /= 10;
		dec += rem * pow(2, i);
		++i;
	}

	return dec;
}

int main()
{
	printf("Hausaufgabe TASK9 selected.\nEnter binary number to convert to decimal: ");
	int n;
	scanf_s("%d", &n);

	printf("\Decimal of {%d} is : {%d}", n, convert(n));
	printf("\nDone! ");
}