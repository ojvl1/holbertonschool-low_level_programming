#include "main.h"
/**
 *print_alphabet_x10 - entry point
 */
void print_alphabet_x10(void)
{
	int alpha;
	int bet;

	for (alpha = 0; alpha <= 9; alpha++)
	{
	for (bet = 'a'; bet <= 'z'; bet++)

	_putchar(bet);
	_putchar('\n');

	}

}
