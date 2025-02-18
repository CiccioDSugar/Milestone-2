/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:00:28 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/01/21 12:59:08 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "libft.h"

static int	ft_checkchar(const char a, va_list arg)
{
	int	i;

	i = 0;
	if (a == '%')
		i = i + ft_putchar('%');
	else if (a == 'c')
		i = i + ft_putchar(va_arg(arg, int));
	else if (a == 's')
		i = i + ft_putstr(va_arg(arg, char *));
	else if (a == 'd' || a == 'i')
		i = i + ft_putnbr(va_arg(arg, int));
	else if (a == 'p')
		i = i + ft_putptr(va_arg(arg, void *));
	else if (a == 'u')
		i = i + ft_u_putnbr(va_arg(arg, unsigned int));
	else if (a == 'x' || a == 'X')
		i = i + ft_puthex(va_arg(arg, unsigned int), a);
	return (i);
}

int	ft_printf(const char *type, ...)
{
	va_list	arg;
	int		i;
	int		count;

	va_start(arg, type);
	count = 0;
	i = 0;
	while (type[i] != '\0')
	{
		if (type[i] == '%')
		{
			i++;
			count = count + ft_checkchar(type[i], arg);
		}
		else
		{
			count = count + write (1, &type[i], 1);
		}
		i++;
	}
	va_end(arg);
	return (count);
}
