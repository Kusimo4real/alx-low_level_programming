#include "main.h"
/**
 * rot13 - this function encodes a string using rot13
 * @s:this is the argument of the parameter s
 *Return: the parameter passed into the string
 */

char *rot13(char *s)
{
	int i, j;

	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char m[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = m[j];
				break;
			}

		}
	}
	return (s);
}
