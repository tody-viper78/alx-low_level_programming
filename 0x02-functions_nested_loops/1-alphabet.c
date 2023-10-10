#include "main.h"

/**
 * print_alphabet - make the alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
