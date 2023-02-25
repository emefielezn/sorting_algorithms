#include "sort.h"
/**
 * bubble_sort - sort array element from min to max value
 * @array: the array
 * @size: array sise
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, index, tmp = 0;

	if (size < 2)
		return
	for (i = 0; i < size-1; ++i)
		for (index = 0; index < size-i-1; ++index)
		{
			if(array[index] > array[index +1])
			{
			 tmp = array[index];
			 array[index] = array[index + 1];
			 array[index + 1] = tmp;
			 print_array(array, size);
			 }
		}
}
