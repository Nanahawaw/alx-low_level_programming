#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9 followed by a new line,
 * excluding 2 and 4
 * Return: 0
 */

void print_most_numbers(void)

{
	char c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
		_putchar('\n');
}
