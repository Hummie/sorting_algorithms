#include "sort.h"

/**
  * bubble_sort - sorts an array of integers in ascending order
  * using the Bubble sort algorithm.
  * @array: pointer to an array of type int.
  * @size: size of the array.
  * Return: Nothing
  **/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped, tmp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; /* flag for breaking out if no swaps */
		for (j = 0; j < size - 1 - i; j++)
		{
			/* swapping process */
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				swapped = 1;
			}
		}
		/* if no swaps */
		if (swapped == 0)
			break;
	}
}
