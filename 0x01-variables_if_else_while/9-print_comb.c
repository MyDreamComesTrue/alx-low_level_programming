#include <stdio.h>

/**
 * main - Prints all combinations of single-digit with comma and space
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 17; c < 27; c++)
	{
		putchar(c);
		if (c != 26)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
