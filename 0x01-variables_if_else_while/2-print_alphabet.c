#include <stdio.h>
#include <stdlib.h>
/**
 * main - main bloc
 * Description: Get a random it with $
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
