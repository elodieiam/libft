#include "libft.h"

/*void    function(unsigned int i, char* c)
{
    printf("La valeur à l'indice %d est %c\n", i, *c);
}*/

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        (*f)(i, &s[i]);
        i++;
    }
}



/*int main()
{
    void (*f)(unsigned int, char*);
    f = function;
    ft_striteri("banane",f);
}*/