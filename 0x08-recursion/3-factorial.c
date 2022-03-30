#include "main.h"

/**
 * factorial - calculate the factorial of a number n
 * @n: integer number
 * Return: factorial of n if >= 0. -1 otherwise
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
