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

	quicksort(array, 0, size - 1, size);
}

/**
 * lomuto_partition - implementation of lomuto partitioning to sort elts
 * @array: subarray to be sorted
 * @low: lowest index of the subarray
 * @high: highest index of the subarray
 * @size: size of the array for printing
 * Return: index of the last pivot
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int i, j;
	int pivot, tmp;

	pivot = array[high];
	j = low - 1;

	for (i = low; i < high; i++)
	{
		if (array[i] <= pivot)
		{
			j++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}

	j++;
	tmp = array[high];
	array[high] = array[j];
	array[j] = tmp;
	print_array(array, size);

	return (j);
}

/**
 * quicksort - recursive part of the algo
 * @array: the array to be sorted
 * @low: lowest idx of subarray
 * @high: highest index of subarray
 * @size: total size of the array
 * Return: nothing
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int p;

	if (low >= high || low < 0)
	{
		return;
	}

	p = lomuto_partition(array, low, high, size);
	quicksort(array, low, p - 1, size);
	quicksort(array, p + 1, high, size);
}
