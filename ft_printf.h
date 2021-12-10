/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayumi <kayumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:26:50 by kayumi            #+#    #+#             */
/*   Updated: 2021/12/10 13:39:26 by kayumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define OX "0123456789abcdef"
# define NUM "0123456789"
# define O_X "0123456789ABCDEF"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_output(char **max);
ssize_t	ft_putstr(char *n);
ssize_t	ft_putchar(char c);
ssize_t	ft_evolution_putnbr(size_t n);
ssize_t	ft_putnbr(int n);
size_t	count_decimal(int number);
ssize_t	putnbr_base(unsigned long long n, char *base);
size_t	count_function(int number);
size_t	ft_strlen(char const *s);
int	another_function(char *max, va_list *ap);
#endif