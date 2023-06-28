#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @src: The source string
 * @dest: The destination string
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, j;

	while (dest[dlen])/* Assign a string*/
		dlen++;
/* @src: The source string*/
	for (j = 0; src[j] != 0; j++)
	{
		dest[dlen] = src[j];
		dlen++;
	}
/* Return: A pointer to the resulting string dest*/
	dest[dlen] = '\0';
	return (dest);
}
