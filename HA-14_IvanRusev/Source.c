#include <stdio.h>
#include <math.h>
#include <ctype.h>


int main()
{
	printf("Hausaufgabe TASK14 selected.\nEnter numbers before including n to sum: ");
	int n = 0;int sum = 0;
	scanf_s("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}


	if (sum%2==0)
	{
		printf("\nSum {%d} is even.", sum);
	}
	else {
		printf("\nSum {%d} is NOT even.", sum);
	}
	
	printf("\nDone! ");
}