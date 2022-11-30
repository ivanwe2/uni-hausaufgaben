#include <stdio.h>
#include <stdbool.h>

int main() {

	printf("Hausaufgabe TASK 1: ");

	int n,sum=0;
	int counter = 0;


	do
	{
		printf("\nEnter new integer.{-855 to stop}: ");
		scanf_s("%d", &n);
		if (n == -855) break;
		sum += n;
		counter++;

	} while(true);
	
	double avr = sum / counter;
	printf("\nAverage of entered numbers: %.2lf",avr);

}