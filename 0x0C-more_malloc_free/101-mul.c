#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/* Created BY ROUALI */

/**
  * _isdigit - tells if the string consists of digits
  * @argv: pointer to current item in argument
  * Return: return 0 if all digits, 1 if not all digits.
*/

int	_isdigit(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
/* Created BY ROUALI */

/**
  * _atoi - converts a string of ascii digits to the values they represent
  * @s: pointer to the source string
  * Return: value of digits
*/

int	_atoi(char *s)
{
	int	i;
	int	result;

	result = 0;
	i = result;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
		}
		i++;
	}
	return (result);
}

/* Created BY ROUALI */

/**
  * main - main function call
  * @argc: argument count
  * @argv: 2D array of arguments
  * Return: return 0 on success, 98 on failure
*/

int	main(int argc, char *argv[])
{
	int	i;

	malloc();
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	i = 1;
	while (i < argc)
	{
		if (_isdigit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
		i++;
	}
	return (0);
}
