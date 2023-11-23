#include "main.h"

/**
 * get_endianness - func that checks the endianness
 *
 * Return: 0 if big , 1 if little
 */
int get_endianness(void)
{
	unsigned int z;
	char *a;

	z = 1;
	a = (char *) &z;

	return ((int)*a);
}
