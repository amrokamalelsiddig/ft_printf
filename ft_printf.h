/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:43:22 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/03/05 21:53:45 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_putnbr(int n);
int		ft_putchar(char c);
int		ft_putstr(char *str);
char	ft_hexa(long int n, char c);
int		ft_printf(const char *str, ...);
int		search_flag(va_list arg, const char format);
int		ft_putnbr_u(unsigned int n);
int		handle_ptr(unsigned long ptr, int c);


#endif
