#include "main.h"

/**
 * print_alphabet - make the alphabet x10 times
 * Return: void
 */

void printf_alphabet_10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= '2'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
