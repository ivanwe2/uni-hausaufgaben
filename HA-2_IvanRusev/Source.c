#include <stdio.h>
#include <stdbool.h>



int main() {

	printf("Hausaufgabe TASK 2: ");
	printf("\nEnter number of Fibonacci digits to show (<50): \n");
    int n;
	scanf_s("%d", &n);

    if (n >= 50)
    {
        printf("Index out of bounds. Try again!");
        return 0;
    }
	
    long long int f[50];

    /* 0th and 1st number of the series are 0 and 1*/
    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i < n; i++) {
        /* Add the previous 2 numbers in the series
         and store it */
        f[i] = f[i - 1] + f[i - 2];
    }

    for (int i = 0; i < n; i++)
    {
            printf("{%lld}, ", f[i]);
    }

}