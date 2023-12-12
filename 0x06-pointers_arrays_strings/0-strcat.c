#include"main.h"
/**
 * _strcat - this function concatenate string
 * @dest: this is a parameter passed into the string
 * @src:this is the src parameter
 * Return: Return the concatenated string
 */


char *_strcat(char *dest, char *src)
{
	int i, j;

	/*calculate the length of the dest*/

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != 0; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}




