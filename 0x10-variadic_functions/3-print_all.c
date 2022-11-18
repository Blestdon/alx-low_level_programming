#include "variadic_functions.h"

/**
 * print_char - prints char
 * @arg: a list of arguments pointing to the character
 */

voiid print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);

	printf("%c", letter);
}
