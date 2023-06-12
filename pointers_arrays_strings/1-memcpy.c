#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: dest of memory area
 * @src: source of memory area
 * @n: bytes from memory area to copy
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
