#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
    size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void    ft_bzero(void *s, size_t size)
{
   unsigned char *p;

	p = s;
	while (size > 0)
	{
		*p = '\0';
		size--;
		p++;
	} 
}

void    *ft_calloc(size_t nb_el, size_t size)
{
    unsigned char    *arr; //ou char *? 

    if (nb_el == 0)
        return (NULL);
    arr = malloc(nb_el * size);
    if (!arr)
        return (NULL);
    ft_bzero(arr,nb_el * size);
        return (arr);
}
size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t    i;
    unsigned int    l;

    i = 0;
    l = 0;
    while (src[l])
        l++;
    if (size != 0)
    {
        while (src[i] && i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (l);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start + len > ft_strlen(s))
		len = len - start;
	if (start > ft_strlen(s))
		len = 0;
	tab = ft_calloc(len + 1, sizeof(char));
	if (tab == NULL)
		return (NULL);
	ft_strlcpy(tab, s + start, len + 1);
	return (tab);
}
static int	ft_is_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_start_index(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s1[i] && ft_is_set(set, s1[i]))
	{
		i++;
		count++;
	}
	return (count);
}

static int	ft_end_index(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = ft_strlen(s1) - 1;
	count = 0;
	while (s1[i] && ft_is_set(set, s1[i]))
	{
		i--;
		count++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	size_t	size_start;
	size_t	size_end;

	size_start = 0;
	size_end = 0;
	if (ft_start_index(s1, set))
		size_start = ft_start_index(s1, set);
	if (ft_end_index(s1, set))
		size_end = ft_end_index(s1, set);
	tab = ft_substr(s1, size_start, ft_strlen(s1) - (size_start + size_end));
	return (tab);
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strtrim("aaaaabacaaaaa", "a"));
	return (0);
}