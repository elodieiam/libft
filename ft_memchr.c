/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <elrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:45:18 by elrichar          #+#    #+#             */
/*   Updated: 2023/05/03 15:30:51 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	const unsigned char	*p;
	unsigned char		c;

	p = memoryBlock;
	c = searchedChar;
	while (size > 0)
	{
		if (*p == c)
			return ((void *)p);
		p++;
		size--;
	}
	return (NULL);
}
