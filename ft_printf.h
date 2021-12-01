#ifndef FT_PRINTF_H
# define FT_PRINTF_H //インクルードガード

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <unistd.h>

int     ft_printf(const char *s, ...);
int     count_function (size_t number);
int     count_decimal (size_t number);
size_t  big_hexadecimal(unsigned long long c);
size_t  hexadecimal(unsigned long long c);
int     ft_putchar(int c);
size_t  ft_evolution_putnbr(size_t n);
int     ft_putnbr(int n);
int     ft_putstr(char *n);  
size_t  ft_unsigned_putnbr(unsigned int n);
int     ft_output(char **max);

#endif