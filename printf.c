/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwahl <fwahl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:48:02 by fwahl             #+#    #+#             */
/*   Updated: 2023/10/17 19:01:35 by fwahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int	check_format(const char format, va_list ap)
{
	if (format == 'c')
		return(ft_putchar(va_arg(ap, int)));
	else if (format == 's')
		return(ft_string(va_arg(ap, char *)));
	else if (format == 'p')
		return(0);
	else if (format == 'd' || format == 'i')
		return(ft_putnbr(va_arg(ap, int)));
	else if (format == 'u')
		return(0);
	else if (format == 'x' || format == 'X')
		return(0);
	else if (format == '%')
		return(0);
	
}

int	ft_printf(const char *string, ...)
{
	va_list ap;
	int	amount_args;

	va_start(ap, string);
	while (*string)
	{
		if (*string == '%')
			amount_args++;
		string++;
	}
	va_end(ap);
	return(amount_args);
}
