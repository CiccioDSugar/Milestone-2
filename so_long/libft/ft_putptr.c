/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:41:02 by fzuccaro          #+#    #+#             */
/*   Updated: 2024/12/15 17:05:23 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_print(unsigned long long pt)
{
	int		count;
	int		mod;
	char	*hex;

	count = 0;
	mod = 0;
	hex = "0123456789abcdef";
	if (pt > 15)
	{
		count += ft_print(pt / 16);
	}
	mod = pt % 16;
	count += write(1, &hex[mod], 1);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int					count;
	unsigned long long	pt;

	count = 0;
	pt = (unsigned long long)ptr;
	if (!pt)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	write (1, "0x", 2);
	count = 2;
	count = count + ft_print(pt);
	return (count);
}

/* #include <stdio.h>
int	main()
{
	char	st[] = "qualcosa";
	void	*st2 = st;
	int	i = ft_putptr(st2);
	ft_putptr(st2);
	printf("\n%i", i);
} */
