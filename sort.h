#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked node
 *
 * @n: integr stored in the node
 * @prev: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t
void bubble_sort(int *array, size_t size)
	void print_array(const listint_t *list);
	listint_t *swap_nodde(listint_t *node, listint_t **list);
	void insertion_sort_list(listint_t **list);
	void selectiion_sort(int *array, size_t size);
	void quick_sort(int *array, size_t size);
	void shell_sort(int *array, size_t size)
	void cocktail_sort_list(listint_t **list);
	void counting_sort_list(listint_t **list);
	void counting_sort(int *array, size_t size);
	void merge_sort(int *array, size_t size);
	void heap_sort(int *array, size_t size);
	void radix_sort(int *array, size_t size);
	void bitonic_sort(int * array, size_t size);
	void quick_sort_hoare(int *array, size_t size);
#endif