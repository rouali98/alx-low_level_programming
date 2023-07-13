#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Created BY ROUALI */

/**
 * _strlen - The Function
 * @s:  The variable
 * Return: The Return value/void
*/

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int	len1;
	unsigned int	len2;
	char			*concat;
	unsigned int	i;
	unsigned int	j;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (!concat)
		return (NULL);
	i = 0;
	while (i < len1)
		concat[i++] = s1[i++];
	j = 0;
	while (j < n)
		concat[i++] = s2[j++];
	concat[i] = '\0';
	return (concat);
}
