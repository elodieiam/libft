#include "libft.h"

void *ft_memset (void *pointer, int value, size_t size)
{
    unsigned char *p;

	p = pointer;
	while (size > 0)
	{
		*p = value;
		size--;
		p++;
	}
    return (pointer);
}


#include <stdio.h>

int main ()
{
	char str[] = "Bonjour Elodiiiie";
	ft_memset(str,32,4 *sizeof(char));
	printf("%s\n",str);
}

/*void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	s = b;
	i = 0;
	while (len > 0)
	{
		s[i] = c;
		len--;
		i++;
	}
	return (b);
}*/