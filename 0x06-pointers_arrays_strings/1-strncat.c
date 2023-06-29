#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings using inputted number
 * @dest: The string to be attached
 * @src: The string to be attached to dest
 * @n: The number of bytes from src to be attached to desk
 * Return: A pointer to the resulting string dest
 */

/* _strncat - joins two strings together e.g snow & ball for snowball*/
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
