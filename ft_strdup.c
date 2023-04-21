#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char    *ft_strdup (char *src)
{
    int src_len;
    char    *p;
    int i;

    i = 0;
    while (src[i])
        i++;
    src_len = i;
    p = malloc((src_len + 1) * sizeof(char));
    if (p == NULL)
        return (NULL);
    i  = 0;
    while (i < src_len)
    {
        p[i] = src[i];
        i++;
    }    
    p[i] = '\0';
    return (p);
}

/*#include <stdio.h>

int main()
{
	char text1[] = "Elodie";
	printf("%s\n", ft_strdup(text1));
}*/