NAME = libft.a

SRC = ft_isalnum.c\
      ft_isalpha.c\
	  ft_isascii.c\
	  ft_isdigit.c\
	  ft_isprint.c\
	  ft_strlen.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  ft_atoi.c\
	  ft_bzero.c\
	  ft_calloc.c\
	  ft_itoa.c\
	  ft_memcmp.c\
	  ft_memcpy.c\
	  ft_memmove.c\
	  ft_memset.c\
	  ft_strchr.c\
	  ft_strdup.c\
	  ft_strjoin.c\
	  ft_strlcat.c\
	  ft_strlcpy.c\
	  ft_strncmp.c\
	  ft_strnstr.c\
	  ft_strrchr.c\
	  ft_substr.c\
	  ft_strtrim.c\

OBJ = $(SRC:.c=.o) 

CC = cc

CCFLAGS = -Wall -Wextra -Werror


all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CCFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re