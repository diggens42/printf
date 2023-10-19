/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chars.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwahl <fwahl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:07:24 by fwahl             #+#    #+#             */
/*   Updated: 2023/10/19 02:54:54 by fwahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_chr(int c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

int	ft_put_str(char *str)
{
	int	len;

	len = 0;
	if(!str)
	{
		ft_put_str("(null)");
		return (6);
	}
	while (str[len] != '\0')
	{
		write(STDOUT_FILENO, &str[len], 1);
		len++;
	}
	return (len);
}

int ft_put_ptr(unsigned long num)
{
	int len;
	
	ft_put_str("0x");
	len = ft_put_nbr(num, 16, 0) + 2;
	return (len);
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
