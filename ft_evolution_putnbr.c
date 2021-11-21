# include <limits.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <stdint.h>
 # include <stdarg.h>
 # include <unistd.h>

int ft_putchar(unsigned char c);
 void  ft_evolution_putnbr(void *n)
{
        size_t    str;

        str = (size_t)n;
        if (str >= 16)
        {
                ft_evolution_putnbr((void *)(str / 16));
                str = str % 16;
        }
        if (0 <= str && str <= 9)
                ft_putchar(str + '0');
        if (10 <= str && str <= 15)
        {
                str = str - 10 + 'a';
                ft_putchar(str);
        }
}
