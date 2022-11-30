#include <stdio.h>
#include <stdbool.h>


bool isPrime(int n)
{
	int i;
	if (n == 1)
	{
		return false;
	}
	// Iterate through 2 to n/2
	// We can also iterate only upto sqrt(n)
	for (i = 2; i <= n / 2; i++)
	{
		// Check if 'i' is factor of 'n'
		if (n % i == 0)
		{
			// 'i' is factor of `n`
			// so `n` is not a Prime Number
			return false;
		}
	}

	return true;
}

int main()
{
	printf("Hausaufgabe TASK6 selected.\nEnter number whose prime factors are to be found: ");
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (isPrime(i))
			{
				printf("{%d}, ", i);
			}
		}
	}

	printf("\nDone! ");
}