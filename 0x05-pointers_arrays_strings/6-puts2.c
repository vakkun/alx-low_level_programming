#include <stdio.h>

/**
 * puts2 -prints every other char a string, start with first char.
 * @str : the imput string.
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}

	putchar('\n');
}
