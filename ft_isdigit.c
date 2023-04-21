#include "libft.h"

int ft_isdigit (int c)
{
    if (c > 47 && c < 58)
        return (1);
    return (0);
}

/*
#include <stdio.h>

int main()
{
    char c = '8';
    char d = 'A';
    char e = '0';

    printf("%d, %d et %d\n", ft_isdigit(c), ft_isdigit(d), ft_isdigit(e));
}
*/