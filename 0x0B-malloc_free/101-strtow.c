#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words in.
 *
 * Return: The number of words.
 */

int	count_words(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

/**
 * allocate_words - Allocates memory for the words in the given string.
 * @str: The input string.
 * @words: The array to store the allocated words.
 *
 * Return: 1 on success, 0 on failure.
 */
int	allocate_words(char *str, char **words)
{
	int	i;
	int	j;
	int	k;
	int	len;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			len = 0;
			k = i;
			while (str[k] != ' ' && str[k] != '\0')
			{
				len++;
				k++;
			}
			words[j] = malloc(sizeof(char) * (len + 1));
			if (words[j] == NULL)
				return (0);
			k = 0;
			while (k < len)
				words[j][k++] = str[i++];
			words[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (1);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char	**strtow(char *str)
{
	int		i;
	char	**words;
	int		word_count;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	if (!allocate_words(str, words))
	{
		i = 0;
		while (i < word_count)
			free(words[i++]);
		free(words);
		return (NULL);
	}
	return (words);
}
