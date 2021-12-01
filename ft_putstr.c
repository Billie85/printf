#include <unistd.h>
#include "ft_printf.h"

int    ft_putstr(char *n)
{
        int i;

        if (n == NULL)
        {
                write(1, "(null)", 6);
        }
        while (*n)
        {
                i++;
                write (1, n, 1);
                n++;
        }
        return (i);
}