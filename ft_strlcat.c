#include "libft.h"

unsigned int    ft_strlcat(char *dest, char *src, size_t size)
{
   size_t d;
   size_t s;
   size_t i;

   d = 0;
   s = 0;
   i = 0;
   while (dest[d])
        d++;
    while (src[s])
        s++;
    if (size <= d)
        return (s + size);
    while (src[i] && (d + i) < (size - 1))
    {
        dest[d + i] = src[i];
        i++;
    }
    dest[d + i] = '\0';
    return (s + d);
}


/*#include <stdio.h>
int main()
{
    char src[] = "Elodie";
    char dest[30] = "Sebastien";
    int a = ft_strlcat(dest, src,3);
    printf("%s et %d\n", dest, a);
}*/