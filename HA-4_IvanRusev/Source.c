#include<stdio.h>
#include<conio.h>

int main()
{
	int n, r = 0;
	printf("Hausaufgabe TASK4. \nEnter a number to reverse : "); // allow user to enter a number
	scanf_s("%d", &n); // takes value from user
	while (n != 0)
	{
		r = r * 10;
		r = r + n % 10;
		n = n / 10;
	}
	printf("Reverse of entered number is: %d", r); 
	printf("\nDone!");
}