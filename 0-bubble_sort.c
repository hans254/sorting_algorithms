/*
 * File: 0-bubble_sort.c
 * Auth: Hansel Fidel Ndemange
 */
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorith.
 *
 * @array: Array of integers to be sorted
 * @size: The size of the @array
 */

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int temp;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - 1; b++)
		{
			/* if this pair is out of order */
			if (array[b] > array[b + 1])
			{
				/* swap them and remember something changed */
				temp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
