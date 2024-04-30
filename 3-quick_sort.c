#include "sort.h"

/**
 * lomuto_partition - partition
 * @array: array
 * @low: lower
 * @high: higher
 * @size: array's size
 * Return: i
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int i = low - 1, j = low;
	int pivot = array[high], tmp  = 0;

	for (; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		high = array[i + 1];
		array[i + 1] = array[high];
		array[high] = aux;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quickSort - Recursive function to quick sort.
 *
 * @array: The array to be sorted.
 *
 * @low: lower value.
 *
 * @high: Higher value.
 *
 * @size: Array's size.
 **/

void quickSort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (high > low)
	{
		pivot = partition(array, low, high, size);
		quickSort(array, low, pivot - 1, size);
		quickSort(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers using the quick sort algorithm.
 *
 * @array: Pointer to the given array.
 *
 * @size: The size of the array.
 *
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quickSprt(array, 0, size - 1, size);
}
