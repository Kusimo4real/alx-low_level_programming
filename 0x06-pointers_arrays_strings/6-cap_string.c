#include"main.h"
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32 || s[i] == 9 || s[i] == 10 || s[i] == ',' || s[i] == ';' || s[i] == '!' || s[i] == '?' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||  s[i] == '}')
		{
			i++;
			if (s[i] >= 65 && s[i] <= 90)
				s[i] = s[i];
			else
				s[i] = s[i] - 32;
		}
	}
	return (s);
}


