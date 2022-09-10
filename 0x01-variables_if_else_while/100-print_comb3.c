#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * This % arguments for single digit
 * Division argument for double digits
 * Return: 0
 */

int main(void)
{
	int j, k, l;

	j = 0;

	while (j < 100)
	{
		k = j % 10; /* double digits */
		l = j / 10; /* single digit */

		if (l < k)
		{
			putchar(k + '0');
			putchar(l + '0');
				if (j < 89)
				{
					putchar(',');
					putchar(' ');
				}
		}
		j++;
	}
	putchar('\n');

	return (0);
}
