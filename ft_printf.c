/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:43:47 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/03/05 21:52:46 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_printf(char *str, ...)
// {	
// 	int			count;
// 	char		temp;
// 	int			retrn;
// 	va_list		args;

// 	count = 0;
// 	retrn = 0;
// 	va_start(args, str);
// 	while (str[count])
// 	{
// 		if (str[count] == '%')
// 		{
// 			count++;
// 			if (str[count] == 's')
// 				retrn += ft_putstr(va_arg(args, char *));
// 			else if (str[count] == 'c')
// 				retrn += ft_putchar(va_arg(args, int));
// 			else if (str[count] == 'd')
// 				retrn += ft_putnbr(va_arg(args, int));
// 			else if (str[count] == 'i')
// 				retrn += ft_putnbr(va_arg(args, int));
// 			else if (str[count] == '%')
// 				retrn += ft_putchar('%');
// 			else if (str[count] == 'u')
// 			{
// 				temp = ft_atoi(va_arg(args, char *));
// 				retrn += ft_putnbr(temp);
// 			}
// 			else if (str[count] == 'x' || str[count] == 'X' )
// 				retrn += ft_hexa(va_arg(args, int), str[count]);
// 		}
// 		count++;
// 	}
// 	va_end(args);
// 	return (retrn);
// }

// int	search_flag(va_list arg, const char format)
// {
// 	int		len;

// 	len = 0;
// 	if (format == 'c')
// 		len += ft_putchar(va_arg(arg, int));
// 	if (format == 's')
// 		len += ft_putstr(va_arg(arg, char *));
// 	else if (format == '%')
// 		len += write(1, "%", 1);
// 	return (len);
// }

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
/*
int	main()
{
	char	*s = "asd";
	
	printf("%d", printf("%p", s));
	printf("\n");
	ft_printf("%d", ft_printf("%p", s));
	printf("\n");
}*/