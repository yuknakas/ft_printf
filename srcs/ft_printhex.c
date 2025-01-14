/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:42:39 by yuknakas          #+#    #+#             */
/*   Updated: 2024/11/25 14:31:49 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long long n, int upp_low)
{
	int	print_len;

	print_len = 0;
	if (16 <= n)
		print_len += ft_printhex((n / 16), upp_low);
	if ((n % 16) < 10)
		print_len += ft_putchar((n % 16) + '0');
	else
	{
		if (upp_low == 0)
			print_len += ft_putchar((n % 16) - 10 + 'a');
		else
			print_len += ft_putchar((n % 16) - 10 + 'A');
	}
	return (print_len);
}
