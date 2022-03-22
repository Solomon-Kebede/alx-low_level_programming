#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap pointer values
 * @a: pointer to integer
 * @b: pointer to integer
 */

void swap_int(int *a, int *b)
{
	int store = *b;
	*b = *a;
	*a = store;
}
