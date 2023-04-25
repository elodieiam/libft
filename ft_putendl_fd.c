#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

/*int main()
{
    ft_putendl_fd("banane",1);
}*/