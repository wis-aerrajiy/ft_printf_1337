/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:55:43 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/31 14:49:49 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int		i;
	char	*n;

	n = "(null)";
	i = 0;
	if (!str)
		return (ft_putstr(n));
	while (str[i])
		write(1, &str[i++], 1);
	return (ft_strlen(str));
}
