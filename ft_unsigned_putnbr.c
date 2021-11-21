# include <limits.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <stdint.h>
 # include <stdarg.h>
 # include <unistd.h>
 
int ft_putchar(unsigned char c);
 void ft_unsigned_putnbr(unsigned int n)
{
        long str;

        str = n;
        if (str >= 10)
        {
                ft_unsigned_putnbr(str / 10);
                str = str % 10;
        }
        if (str < 10)
        {
                ft_putchar('0' + str);
        }
}