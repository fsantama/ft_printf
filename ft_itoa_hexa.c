/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:14:03 by fsantama          #+#    #+#             */
/*   Updated: 2023/01/19 14:15:59 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_intlen(unsigned long n)
{
	size_t	counter;

	counter = 0;
	if (n == 0)
	{
		counter++;
		return (counter);
	}
	while (n > 0)
	{
		n = n / 16;
		counter++;
	}
	return (counter);
}

char	*ft_itoa_hexa(unsigned long n, char *hexa)
{
	char	*str;
	size_t	len;

	len = ft_intlen(n);
	str = (char *) malloc (sizeof (char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = 0;
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[len] = hexa[n % 16];
		n = n / 16;
		len--;
	}
	return (str);
}
