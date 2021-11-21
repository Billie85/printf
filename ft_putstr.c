# include <limits.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <stdint.h>
 # include <stdarg.h>
 # include <unistd.h>
 
int    ft_putstr(char *s)
{
        int i;

        while (*s)
        {
                i++;
                write (1, s, 1);
                s++;
        }
        return (i);
}