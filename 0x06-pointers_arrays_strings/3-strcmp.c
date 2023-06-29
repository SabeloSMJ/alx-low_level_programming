#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two string character
 * @s1: the first character string to be compared
 * @s2: the second character string to be compared
 * Return: if str1 < str2, then a minus character
 * if str1 == str2, then gives 0.
 * if str1 > str2, then a plus character
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
