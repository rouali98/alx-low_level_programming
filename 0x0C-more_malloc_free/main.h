#ifndef MAIN_H
# define MAIN_H

struct s_multip
{
	int	len1;
	int	len2;
	int	len;
	int	i;
	int	carry;
	int	digit1;
	int	digit2;
	int	*result;
	int	a;

} mul;

void	_putchar(char c);

void	*malloc_checked(unsigned int b);

char	*string_nconcat(char *s1, char *s2, unsigned int n);

void	*_calloc(unsigned int nmemb, unsigned int size);

int		*array_range(int min, int max);

void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
