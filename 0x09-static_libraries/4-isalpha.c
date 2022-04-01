#include "main.h"

/**
 * _isalpha - checks for lower and upper case characters
 * @c: ascii character code
 * Return: 1 if alphabet character. 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
		return (1);
	else
		return (0);

}
