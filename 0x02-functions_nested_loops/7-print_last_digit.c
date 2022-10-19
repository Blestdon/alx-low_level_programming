#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @nm: Number
 * Return: last digit
 */
int print_last_digit(int nm)
{
	int ld = nm % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
