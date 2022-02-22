/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:43:47 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/02/23 02:51:38 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *str, ...)
{	
	int		count;
	char	temp;
	int		retrn;
	va_list	args;

	count = 0;
	retrn = 0;
	va_start(args, str);
	while (str[count])
	{
		if (str[count] == '%')
		{
			count++;
			if (str[count] == 's')
				retrn += ft_putstr(va_arg(args, char *));
			else if (str[count] == 'c')
				retrn += ft_putchar(va_arg(args, char));
			else if (str[count] == 'd' || str[count] == 'i' )
				retrn += ft_putnbr(va_arg(args, char));
			else if (str[count] == 'i')
				retrn += ft_putnbr(va_arg(args, char));
			else if (str[count] == '%')
				retrn += ft_putchar('%');
			else if (str[count] == 'u')
			{
				temp = ft_atoi(va_arg(args, char));
				retrn += ft_putstr(temp);
				//free(temp);
			}
		}
		count++;
	}
	va_end(args);
	return (retrn);
}

int	main(void)
{
	long int	x;

	x = 21474836;
	printf("%u\n", x);
	ft_printf("%u", x);
	return (0);
}
