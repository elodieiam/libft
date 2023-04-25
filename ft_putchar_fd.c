#include "libft.h"

void    ft_putchar(char c, int fd)
{
    write (fd, &c, 1);
}

/*int main()
{
    ft_putchar('7',1);
}*/