/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <elrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:43:42 by elrichar          #+#    #+#             */
/*   Updated: 2023/05/03 14:43:42 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	nb_strings(char const *str, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			nb++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (nb);
}

int	ft_strlen_word(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	*ft_word(char const *str, char c)
{
	int		len;
	int		i;
	char	*word;

	len = ft_strlen_word(str, c);
	i = 0;
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;

	i = 0;
	strings = malloc(sizeof(char *) * (nb_strings(s, c) + 1));
	if (strings == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			strings[i] = ft_word(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	strings[i] = NULL;
	return (strings);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	int		i;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], ' ');
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}*/