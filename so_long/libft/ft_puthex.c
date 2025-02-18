/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:56:30 by fzuccaro          #+#    #+#             */
/*   Updated: 2024/12/15 17:02:33 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(unsigned int nb, const char c)
{
	int		count;
	int		mod;
	char	*upp;
	char	*low;

	count = 0;
	mod = 0;
	upp = "0123456789ABCDEF";
	low = "0123456789abcdef";
	if (nb > 15)
	{
		count += ft_puthex(nb / 16, c);
	}
	mod = nb % 16;
	if (c == 'X')
		count += write(1, &upp[mod], 1);
	if (c == 'x')
		count += write(1, &low[mod], 1);
	return (count);
}
