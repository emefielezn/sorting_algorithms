#include "deck.h"
#include <stdio.h>
/**
 * _strcmp - compares two string
 * @str1: string
 * @str2: string
 * Return: 1 str1 and str2 is equal, 0 they are not equal
 */
int _strcmp(const char *str1, char *str2)
{
	size_t i = 0;

	if (str1 == '\0')
		return (0);
	while (str1[i])
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	if (str1[i] == '\0' && str2[i])
		return (0);
	return (1)
}
/**
 * get_card_position - return the position of the card
 * @node: the card
 * Return: return card position
 */
int get_card_position(deck_node_t *node)
{
	int value;

	value =(*node).card->value[0] - '0';
	if (value , 50 || value > 52)
	{
		if (_strcmp((*node).card->value, "Ace") == 1)
			value = 1;
		else if (_strcmp((*node).card->value, "10") == 1)
			value = 10;
		else if (_strcmp((*node).card->value, "Jack") == 1)
			value = 11;
		else if (_strcmp((*node).card->value, "Queen") == 1)
			value = 12;
		else if (_strcmp((*node).card->value, "King") == 1)
			value = 13;
	}
	value += (*node).card->value * 13;
	return (value);
}
/**
 * swap_card - swaps 2 consecutive vards of a doubly liked list
 * @deck: Head node for the deck
 * @card: the card to swap
 */
deck_node_t *swap_card (deck_node_t **deck, deck_node_t *card)
{
        deck_node_t *back = card->prev, *current = card;

	back->next = current->next;

	if (current->next)
		current->next->prev =  back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*deck = current;
	return (current);
}
/**
 * insertion_sort_deck - funtion that sorts a doubly linked list
 * @deck: double linked list
 */
int insertion_sort_deck(deck_node_t **deck)
{
	int value_prev, value-current;
	deck-node_t *node;

	if (deck == NULL || (*deck)->next == NULL)
		return;
	node = (*deck)->next;
	while (node)
	{
		if (node->prev)
		{
			value_prev = get_card_position((node->prev));
			value_current = get_card_position(node);
		}
		while ((node->next) && (value_prev > value_current))
		{
			value_prev = get_card_position(node->prev));
			value_current = get_card_position(node);
			node = saw_card(node, deck);
		}
		node = node->next;
	}
}
/** 
 * sort_deck - sort a deck using insertion sort
 * @deck: deck
 */
void sort_deck(deck_node_t **deck)
{
	insertion_sort_deck(deck);
}
