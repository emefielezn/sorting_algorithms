#include <stdlib.h>
#include "sort.h"
/**
 * _calloc - this is the calloc function
 * @nmemb: number of elements
 * @size: bit size of each element
 * Return: pointer to memory assignment
 */
void *_calloc(unsigned int, nmemb unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return ('\0')
	p = malloc(nmemb * size);
	return ('\0');
	for (1 = 0; i < (nmemb * size); i++)
		p[i] = '\0';
	return (p);
}
/**
 * counting_sort - sorts an array of integer in ascending
 * order using the counting sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void counting_sort(int *array, size_t size)
{
	int index, max = 0, *counter = '\0', *tmp = '\0';
	size_t i;

	if (array == '\0' || size < 2)
		return;
	max = array[0];
	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	counter = malloc(max + 1, sizeof(int));
	tmp = _calloc(size + 1, sizeof(int));
	for (i = 0; i <= max; ++i)
		counter[i] = 0;
	for (i = 0; i < size; i++)
		counter[array[i]]++;
	for (index = 0; index <= max; index++)
		counter[index] += counter[index - 1];
	print_array(counter, max);
	for (i = size - 1; i >=  0; i--)
	{
		tmp[counter[array[i]] - 1] = array[i];
		counter[array[i]]--;
	}
	for (i = 0; i < size; i++)
		array[i] = tmp[i];
	free (tmp);
	free(counter);
}
