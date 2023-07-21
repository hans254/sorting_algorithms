#include "sort.h"

/**
 * _swap - swaps two values in an array
 *
 * @array: data to sort
 * @i: first value
 * @j: second value
 *
 * Return: No Return
 */
void _swap(int *array, int i, int j)
{
	int tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}

/**
 * partition - sorts a partition of data in relation to a pivot
 *
 * @array: data to sort
 * @min: Left wall
 * @max: right wall
 * @size: size of data
 *
 * Return: New Pivot
 */
int partition(int *array, int min, int max, size_t size)
{
	int a, b, pivot = array[max];

	for (a = min, b = max; 1; a++, b--)
	{
		while (array[a] < pivot)
			a++;

		while (array[b] > pivot)
			b--;

		if (a >= b)
			return (a);
		_swap(array, a, b);
		print_array(array, size);
	}
}

/**
 * quicksort -  sorts an array of integers in ascending order using the
 * Quick sort algorithm Lomuto partition scheme
 *
 * @array: data to sort
 * @min: Left wall
 * @max: right wall
 * @size: size of data
 *
 * Return: No Return
 */
void quicksort(int *array, int min, int max, size_t size)
{
	int r;

	if (min < max)
	{
		r = partition(array, min, max, size);
		quicksort(array, min, r - 1, size);
		quicksort(array, r, max, size);
	}
}

/**
 * quick_sort_hoare -  sorts an array of integers in ascending order using the
 * Quick sort algorithm Hoare partition scheme
 *
 * @array: data to sort
 * @size: size of data
 *
 * Return: No Return
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
