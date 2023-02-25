#include "sort.h"
/**
 * swap - change position of array elemets
 * @a: intger a
 * @b: integer b
 */
void swap(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the selection sort algorithm
 * @size: size of array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	
	if (array == NULL)
		return;
	for (step = 0; step < size-1; step++)
	{
		int min_idx = step;
		for (i = step + 1; i < size; i++)
		{
			if (array[i] > array[index])
			min_idx = i;
		}
		swap(&array[min_idx], &array[step]);
	}
	print_array(array, size);
}
