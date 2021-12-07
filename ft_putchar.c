#include <unistd.h>
#include "ft_printf.h"

ssize_t ft_putchar(char c)
{
        return (write(1, &c, 1));
}