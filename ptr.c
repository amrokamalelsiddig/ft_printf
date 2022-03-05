/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:57:21 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/03/05 22:06:58 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_ptr(unsigned long ptr, int c)
{
	int		len;
	char	*hex;

	hex = "0123456789abcdef";
	len = 0;
	if (!c)
	{
		len += write(1, "0x", 2);
		c++;
	}
	if (ptr > 15)
		len += handle_ptr(ptr / 16, c);
	len += ft_putchar(hex[ptr % 16]);
	return (len);
}
