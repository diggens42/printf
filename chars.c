/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chars.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwahl <fwahl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:07:24 by fwahl             #+#    #+#             */
/*   Updated: 2023/10/20 02:32:54 by fwahl            ###   ########.fr       */
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
	int	ret;

	len = 0;
	if (!str)
	{
		ret = ft_put_str("(null)");
		if (ret == -1)
			return (-1);
		return (6);
	}
	while (str[len] != '\0')
	{
		ret = write(STDOUT_FILENO, &str[len], 1);
		if (ret == -1)
			return (-1);
		len++;
	}
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

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
