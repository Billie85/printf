#include <unistd.h>
#include "ft_printf.h"

ssize_t ft_putstr(char *n)
{
        int i;

        i = 0;
        if (n == NULL)
        {
                return (write(1, "(null)", 6));
        }
        while (*n != '\0')
        {
                i++;
                write(1, n, 1);
                n++;
        }
        return (i);
}