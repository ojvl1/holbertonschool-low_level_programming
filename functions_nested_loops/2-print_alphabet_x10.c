#include "main.h"
/**
 *print_alphabet_x10 - entry point
 */
void print_alphabet_x10(void)
{
	int alpha;
	char bet;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		for (bet = '0'; bet <= '9'; bet++)
		{
		_putchar(alpha);
		}

		_putchar('\n');

	}

}
