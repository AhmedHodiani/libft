SRCS		= ft_strlen.c ft_strjoin.c ft_strtrim.c ft_split.c
OBJS		= $(SRCS:.c=.o)


CC		= gcc
CFLAGS		= -Wall -Wextra -Werror -I.
NAME		= libft.a


all:			$(NAME)

$(NAME):		$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:  fclean $(NAME)
