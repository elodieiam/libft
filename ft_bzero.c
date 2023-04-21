#include "libft.h"

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