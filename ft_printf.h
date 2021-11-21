# ifndef PRINTF_H
# define PRINTF_H

 # include <limits.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <stdint.h>
 # include <stdarg.h>
 # include <unistd.h>

 int ft_putchar(unsigned char c);
 int ft_output(char **max);
 void ft_unsigned_putnbr(unsigned int n);
 void     ft_putnbr(int n);
  int    ft_putstr(char *s);
 void hexadecimal(unsigned int c);
 void big_hexadecimal(unsigned int c);
int     ft_printf(const char *s, ...);
void  ft_evolution_putnbr(void *n);

#endif