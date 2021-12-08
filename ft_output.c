#include <unistd.h>
#include "ft_printf.h"

int ft_output(char **max)
{
        char    *tmp;
        tmp = *max;
        while (**max != '\0'  && **max != '%')
        {
                (*max)++;
        }
        return (write(1, tmp, *max - tmp));
}