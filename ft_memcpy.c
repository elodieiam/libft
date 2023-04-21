#include "libft.h"

void *ft_memcpy (void *dest, const void *src, size_t num)
{
    unsigned char *dest_cpy;
    const unsigned char *src_cpy;

    dest_cpy = dest;
    src_cpy = src;
    while (num > 0)
    {
        *dest_cpy = *src_cpy;
        dest_cpy++;
        src_cpy++;
        num--;
    }
    return (dest);
}

/*#include <stdio.h>
int main()
{
    char str1[] = "Elodie";
    char str2[] = "Seba";
    ft_memcpy(str1,str2,4);
    printf("%s\n", str1);
}*/