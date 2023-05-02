/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <elrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:10:02 by elrichar          #+#    #+#             */
/*   Updated: 2023/05/02 14:10:02 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb_el, size_t size)
{
	unsigned char	*arr;

	if (nb_el == 0)
		return (NULL);
	arr = malloc(nb_el * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, nb_el * size);
	return (arr);
}

/*#include <stdio.h>
int	main(void)
{
	int	*tab;
	tab = ft_calloc(0, 4);
	printf("%p\n", tab);
	free(tab);
	return (0);
}*/