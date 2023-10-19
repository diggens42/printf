/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwahl <fwahl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:08:56 by fwahl             #+#    #+#             */
/*   Updated: 2023/10/19 01:27:45 by fwahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_nbr(unsigned long num, int base, int upper) 
{
	const char set[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	int len;

	len = 0;
	if (num > (unsigned long)base)
		len += ft_put_nbr(num / base, base, upper);	
	char c = set[num % base];
	if (upper == 1)
		c = ft_toupper(c);
	len += write(STDOUT_FILENO, &c, 1);
	return len;
}
