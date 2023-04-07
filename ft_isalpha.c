int ft_isalpha(int c)
{
    if ((c > 64 && c < 91) || (c > 96 && c < 123))
        return (1);
    return (0);
}

/*
#include <stdio.h>
int main()
{
    char c = 'A';
    char d = '4';
    char x = '\n';
    int a = 66;

    printf("%d, %d, %d et %d\n", ft_isalpha(c), ft_isalpha(d), ft_isalpha(x), ft_isalpha(a));
}
*/