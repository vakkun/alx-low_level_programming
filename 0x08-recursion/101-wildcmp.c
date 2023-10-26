#include "main.h"

/**
 * wildcmp - compare tow strings and returns 1 if identical
 * @s1: sting to be checked
 * @s2: optional string to used
 *
 * Return: 1 if identical, 0 other option
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}
