/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:43:04 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/25 15:43:05 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_nbr_len(int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_print_nbr(int nbr)
{
	int				len;
	unsigned int	positive;

	len = ft_nbr_len(nbr);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	positive = (unsigned int)nbr;
	if (positive >= 10)
	{
		ft_print_nbr(positive / 10);
		ft_print_nbr(positive % 10);
	}
	else
		ft_putchar(positive + 48);
	return (len);
}
