/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:43:22 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/02/26 03:42:27 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	    ft_atoi(char *str);
int		ft_putnbr(int nb);
int		ft_putchar(char c);
int		ft_putstr(char *str);
char	ft_hexa(int n, char c);
int		ft_printf(char *str, ...);

#endif
