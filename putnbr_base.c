#include "ft_printf.h"

ssize_t	ft_putnbr_base(unsigned long long n, char *base)
{
	ssize_t		len;
	unsigned long long		e;
	const unsigned long long	b = ft_strlen(base);

	if (b < 2)
		return (0);
	len = 0;
	e = 1;
	while (e <= n / b)
		e *= b;
	while (e > 0)
	{
		len += write(1, &base[n / e % b], 1);
		e /= b;
	}
	return (len);
}