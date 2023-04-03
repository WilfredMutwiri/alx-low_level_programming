#include " main.h"
/**
 * _memset-fills a specific memory block with a specific value
 * @s:starting memory to be filled
 * @b:the desired value
 * @n:no.of bytes to be changed
 *
 * Return: changed array wit n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for(;n>0;i++)
	{
		s[i] = b;
		n--;
	}
	return(s);
}
