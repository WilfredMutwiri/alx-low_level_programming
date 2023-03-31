#include "main.h"
#include <stdio.h>
/**
 * main - check code
 *
 * Return: Always 0.
 * _strcat joins two words
 * @*src:the added word
 * @*dest: theoriginal word
 */
char *_strcat(char *dest, char *src)
{
	char *src[100] = "Love";

	char *dest[100] = "It is awesome";

	char *ptr;

	ptr = _strcat(dest, src);

	_putchar("%c", ptr);
	return (0);
}
