#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sort array in asc by bubbling elts
 * @array: the input array to sort
 * @size: size of the input array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int i;
	int tmp;
	int swap;
	int max_loop;

	max_loop = size - 1;
	while (max_loop >= 0)
	{
		swap = 0;
		for (i = 0; i < max_loop; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swap = 1;
				print_array(array, size);
			}
		}

		if (swap == 0)
		{
			break;
		}

		max_loop--;
	}
}
