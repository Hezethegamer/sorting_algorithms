#ifndef DECK_H
#define DECK_H

/**
 * enum type_e - card type
 * @SPADE: spade type
 * @HEART: heart type
 * @CLUB: club type
 * @DIAMOND: diamond type
 */
typedef enum type_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} type_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: type of the card
 */
typedef struct card_s
{
	const char *value;
	const type_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to  previous node of the list
 * @next: Pointer going to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);
#endif
