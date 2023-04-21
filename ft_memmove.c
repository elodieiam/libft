#include "libft.h"

void *ft_memmove (void *dest, const void *src, size_t num)
{
    unsigned char *dest_mve;
    const unsigned char *src_mve;
    int i;

    dest_mve = dest;
    src_mve = src;
    if (dest_mve > src_mve)
    {
        i = (int) num - 1;
        while (i >= 0)
        {
            dest_mve[i] = src_mve[i];
            i--;
        }
    }

    else
    {
        i = 0;
        while (i < (int)num)
        {
            dest_mve[i] = src_mve[i];
            i++;
        }
    }

    return (dest);
}

/*#include <stdio.h>
int main()
{
    char str1[] = "abcde";
    char str2[] = "abcde";

    ft_memmove((str1 + 2),str1,3 );
    ft_memmove((str2 + 2),str2,3 );
    printf("%s\n",str1);
    printf("%s\n",str2);
}*/