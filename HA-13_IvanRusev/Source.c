#include <stdio.h>
#include <math.h>
#include <ctype.h>


int main()
{
	printf("Hausaufgabe TASK13 selected.\nEnter number of integers n to enter: ");
	int n = 0;
	scanf_s("%d", &n);
	int temp=0;int max=0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &temp);
		if (max < temp)
		{
			max = temp;
		}
	}
	
	printf("\nBiggest value is: {%d} ",max);
	printf("\nDone! ");
}