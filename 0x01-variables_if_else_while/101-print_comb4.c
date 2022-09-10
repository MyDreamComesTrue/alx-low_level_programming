#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 * Return: 0
 */

int main(void)
{
int c, c_two, c_three;
for (c = 51; c <= 58; c++)
{
for (c_two = c + 1; c_two <= 59; c_two++)
{
for (c_three = c_two + 1; c_three <= 60; c_three++)
{
putchar(c);
putchar(c_two);
putchar(c_three);
if (c != 58 || c_two != 59 || c_three != 60)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
