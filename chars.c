/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chars.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwahl <fwahl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:07:24 by fwahl             #+#    #+#             */
/*   Updated: 2023/10/20 16:58:28 by fwahl            ###   ########.fr       */
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

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
