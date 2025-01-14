/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:32:16 by yuknakas          #+#    #+#             */
/*   Updated: 2024/11/25 13:43:36 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	int		dig_len;
	char	nbr;

	dig_len = 0;
	if (nb < 0)
	{
		dig_len += write(1, "-", 1);
		nb *= -1;
	}
	if (10 <= nb)
		dig_len += ft_putnbr(nb / 10);
	nbr = (nb % 10) + '0';
	dig_len += write(1, &nbr, 1);
	return (dig_len);
}
