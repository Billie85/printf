NAME	= libftprintf.a

SRCS    = ft_printf ft_output ft_putstr ft_putchar ft_evolution_putnbr ft_putnbr\
count_decimal ft_putnbr_base\

FLAGS	= -Wall -Wextra -Werror

OBJS	= $(SRCS:%.c=%.o)

CC	= gcc

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