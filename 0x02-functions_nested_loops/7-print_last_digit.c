#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: some user fed number
 * Return: last digit of the number n
 */

int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m = m * -1;
	_putchar(m + '0');
	return (m);
}
