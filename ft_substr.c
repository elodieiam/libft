#include "libft.h"

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

/*#include <stdio.h>
int	main(void)
{
    printf("%s\n", ft_substr("magicsystem", 0, 42));
	return (0);
}*/