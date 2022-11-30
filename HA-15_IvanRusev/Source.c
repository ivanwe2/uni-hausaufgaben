#include <stdio.h>
#include <math.h>
#include <ctype.h>

#define SIZE 10

int main()
{
	printf("Hausaufgabe TASK15 selected.\nEnter number to check for repeating digits: ");
	int n = 0;
	scanf_s("%d", &n);

    int numberArray[SIZE];
    int c = 0;
    /* extract each digit */

    int nDigits = floor(log10(abs(n))) + 1;
    printf("%d ", nDigits);
    
    while (c < nDigits)//cant set a particular value to the lenght of the array
    {
        if (n != 0)
        {
            numberArray[c] = n % 10;
            n /= 10;
            
        }
        else
        {
            numberArray[c] = -1;
        }
        c++;
    }

    

    for (int j = 0; j < nDigits-1; j++)
    {
        for (int i = j+1; i < nDigits; i++)
        {
            if (numberArray[j] == numberArray[i])
            {
                printf("\nYes!");
                printf("\nDone! ");
                return 0;
            }
        }
        
    }

    printf("\nNo!");
    printf("\nDone! ");
}

