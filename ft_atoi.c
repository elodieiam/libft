#include "libft.h"

int ft_atoi (const char* str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9' )
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }

    return (result * sign);
}

/*#include <stdio.h>

int main()
{
    char str[] = "+-442";
    char str2[] = "7894eeeee";
    char str3[] = "      +eee444";
    char str4[] = "";
    char str5[] = "        -451";
    printf("%d, %d, %d, %d et %d\n", ft_atoi(str),ft_atoi(str2),ft_atoi(str3),ft_atoi(str4),ft_atoi(str5));


}*/