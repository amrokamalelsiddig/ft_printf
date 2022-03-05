/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:43:47 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/03/05 22:13:26 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	search_flag(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_putchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_putstr(va_arg(args, char *));
	else if (format == 'i' || format == 'd')
		print_length += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_putnbr_u(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += ft_hexa(va_arg(args, unsigned int), format);
	else if (format == 'p')
		print_length += handle_ptr(va_arg(args, unsigned long), 0);
	else if (format == '%')
		print_length += write(1, "%", 1);
	return (print_length);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		count;
	va_list	arg;

	len = 0;
	count = 0;
	va_start(arg, format);
	while (format[count])
	{
		if (format[count] == '%')
		{
			len += search_flag(arg, format[count + 1 ]);
			count++;
		}
		else
			len += ft_putchar(format[count]);
		count++;
	}
	va_end(arg);
	return (len);
}
