#include "libft.h"

char    *ft_strchr(const char *str, int searched_char)
{
    int i;
    unsigned char   c;

    i = 0;
    c = searched_char;
    while (str[i])
    {
        if (str[i] == c)
            return ((char *)str + i);
        i++;
    }
    return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	const	char *s = "dddddeeeEkkkk";
	int	c = 'E';
	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
}*/