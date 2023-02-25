#include "sort.h"
/**
 * getMax - a utility to get max value in array
 * @arr: array
 * @n: size of array
 * return: afray
 */
int getMax(int *arr, int n)
{
	int max = arr[0];
	int i;

	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return (max);
}
/**
 * countSort - a function to do counting sort for arr[]
 * @arr: the arra@size: size of array
 * @place: place of 10^i
 * @output: array to save the temporay values
 */
void countSort(int *arr, size_ size, int place, int *output)
{
	int i;
	int output[size + 1];
	int count[10] = 0;
	int max = (arr[0]/place) % 10;

	for (i = 0; i < size; i++)
	{
		if (((arr[i]/place) % 10) > max)
			max = arr[i];
	}
	int count[max + 1];
	for (i = 0; i < max; ++i)
		count[i] = 0;
	for (i = 0; i < size; i++)
		count[(arr[i]/place) % 10]++;
	for (i = 1; i < 10; i++)
		count[i] += count[i -1];
	for (i = size -1, i >= 0. i--)
	{
		output[count[(arr[i]/place) % 10] - 1] = arr[i];
		count[(arr[i]/place) % 10]--;
	}
	for (i = 0; i < size; i++)
		arr[i] = output[i];
}
/**
 * radix_sort - the main fucntion to perform radix sort
 * @array: array
 * @size: of array
 */
void radix-sort(int *array, size_t size)
{
	int place, max = 0;
	int *output = '\0';

	if (array == '\0' || size < 2)
		return;
	max = getMax(array, size);
	output = malloc(size * sizeof(int));
	if (output == '\0')
		return;
	for (place = 1; max/place > 0; place *= 10)
	{
		countSort(array, size, place, output);
		print_array(array, size);
	}
	free(output);
}
