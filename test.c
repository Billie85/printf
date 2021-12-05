#include <limits.h>
#include "ft_printf.h"

int main (void)
{
    printf ("%d", INT_MIN -1);
    printf ("\n");
    ft_printf ("%d", INT_MIN -1);
    printf ("\n");
    printf ("%d", INT_MIN);
    printf ("\n");
    ft_printf ("%d", INT_MIN);
    return (0);
}