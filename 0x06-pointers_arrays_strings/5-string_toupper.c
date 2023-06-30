#include "main.h"
#include <stdio.h>

/**
 * string_toupper - takes lowercase characters to uppercase
 * @str: The string character
 * Return: A pointer to display changed string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
		index++;
	}
	return (str);
}
