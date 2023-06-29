#include "main.h"

/**
 * _strncpy - Copies the variable of an input
 * @dest: The destination operands for the variable copy
 * @src: Hold a variable to be attached to dest
 * @n:the number of bytesto copy from src
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
