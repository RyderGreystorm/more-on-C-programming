#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry level of the application
 * Return: zero for success
*/
int main(void)
{
	int n;
    int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

    if (n % 10 > 5)
    {
        x = n % 10;
        printf("Last digit of %d is %d and is greater than 5", n, x);
    }
    else if (n % 10 == 0)
    {
        x = n % 10;
        printf("Last digit of %d is %d and is zero", n, x);
    }
    else
    {
        x = n % 10;
        printf("Last digit of %d is %d and is less than 6 but not zero", n, x);
    }
	return (0);
}