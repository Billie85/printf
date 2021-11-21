#include "printf.h"

int ft_putchar(unsigned char c)
{
        return (write (1, &c, 1));
}