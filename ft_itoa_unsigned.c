/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:14:03 by fsantama          #+#    #+#             */
/*   Updated: 2023/01/19 13:25:03 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_intlen(long n)
{
	size_t	counter;

	counter = 0;
	if (n == 0)
	{
		counter++;
		return (counter);
	}
	if (n < 0)
	{
		n = n * -1;
		counter++;
	}
	while (n > 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char	*str;
	size_t	len;
	long	n1;

	n1 = n;
	len = ft_intlen(n1);
	str = (char *) malloc (sizeof (char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = 0;
	if (n == 0)
		str[0] = '0';
	if (n1 < 0)
	{
		str[0] = '-';
		n1 = n1 * -1;
	}
	while (n1 > 0)
	{
		str[len] = (n1 % 10) + '0';
		n1 = n1 / 10;
		len--;
	}
	return (str);
}
