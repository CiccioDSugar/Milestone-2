/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:11:54 by fzuccaro          #+#    #+#             */
/*   Updated: 2024/11/21 20:11:55 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *nptr)
{
	int	i;
	int	negative;
	int	results;

	results = 0;
	i = 0;
	negative = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
	{
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			negative = -negative;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		results = (results * 10) + (nptr[i] - 48);
		i++;
	}
	return (results * negative);
}
/*#include <stdio.h>
int	main()
{
	int	x;
	
	x = ft_atoi("      -12 34ab567");
	printf("%d", x);
}*/
