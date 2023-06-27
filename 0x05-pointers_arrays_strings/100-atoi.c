#include "main.h"

/**
 *_atoi - converts a string to an int
 *@s: the string to convert
 *Return: returns an int
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int res = 0;
	int sign = 1;

	while (s[i] && (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
