#include "main.h"

/**
 * _islower - checks lower case characters
 *
 * @c: parameter to be printed
 *
 * Return: 1 if lower case
 * and 0 otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
