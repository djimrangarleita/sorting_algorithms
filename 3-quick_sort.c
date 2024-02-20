#include "sort.h"

/**
 * quick_sort - sort an array of ints using the lomuto patitioning method
 * @array: array to be sorted
 * @size: size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size <= 0 || array == NULL)
		return;

	lomuto_partition(array, 0, size - 1, size);
}

/**
 * partition - implementation of lomuto partitioning to sort elts
 * @array: subarray to be sorted
 * @low: lowest index of the subarray
 * @high: highest index of the subarray
 * @size: size of the array for printing
 * Return: index of the last pivot
 */
int *lomuto_partition(int *array, int low, int high, size_t size)
{
	int i, j;
	int pivot, tmp;

	if (high <= low)
	{
		return (array);
	}

	pivot = array[high];
	j = low;

	for (i = low; i < high; i++)
	{
		if (array[i] <= pivot)
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			j++;
		}
	}

	tmp = array[high];
	array[high] = array[j];
	array[j] = tmp;
	print_array(array, size);

	lomuto_partition(array, low, j - 1, size);
	lomuto_partition(array, j + 1, high, size);

	return (array);
}
