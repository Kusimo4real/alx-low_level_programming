#include "main.h"
/**
 * leet - this function encodes a string into 1337
 * @s: this is the argument that the function takes
 * Description:
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Return: the encoed string
 */

char *leet(char *s)
{
	int i, j;
	char SL[] = "aeotl";
	int num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; SL[j] != 0; j++)
		{
			if (SL[j] == s[i] || SL[j] - 32 == s[i])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
