#include "main.h"

/**
 * _isalpha - checks alphabetic character
 *
 * @c: pararmeter to be printed
 *
 * Return: 1 if c is a letter lower or upper case
 * and 0 otherwisew
 */

int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
