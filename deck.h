#ifndef DECK_H
#define DECK_H
/*structs*/
/**
 * enum kind_e - card suit
 * @SPADE:  spade suit
 * @HEART:  heart suit
 * @CLUB: club suit
 * @DIAMOND: diamond suit
 */
typedef enum kind_e
{
	SPADE = 0;
	HEART;
	CLUB;
	DIAMOND;
} kind_t;
/**
 * struct card_s - playing card
 * from "Ace" to "King"
 * @kind: kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;
/**
 * struct deck_node_s - deck of card
 * @card: pointer to the card of the node
 * @prev: pointer to the previous node of the list
 * @next: pointer to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;
/*prototype*/
void sort_deck(deck_node_t **deck);
#endif
