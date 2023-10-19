/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwahl <fwahl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:48:02 by fwahl             #+#    #+#             */
/*   Updated: 2023/10/19 02:58:09 by fwahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(char format, va_list *ap)
{
	if (format == '%')
		return (ft_put_chr('%'));
	else if (format == 'c')
		return (ft_put_chr(va_arg(*ap, int)));
	else if (format == 's')
		return (ft_put_str(va_arg(*ap, char *)));
	else if (format == 'p')
		return (ft_put_ptr(va_arg(*ap, unsigned long)));
	else if (format == 'd' || format == 'i')
		return (ft_put_nbr(va_arg(*ap, unsigned long), 10, 0));
	else if (format == 'u')
		return (ft_put_nbr(va_arg(*ap, unsigned long), 10, 0));
	else if (format == 'x')
		return (ft_put_nbr(va_arg(*ap, unsigned long), 16, 0));
	else if (format == 'X')
		return (ft_put_nbr(va_arg(*ap, unsigned long), 16, 1));
	else
		return (0);
}

int	ft_printf(const char *f, ...)
{
	va_list	ap;
	char	*format;
	int		len;

	format = (char *)f;
	len = 0;
	va_start(ap, f);
	while (*format != '\0' && *format != '%')
	{
		len += ft_put_chr(*format);
		format++;
	}
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format != '\0')
				len += ft_check_format(*format, &ap);
				format++;
		}
		else
		{
			len += ft_put_chr(*format);
			format++;
		}
	}
	va_end(ap);
	return(len);
}
