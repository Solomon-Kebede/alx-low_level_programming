#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located, if value is not
 * present in array or if array is NULL, your function must return -1
 */

/*
 * You can assume that array will be sorted in ascending order
 * You can assume that value won’t appear more than once in array
 * You must print the array being searched every time it changes.
 * (e.g. at the beginning and when you search a subarray) (See example)
 */

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	size_t m = (L + R) / 2;
	size_t i;
	int Am;

	if (array == NULL) /* self explanatory */
		return (-1);

	while (L <= R)
	{
		Am = *(array + m); /* array value @ median adjusted at each iteration */
		/* print the array being searched */
		printf("Searching in array: ");
		for (i = L; i < (R + 1); i++)
		{
			printf("%ld", i);
			if (i < R)
				printf(" "); /* if not last value use space as separator */
			else if (i == R)
				printf("\n"); /* if last value terminate w/ \n */
		}

		if (Am < value) /* median < target */
		{
			L = m + 1; /* first index shifts to median + 1 */
			m = (L + R) / 2; /* the median is recomputed */
		}
		else if (Am > value) /* value < median */
		{
			R = m - 1; /* last index shifts to median - 1 */
			m = (L + R) / 2; /* the median is recomputed */
		}
		else if (Am == value)
		{
			return (m); /* median is target */
		}
	}
	return (-1); /* if array exhausted */
}

