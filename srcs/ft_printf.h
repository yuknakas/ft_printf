/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:28:24 by yuknakas          #+#    #+#             */
/*   Updated: 2024/11/25 14:33:12 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int	ft_format(const char conversion, va_list args);
int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_putadr(void *address);
int	ft_printhex(unsigned long long n, int upp_low);
int	ft_putnbr(long nb);

#endif