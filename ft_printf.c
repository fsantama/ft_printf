/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:39:57 by fsantama          #+#    #+#             */
/*   Updated: 2023/01/19 14:43:51 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check_args(char v, va_list args, int *counter)
{
	char	*aux;

	if (v == 'c')
		ft_putchar_counter(va_arg(args, int), counter);
	if (v == 's')
		ft_putstr(va_arg(args, char *), counter);
	if (v == 'p')
	{
		aux = ft_itoa_hexa(va_arg(args, unsigned long), "0123456789abcdef");
		ft_putstr("0x", counter);
	}
	if (v == 'd' || v == 'i')
		aux = ft_itoa(va_arg(args, int));
	if (v == 'u')
		aux = ft_itoa_unsigned(va_arg(args, unsigned int));
	if (v == 'x')
		aux = ft_itoa_hexa(va_arg(args, unsigned int), "0123456789abcdef");
	if (v == 'X')
		aux = ft_itoa_hexa(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (v == 'p' || v == 'd' || v == 'i' || v == 'u' || v == 'x' || v == 'X')
	{
		ft_putstr(aux, counter);
		free(aux);
	}
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		counter;

	va_start (args, str);
	counter = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				ft_putchar_counter(*str, &counter);
			else
				ft_check_args(*str, args, &counter);
		}
		else
			ft_putchar_counter(*str, &counter);
		str++;
	}
	va_end(args);
	return (counter);
}
