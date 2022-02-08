/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:50:52 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/25 14:57:23 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

int	ft_printf(const char *input, ...);
int	ft_is_format(char c);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_print_nbr(int nbr);
int	ft_print_unsigned(unsigned int nbr);
int	ft_print_min_hexa(unsigned int nbr);
int	ft_print_maj_hexa(unsigned int nbr);
int	ft_print_pointer(unsigned long nbr);
int	ft_print_format(char format, va_list args);

#endif
