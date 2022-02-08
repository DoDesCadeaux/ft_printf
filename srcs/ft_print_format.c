/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:18:12 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/25 15:18:13 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_format(char format, va_list args)
{
	int	each_char;

	each_char = 0;
	if (format == 'c')
		each_char += ft_putchar(va_arg(args, int));
	if (format == 's')
		each_char += ft_putstr(va_arg(args, char *));
	if (format == 'i' || format == 'd')
		each_char += ft_print_nbr(va_arg(args, int));
	if (format == 'u')
		each_char += ft_print_unsigned(va_arg(args, unsigned int));
	if (format == 'x')
		each_char += ft_print_min_hexa(va_arg(args, int));
	if (format == 'X')
		each_char += ft_print_maj_hexa(va_arg(args, int));
	if (format == 'p')
	{
		each_char += ft_putstr("0x");
		each_char += ft_print_pointer(va_arg(args, unsigned long));
	}
	return (each_char);
}
