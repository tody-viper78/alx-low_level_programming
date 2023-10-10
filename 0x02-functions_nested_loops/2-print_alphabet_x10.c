#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	for (i = 0; i < 10; i++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
