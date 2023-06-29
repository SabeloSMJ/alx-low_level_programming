#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two string character
 * @w1: the first character string to be compared
 * @w2: the second character string to be compared
 * Return: if str1 < str2, then a minus character
 * if str1 == str2, then gives 0.
 * if str1 > str2, then a plus character
 */

int _strcmp(char *w1, char *w2);
{
	while (*w1 && *w2 && *w1 == *w2)
	{
		w1++;
		w2++;
	}
	return (*w1 - *w2);
}
