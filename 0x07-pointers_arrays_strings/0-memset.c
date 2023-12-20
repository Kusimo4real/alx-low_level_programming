#include "main.h"
/**
 * _memset - This function fills a memory with a constant byte
 * Description: The function fills the n bytes of the memory area
 *pointed to by s with the constant byte b
 * @s: the dest, where our data is stored in
 * @b: The src from where it is copied from
 * @n: the number of byte
 * return: the destination where it is been copied from
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
