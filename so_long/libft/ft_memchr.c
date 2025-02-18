/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:36:29 by fzuccaro          #+#    #+#             */
/*   Updated: 2024/11/21 19:36:30 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*mem = (const unsigned char*)s;
	unsigned char		byte;
	size_t				i;

	i = 0;
	byte = (unsigned char)c;
	while (i < n)
	{
		if (mem[i] == byte)
			return ((void *)&mem[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main()
{
	char *s = "ciao mamma guarda Come mi diverto";
	int	c = '\0';
	char	*match = ft_memchr(s, c, 20);
	
	if (match != NULL)
	printf("%s", match);
	else
	printf("%s", "no match");
}*/
