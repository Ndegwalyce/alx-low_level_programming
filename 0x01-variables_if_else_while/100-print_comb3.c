#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
        int n;
	for (i = 0; i <= 8; i++)
{
	for (n = i + 1; n <= 9; n++)
{
	putchar('0' + i);
	putchar('0' + n);
	if (i != 8 || n != 9)
{
	putchar(',');
	putchar(' ');
}
}
}
return (0);
}
