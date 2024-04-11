#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection Sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap of two elements.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		/* Assume the minimum is the first element */
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
		/* Find the minimum element in unsorted array */
		if (array[j] < array[min_idx])
		min_idx = j;
		}

		if (min_idx != i)
		{
		/* Swap the found minimum element with the first element */
		swap_ints(&array[i], &array[min_idx]);
		print_array(array, size); /* Print array after swap */
		}
	}
}
