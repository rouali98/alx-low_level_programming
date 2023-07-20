#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 *
 * Return: Always 0 (Success) or 1 (Error)
*/

int	main(int argc, char *argv[])
{
	int				bytes;
	int				i;
	unsigned char	*main_ptr;

	main_ptr = (unsigned char *)main;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	i = 0;
	while (i < bytes - 1)
		printf("%02x ", main_ptr[i++]);
	printf("%02x\n", main_ptr[i]);
	return (0);
}
