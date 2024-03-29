#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	int j;
	char *ptr;
	int num;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*count the length of the string s1*/

	for (i = 0; s1[i] != '\0'; i++)
		;
	/*count the length of the s2*/
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (num >= j)
		num = j;
	if (num < 0)
		return ('\0');
	ptr = malloc(sizeof(char) * (n + i) + 1);

	if (ptr == NULL)
		return ('\0');
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
