/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_min_hexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:33:35 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/25 17:33:37 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_len_hexa(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	ft_numlen(unsigned long long n, int base)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	else
	{
		while (n && ++count)
			n /= base;
	}
	return (count);
}

static void	ft_reverse(char *str)
{
	int	i;

	i = ft_len_hexa(str);
	while (--i >= 0)
		ft_putchar(str[i]);
}

int	ft_print_min_hexa(unsigned int nbr)
{
	char	*hexa;
	int		each_char;
	char	*str;

	str = malloc(sizeof(char) * (ft_numlen(nbr, 16) + 1));
	if (!str)
		return (0);
	each_char = 0;
	hexa = "0123456789abcdef";
	while (nbr >= 16)
	{
		str[each_char] = hexa[nbr % 16];
		each_char++;
		nbr /= 16;
	}
	str[each_char] = hexa[nbr % 16];
	each_char++;
	str[each_char] = '\0';
	ft_reverse(str);
	free(str);
	return (each_char);
}
