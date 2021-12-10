/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayumi <kayumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:44:19 by kayumi            #+#    #+#             */
/*   Updated: 2021/12/10 16:11:58 by kayumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	another_function(char *max, va_list *ap)
{
	ssize_t	len;

	len = 0;
	if (*max == 'p')
	{
		len += ft_putstr("0x");
		len += putnbr_base(va_arg(*ap, unsigned long long), OX);
	}
	if (*max == 'u')
	len += putnbr_base(va_arg(*ap, unsigned int), NUM);
	else if (*max == 'x')
	len += putnbr_base(va_arg(*ap, unsigned int), OX);
	else if (*max == 'X')
	len += putnbr_base(va_arg(*ap, unsigned int), O_X);
	else if (*max == 'd' || *max == 'i')
	len += ft_putnbr(va_arg(*ap, int));
	else if (*max == 's')
	len += ft_putstr(va_arg(*ap, char *));
	else if (*max == '%')
	len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *s, ...)
{
	char	*max;
	ssize_t	len;
	va_list	ap;

	max = (char *)s;
	va_start(ap, s);
	len = 0;
	if (len >= INT_MAX)
		return (-1);
	while (*max != '\0')
	{
		if (*max != '%')
			len += ft_output(&max);
		else if (*max == '%')
		{
			max++;
			if (*max == 'c')
				len += ft_putchar((unsigned char)va_arg(ap, int));
			else
				len += another_function(max, &ap);
			++max;
		}
	}
	va_end(ap);
	return (len);
}
