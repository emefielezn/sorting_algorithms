#include "sort.h"
/**
 * swap - the positions of the two elements into an array
 * @array: array
 * @item1: array element
 * @item2: array element
 */
void swap(int *array, size_t item1 size_t item2)
{
	int tmp;

	tmp = array[item1];
		array[item1] = array[item2];
	array[item2] = tmp;
}

/**
 * lomuto_partition - lomuto partition sorting scheme
 * @array: array
 * @first: first array element
 * @last: last array element
 * @size: size of array
 * return: return the position of the last element sorted
 */
int lomuto_partition(int *array, size_t first, size_t last, size_t size)
{
	int pivot = array[last];
	size_t current = first, finder;

	for (finder = first; finder < last; finder++)
	{
		if (array[finder] < pivot)
		{
			if (array[current] != array[finder])
			{
				swap(array, current, finder);
				print_array(array, size);
			}
			current++;
		}
	}
	if (array[current] != array[last])
	{
		swap(array, current, last);
		print_array(array, size);
	}
	return (current)
}
/**
 * qs - quicksort algorithm implementation
 * @array: array
 * @first: first array element
 * @last: last array element
 * @size: size of array
 */
void qs(int *array, size_t first, size_t last, int size)
{
	size_t position = 0;

	if (first < last)
	{
		position = lomuto_partition(array, first, last, size);
		qs(array, first, position - 1, size);
		qs(array, position + 1, last, size);
	}
}

/**
 * quick_sort - prepare the terrain to quicksort algorithm
 * @array: array
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	qs(array, 0, size - 1, size)
}
