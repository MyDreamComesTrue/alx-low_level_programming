#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints digits of base of 16
 * Return: 0
 */

int main(void)
{
	char c;
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
