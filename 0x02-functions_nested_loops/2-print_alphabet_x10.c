#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int 10;
	char lett;

	for (ten = 0; ten <= 9; ten++)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
			_putchar(lett);
		_putchar('\n')
	}

}
