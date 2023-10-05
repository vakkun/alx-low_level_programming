#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
{
	printf("Size of a char:", sizeof(char));
	printf("Size of an int:", sizeof(int));
	printf("Size of a long int:\n", sizeof(long int));
	printf("Size of a long long int:\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
