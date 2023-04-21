#include "libft.h"

char    *ft_strrchr (const char *str, int searched_char)
{
    int i;
    unsigned char   c;

    i = 0;
    c = searched_char;
    while (str[i])
        i++;
    while (i > 0)
    {
        if (str[i] == c)
            return ((char *)str + i);
        i--;
    }
    return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	const   char *s = "tripouille";
	int     c = 'i';
	printf("%s\n", strrchr(s, c));
	printf("%s\n", ft_strrchr(s,c));
}*/