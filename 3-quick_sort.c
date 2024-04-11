#include "sort.h"

/**
 * swap_ints - Swaps two elements in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
* lomuto_partition - Partitions the array for quicksort
*                    using the Lomuto scheme.
* @array: The array to sort.
* @low: The starting index of the array partition.
* @high: The ending index of the array partition.
* @size: The full size of the array.
*
* Return: The final partition index.
*/
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap_ints(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		swap_ints(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
* quicksort - Implements the Quick Sort algorithm recursively.
* @array: The array to sort.
* @low: The starting index of the array partition.
* @high: The ending index of the array partition.
* @size: The full size of the array.
*/
void quicksort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = lomuto_partition(array, low, high, size);

		quicksort(array, low, pi - 1, size);
		quicksort(array, pi + 1, high, size);
	}
}

/**
* quick_sort - Sorts an array of integers in ascending
* order using the Quick sort algorithm.
*
* @array: The array to be sorted.
* @size: The size of the array.
*/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}

