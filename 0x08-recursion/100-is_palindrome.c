#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int	is_palindrome(char *s)
{
	int	len;
	int	result;

	len = strlen(s);
	if (len <= 1)
		return (1);

	if (*s != s[len - 1])
		return (0);

	s[len - 1] = '\0';

	result = is_palindrome(s + 1);

	s[len - 1] = s[0];

	return (result);
}
