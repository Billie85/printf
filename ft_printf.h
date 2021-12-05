#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <unistd.h>

int     ft_printf(const char *s, ...);
int ft_output(char *max);
ssize_t ft_putstr(char *n);
ssize_t ft_putchar(int c);
ssize_t ft_evolution_putnbr(size_t n);
ssize_t  ft_putnbr(int n);
size_t count_decimal (size_t number);
ssize_t	putnbr_base(unsigned long long n, char *base);

#endif