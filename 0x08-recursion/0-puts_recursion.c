#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /*If we have reached the end of a string*/
	{
		_putchar('\n'); /*put a newline character*/
		return; /* end the recursive*/

	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
