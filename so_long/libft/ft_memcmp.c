/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:41:59 by fzuccaro          #+#    #+#             */
/*   Updated: 2024/11/20 15:42:00 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return ((ss1[i] - ss2[i]));
		i++;
	}
	return (0);
}
