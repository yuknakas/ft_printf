/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:31:33 by yuknakas          #+#    #+#             */
/*   Updated: 2024/11/25 14:32:47 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char conversion, va_list args)
{
	if (conversion == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (conversion == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (conversion == 'p')
		return (ft_putadr(va_arg(args, void *)));
	else if (conversion == 'd' || conversion == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (conversion == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (conversion == 'x')
		return (ft_printhex(va_arg(args, unsigned int), 0));
	else if (conversion == 'X')
		return (ft_printhex(va_arg(args, unsigned int), 1));
	else if (conversion == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		print_length;
	int		i;
	va_list	args;

	if (str == NULL)
		return (0);
	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			print_length += ft_format(str[i + 1], args);
			i++;
		}
		else
			print_length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
