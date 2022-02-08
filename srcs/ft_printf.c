/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:57:38 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/25 14:58:21 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_is_conversion(const char *str, va_list args)
{
	int	i;
	int	each_char;

	i = 0;
	each_char = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			if (str[i] == '%')
				each_char += ft_putchar('%');
			else if (ft_is_format(str[i]))
				each_char += ft_print_format(str[i], args);
		}
		else if (str[i] != '%')
			each_char += ft_putchar(str[i]);
		i++;
	}
	return (each_char);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		each_char;

	each_char = 0;
	va_start(args, str);
	each_char += ft_is_conversion(str, args);
	va_end(args);
	return (each_char);
}
