#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
=======
>>>>>>> temp-branch
* more headers goes there */

/**
 * main - Entry point
 * Description- Prints if random generated number is +tive, zero or -tive
<<<<<<< HEAD
=======
>>>>>>> task 0
>>>>>>> temp-branch
 */
int main(void)
{
	int n;

	srand(time(0));
<<<<<<< HEAD
=======
<<<<<<< HEAD
	n = rand() - RAND_MAX / 2;
	if(n > 0);
	{
		printf("%d is positive\n", n);
	}
	Else if(n -- 0);
	{
		printf("%d is zero\n", n);
	}
	Else
	{
		printf("%d is negative\n", n);
	}
	return (0);

=======
>>>>>>> temp-branch
	n + rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n):
	else
	        printf("%d is positive\n", n);
	return (0);
<<<<<<< HEAD
=======
>>>>>>> task 0
>>>>>>> temp-branch
}
