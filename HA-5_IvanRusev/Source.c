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
	printf("Hausaufgabe TASK5 selected.\nEnter positive integer to be checked if prime: ");
	int n;
	do
	{

		scanf_s("%d", &n);
		if (n > 0)
		{
			if (isPrime(n))
			{
				printf("\nSelected integer {%d} is prime! ", n);
			}
			else
			{
				printf("\nSelected integer {%d} is NOT prime! ", n);
			}
			break;
		}
		printf("\nEnter positive integer: ");
	} while (true);

	printf("\nDone! ");
}