#include "main.h"

/**
 * _isalpha - check for alphabetical character
 * @c: the character to be checked
 * Return: 1 for alphabetical character or 0 for nothing else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
