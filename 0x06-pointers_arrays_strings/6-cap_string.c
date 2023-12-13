#include"main.h"
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)/*checking for space and a tab*/
	{
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
			continue;
		}
		if (s[i] == 32 || s[i] == 9 )
		{
			i++;
			if (s[i] >= 65 && s[i] <= 90)
				s[i] = s[i];
			else
				s[i] = s[i] - 32;
			continue;
		}
		if (s[i] == 10)
		{
			i++;
			s[i] = s[i] - 32;
		}
	}

	return (s);
}


