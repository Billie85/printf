#include <limits.h>
#include "ft_printf.h"

int main (void)
{
    printf ("%d", INT_MAX +1);
    printf ("\n");
    ft_printf ("%d", INT_MAX +1);
    return (0);
}