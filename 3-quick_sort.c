#include "sort.h"

/**
 * lomuto_partition - Partitions the array using lomuto scheme.
 *
 * @array: Array to be partionned.
 *
 * @lo: lower value
 *
 * @hi: Higher value
 *
 * @size: Our array size
 * Return: i
 */
int lomuto_partition(int *array, int lo, int hi, size_t size)
{
	int i = lo - 1, j = lo;
	int pivot = array[hi], tmp = 0;

	for (; j < hi; j++)
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
	if (array[i + 1] != array[hi])
	{
		tmp = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quickSort - Recursive quick sort fun
 *
 * @array: Array to be sorted
 *
 * @lo: lower element
 *
 * @hi: higher element
 *
 * @size: array's size
 *
 **/
void quickSort(int *array, int lo, int hi, size_t size)
{
	int pivot;

	if (lo < hi)
	{
		pivot = lomuto_partition(array, lo, hi, size);
		quickSort(array, lo, pivot - 1, size);
		quickSort(array, pivot + 1, hi, size);
	}
}

/**
 * quick_sort - function that sorts an array of integers
 *
 * in ascending order using the Quick sort algorithm
 *
 * @array: Pointer to the array to be sorted
 *
 * @size: Array's size
 **/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quickSort(array, 0, size - 1, size);
}
