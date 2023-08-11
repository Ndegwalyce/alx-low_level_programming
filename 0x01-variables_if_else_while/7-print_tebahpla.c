#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 on program success
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
	putchar(alpha);
	}

	putchar('\n');
return (0);
}
