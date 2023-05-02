/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <elrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:29:38 by elrichar          #+#    #+#             */
/*   Updated: 2023/05/02 14:29:38 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>

int	len(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;

	nb = n;
	i = len(n);
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (0);
	str[i--] = '\0';
	if (nb == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (nb < 0)
    {
        str[0] = '-';
        nb *= -1;
    }
    while (nb > 0)
    {
        str[i] = 48 + (nb % 10);
        nb /= 10;
        i--;
    }
    return (str);
}

/*#include <stdio.h>
int main()
{
    char *s = ft_itoa(-2147483648);
    printf("%s\n", s);
}*/