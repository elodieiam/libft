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