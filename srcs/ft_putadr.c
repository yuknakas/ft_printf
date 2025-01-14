/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:41:23 by yuknakas          #+#    #+#             */
/*   Updated: 2024/11/25 14:32:24 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadr(void *address)
{
	unsigned long long	adr;
	int					print_len;

	if (address == NULL)
		return (write(1, "(nil)", 5));
	adr = (unsigned long long)address;
	print_len = 0;
	print_len += write(1, "0x", 2);
	print_len += ft_printhex(adr, 0);
	return (print_len);
}
