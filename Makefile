NAME	= libftprintf.a

SRCS    = ft_printf.c ft_putchar.c ft_output.c ft_unsigned_putnbr.c\
ft_putstr.c ft_putnbr.c hexadecimal.c big_hexadecimal.c count_function ft_evolution_putnbr.c

FLAGS	= -Wall -Wextra -Werror

OBJS	= $(SRCS:%.c=%.o)

CC	= gcc

RM	= rm -rf

all     : $(NAME)

%.o	: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME)	: $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean	: 
	$(RM) $(OBJS) $(OBJS_B)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY: all clean fclean re
