#include "sort.h"
/**
 * swap - the position of two elements in an array
 * @array: array
 * @n1: array element
 * @n2: array element
 */
void swap(int *array, int n1 int n2)
{
	int tmp;

	tmp = array[n1];
	array[n1] = array[n2];
	array[n2] = tmp;
}
/**
 * shell_sort - shell sort knuth sequence
 * @array: array to be orted
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t knuth, i, index = 0;

	knuth = 1;
	while (knuth < size)
		knuth = (knuth * 3) + 1;
	knuth = (knuth -1) / 3;
	while (knuth > 0)
	{
		for (i = knuth;  i < size; i++)
		{
			for (index = i; index >= knuth && 
					(array[index] < array[index - knuth]);
				       	index -= knuth)
				swap(array, index, index - knuth);
		}
		print_array(array. size);
		knuth = (knuth - 1) / 3;
	}
}
