#include <stdio.h>

int findLength(int x)
{
	int n = 0;
	while (x) {
		n++;
		x = x / 10;
	}
	return n;
}

int main() {

	printf("HA-3. Enter any number to find sum of digits:  ");
	int n;
	scanf_s("%d", &n);
	int sum = 0;int lastDigit = 0;
	
	int l = findLength(n);
	for (int i = 1; i <= l; i++)
	{
		lastDigit = n % 10;
		sum += lastDigit;
		n /= 10;
	}
	printf("\nSum of digits =  %d", sum);


}