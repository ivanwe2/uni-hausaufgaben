#include <stdio.h>
#include <math.h>
#include <ctype.h>

#define SIZE 6

int main()
{
    printf("Hausaufgabe TASK16 selected.\nEnter 6 numbers to order by descending: ");
    int n = 0;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter number [%d]:",i+1);
        scanf_s("%d", &n);
        arr[i] = n;
    }
    int temp = 0;
    for (int i = 0; i < SIZE-1; i++)
    {
        for (int j = i+1; j < SIZE; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nSorted elements by descending: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("{%d} ,",arr[i]);
    }
    printf("\nDone! ");
}