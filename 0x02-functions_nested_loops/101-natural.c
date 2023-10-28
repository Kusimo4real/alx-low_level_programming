#include <stdio.h>
/**
  * main - This program add all the natural numbee=rs that are
  * multiplr of 3 and 5
  * Return: 0
  */

int main(void)
{
	int i;
	int sum;

	for (i = 1 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
