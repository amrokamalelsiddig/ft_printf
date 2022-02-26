/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 03:13:06 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/02/26 02:45:17 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int				s;
	int				i;
	unsigned int	result;

	s = 1;
	i = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = 10 * result + str[i] - '0';
		i++;
	}
	if (result > 2147483647 && s == 1)
		return (-1);
	if (result > 2147483648 && s == -1)
		return (0);
	return (result * s);
}


int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		count++;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
		count++;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		count++;
	}
	return (count);
}

int	ft_putstr(char *str)
{
	int		count;
	int		retrn;

	count = -1;
	retrn = 0;
	while (str[++count])
		retrn += ft_putchar(str[count]);
	return (retrn);
}


char	ft_hexa(int n, char c)
{
	char	*hex;
	int		temp;

	hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n > 15)
	{
		ft_hexa(n / 16, c);
	}
	ft_putchar(hex[n % 16]);
	return (0);
}
