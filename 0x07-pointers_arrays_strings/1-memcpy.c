#include "main.h"
/**
 * _memcpy - This copy memory area from a src to a dest
 * Description: the function copies n bytes from memory are dest
 * it returns a pointer to dest
 * @dest: the destination
 * @src: the source
 * @n:the number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
