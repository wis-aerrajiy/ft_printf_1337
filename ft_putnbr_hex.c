/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:01:45 by hamaarou          #+#    #+#             */
/*   Updated: 2022/11/01 14:25:06 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_putnbr_hex(unsigned long nbr, char bs)
{
	if (nbr >= 16)
	{
		ft_putnbr_hex((nbr / 16), bs);
		ft_putnbr_hex((nbr % 16), bs);
	}
	else
	{
		if (nbr < 10)
			ft_putnbr(nbr);
		else
			ft_putchar(nbr - 10 + 'a' + bs - 'x');
	}
	return (count_nbr(nbr, 16));
}
int	main(void)
{
	int	k;

	k = ft_putnbr(166456456);
	printf("%d", k);
}
