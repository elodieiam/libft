#include "libft.h"

int ft_toupper (int c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return (c);
}


/*#include <stdio.h>

int main()
{
    char c = 'A';
    printf("%c -> %c\n", c, ft_toupper(c));

    c = 'd';
    printf("%c -> %c\n", c, ft_toupper(c));

    c = '9';
    printf("%c -> %c\n", c, ft_toupper(c));
}*/