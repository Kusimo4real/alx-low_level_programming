#include"main.h"
/**
 * _strcat - this function concatenate string
 * @dest: this is a parameter passed into the string
 * @src:this is the src parameter
 * Return: Return the concatenated string
 */


char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destlen = 0;
	int destsrc = 0;

	/*calculate the length of the dest*/

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest++;
		destlen = destlen + i;
	}
	/*calculate the length of the src*/

	for (i = 0; src[i] != '\0'; i++)
	{
		src++;
		destsrc = destsrc + i;
	}

	/*to concatenate the string*/

	for (i = 0; destlen >= i; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}




