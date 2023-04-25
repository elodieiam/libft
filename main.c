#include "libft.h"
#include <stdio.h>

int main()
{
    char *s = ft_itoa(-2147483648);
    printf("%s\n", s);
}