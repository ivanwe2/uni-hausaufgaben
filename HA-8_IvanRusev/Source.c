#include <stdio.h>
#include <stdbool.h>

int convert(int n) {
	int b = 0;
	int rem, i = 1;

	while (n != 0) {
		rem = n % 2;
		n /= 2;
		b += rem * i;
		i *= 10;
	}

	return b;
}

int main()
{
	printf("Hausaufgabe TASK8 selected.\nEnter number to convert to binary: ");
	int n;
	scanf_s("%d", &n);

	printf("\Binary of {%d} is : {%d}", n, convert(n));
	printf("\nDone! ");
}