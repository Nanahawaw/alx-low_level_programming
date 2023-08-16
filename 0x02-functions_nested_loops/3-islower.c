#include "main.h"

/**
 * _islower - checks for lowercase character,
 * Returns 1 if c is lowercase,0 otherwise.
 * Return: Always 0 (Success)
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
