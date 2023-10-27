#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the command line arguments recevied
 * @argc : number of command-line arguments
 * @argv : string of argumenst passed to main fcn
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
