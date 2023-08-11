#include < stdio.h>

/**
 * main - prints the alphabet in lowercase
 * then a new line
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 26; x++)
		putchar('a' + x);

	putchar('\n');

return (0);	
}
