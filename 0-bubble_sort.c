#include <stdio.h>
#include "sort.h"

/**
 *bubble_sort - Sorts the integer elements in the array
 *in ascending order using the bubble sort algorithm.
 *
 *@array: Pointer to an integer array to be sorted.
 *
 *@size: Size of the integer array.
 **/

void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j, tmp;

	if (size <= 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
