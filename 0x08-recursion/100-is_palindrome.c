#include "main.h"

/**
 * check_is_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @i: start index
 * @j: end index
 *
 * Return: 1 if palindrome, 0 if not
*/

int	check_is_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (check_is_palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is, 0 if it's not
 */

int	is_palindrome(char *s)
{
	int	len;

	len = _strlen_recursion(s);
	return (check_is_palindrome(s, 0, len - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
*/

int	_strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
