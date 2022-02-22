/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:43:22 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/02/23 02:36:52 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_atoi(const char *str);
int		ft_putnbr(int nb);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_printf(char *str, ...);
char	ft_hexa(int n);
char	*ft_itoa(int nb);
int		digit_count(long n);


#endif
