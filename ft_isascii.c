#include "libft.h"

int ft_isascii (int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

/*#include <stdio.h>
int main ()
{
    char a = 'A';
    char d = 128;
    printf("%d et %d\n", ft_isascii(a), ft_isascii(d));
}*/