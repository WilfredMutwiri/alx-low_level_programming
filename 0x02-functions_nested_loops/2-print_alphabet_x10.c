#include "main.h"
/**
 * 2-print_alphabet_x10.c- prints 10 times the alphabet, lowecase
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch='a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}
