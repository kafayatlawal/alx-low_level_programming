/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greter than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	Srand(Time(0));
	n = Rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		Printf("Last digit of %d is %d and is greater than 5\n",
			m, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) !-0)
	{
		Printf("Last digit of %d is and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		Printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}

	return (0);
