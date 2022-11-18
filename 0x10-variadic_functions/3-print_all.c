#include "variadic_functions.h"

/**
 * print_char - prints char
 * @arg: a list of arguments pointing to the character
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);

	printf("%c", letter);
}

/**
 * print_int - prints an int
 * @arg: a list of arguments
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);

	printf("%d", num);
}

/**
 * print_float - prints a float
 *@arg: a list of arguments
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);

	printf("%f", num);
}

/**
 * print_string - prints a string
 * @arg: a list of arguments
 */
void print_string(va_list arg)
{
	char *str;

		str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: formats inputs
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0, k = 0;

	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);
	while (format && (*(format + i)))
	{
		k = 0;

		if (k < 4)
		{
			printf("%s", separator);
			funcs[k].print(args);
			separator = ", ";
		}
		i++;
	}

	printf("\n");

	va_end(args);
}
