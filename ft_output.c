#include <unistd.h>
#include "ft_printf.h"

int ft_output(char **max)
{
        char    **tmp;

        tmp = max;
        while (**max && **max != '%')
        (**max)++;
        return (write(1, tmp, max - tmp));
}