#include "sort.h"

/**
 * selection_sort - iteratively select the smallest elt in the list and sort it
 * @array: array of int elts
 * @size: size of the array to be sorted
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	int tmp;
	int swap;
	size_t i;
	size_t j;
	int min_idx;

	for (i = 0; i < size; i++)
	{
		min_idx = i;
		swap = 0;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
				swap = 1;
			}
		}

		if (swap != 0)
		{
			tmp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = tmp;
			print_array(array, size);
		}
	}
}
