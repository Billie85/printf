# include <limits.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <stdint.h>
 # include <stdarg.h>
 # include <unistd.h>

 int ft_output(char **max)
{
        char *tmp;

        tmp = *max;
        while (**max && **max != '%')
                (*max)++;
              
        return (write(1, tmp, *max - tmp));
}