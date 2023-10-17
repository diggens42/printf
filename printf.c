/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwahl <fwahl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:48:02 by fwahl             #+#    #+#             */
/*   Updated: 2023/10/17 16:46:21 by fwahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_format(const char format, va_list ap)
{
	if (format == 'c')
		return(0);
	else if (format == 's')
		return(0);
	else if (format == 'p')
		return(0);
	else if (format == 'd' || format == 'i')
		return(0);
	else if (format == 'u')
		return(0);
	else if (format == 'x' || format == 'X')
		return(0);
	else if (format == '%')
		return(0);
	
}

int	ft_printf(const char *string)
{
	va_list ap;

	va_start(ap, string);
	while (*string)
	{
		
	}
	va_end(ap);
}
