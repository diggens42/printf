/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwahl <fwahl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:47:52 by fwahl             #+#    #+#             */
/*   Updated: 2023/10/19 02:55:53 by fwahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *string, ...);
int		ft_check_format(const char format, va_list *ap);
int		ft_put_chr(int c);
int		ft_put_str(char *str);
int		ft_put_nbr(unsigned long num, int base, int upper);
int		ft_put_ptr(unsigned long num);
int		ft_toupper(int c);

#endif