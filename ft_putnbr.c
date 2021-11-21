# include <limits.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <stdint.h>
 # include <stdarg.h>
 # include <unistd.h>

int ft_putchar(unsigned char c);

void     ft_putnbr(int n)
{
        long    str;

        str = (long)n;
        if (n < 0)
        {
                ft_putchar('-');
                str = str * -1;
        }
        if (str >= 10)
        {
                ft_putnbr(str / 10);
                str = str % 10;
        }
        if (str < 10)
        {
                ft_putchar('0' + str);
        }
}