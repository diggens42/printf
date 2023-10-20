/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwahl <fwahl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:08:56 by fwahl             #+#    #+#             */
/*   Updated: 2023/10/20 16:58:44 by fwahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long	ft_put_bas(unsigned long num, int base, int upper)
{
	const char	*set;
	char		c;
	int			len;

	set = "0123456789abcdef";
	len = 0;
	if (num >= (unsigned long)base)
		len += ft_put_bas(num / base, base, upper);
	if (len == -1)
		return (-1);
	c = set[num % base];
	if (upper == 1)
		c = ft_toupper(c);
	len += write(STDOUT_FILENO, &c, 1);
	if (len == -1)
		return (-1);
	return (len);
}

int	ft_put_nbr(long num)
{
	int	len;

	len = 0;
	if (num < 0)
	{
		len += ft_put_chr('-');
		if (len == -1)
			return (-1);
		num = -num;
	}
	len += ft_put_bas(num, 10, 0);
	return (len);
}

int	ft_put_ptr(unsigned long num)
{
	int	len;
	int	ret;

	ret = ft_put_str("0x");
	if (ret == -1)
		return (-1);
	len = ft_put_bas(num, 16, 0) + 2;
	if (len == -1)
		return (-1);
	return (len);
}
