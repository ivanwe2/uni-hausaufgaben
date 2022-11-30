#include <stdio.h>
#include <math.h>
#include <ctype.h>


int main()
{
    printf("Hausaufgabe TASK18 selected.\nEnter positive integer to get all odd numbers in range 0..n: ");
    int n = 0;
    scanf_s("%d", &n);

    printf("\All odd elements \n");
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("{%d} ,", i);
        }
    }
    printf("\nDone! ");
}