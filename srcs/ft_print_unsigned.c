/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:04:25 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/25 17:04:26 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_unsigned_len(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		i++;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_print_unsigned(unsigned int nbr)
{
	int	len;

	len = ft_unsigned_len(nbr);
	if (nbr >= 10)
	{
		ft_print_unsigned(nbr / 10);
		ft_print_unsigned(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
	return (len);
}
