NAME	= libftprintf.a

SRCS    = ft_printf.c ft_output.c ft_putstr.c ft_putchar.c ft_evolution_putnbr.c ft_putnbr.c\
count_decimal.c ft_putnbr_base.c

OBJS	= $(SRCS:%.c=%.o)

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -rf

all     : $(NAME)

%.o	: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	: $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean	: 
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY: all clean fclean re