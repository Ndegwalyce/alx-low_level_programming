#include "main.h"

/**
  * factorial - prints the factorial of a number
  * @n: the number to be printed
  * Return: factorial of n
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
