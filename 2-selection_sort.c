#include "sort.h"

/**
 *selection_sort - Sorts an array using the selection sort algorithm.
 *
 *@array: pointer to the array to be sorted.
 *
 *@size: Number of the elements in the array.
 **/

void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, min_indx;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_indx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_indx])

				min_indx = j;
		}

			if (min_indx != i)
			{
				tmp = array[min_indx];
				array[min_indx] = array[i];
				array[i] = tmp;
				print_array(array, size);

			}
	}

}
