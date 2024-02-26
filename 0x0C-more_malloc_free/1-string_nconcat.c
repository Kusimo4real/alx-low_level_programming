#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - this function concatenate two string
 * @s1:first pointer
 * @s2:second pointer
 * @n:number of bytes of the second string
 * Return:the pointer to the concatenated string having both s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	char *ptr;

	/*count the length of the string s1*/

	for (i = 0; s1[i] != '\0'; i++)
		;
	/*count the length of the s2*/
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc(sizeof(char) * (n + i) + 1);

	if (ptr == NULL)
		return ('\0');
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	if (n >= j)
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
			ptr[i] = s2[j];
	}
	else
	{
	for (j = 0; s2[j] != s2[n]; j++, i++)
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
