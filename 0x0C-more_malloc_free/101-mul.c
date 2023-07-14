#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/* Created BY ROUALI */

/**
 * main - multiply 2 numbers as arguments
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 success
*/

void	multiply(const char *num1, const char *num2)
{
	int		mul;
	int		pos1;
	int		pos2;
	int		sum;
	int		len1;
	int		len2;
	int		i;
	int		j;
	int		*result;
	char	digit;

	len1 = 0;
	len2 = 0;
	while (!num1[len1])
		len1++;
	while (!num2[len2])
		len2++;
	result = _calloc(len1 + len2, sizeof(int));
	i = len1 - 1;
	while (i >= 0)
	{
		j = len2 - 1;
		while (j >= 0)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			pos1 = i + j;
			pos2 = i + j + 1;
			sum = mul + result[pos2];
			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
			j--;
		}
		i--;
	}
	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;
	while (i < len1 + len2)
	{
		digit = result[i] + '0';
		write(1, &digit, 1);
		i++;
	}
	write(1, "\n", 1);
	free(result);
}
