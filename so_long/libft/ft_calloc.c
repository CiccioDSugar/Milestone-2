/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:11:48 by fzuccaro          #+#    #+#             */
/*   Updated: 2024/11/20 17:11:49 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>

static void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	tot;
	char	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	tot = (nmemb * size);
	ptr = (void *)malloc(tot);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, tot);
	return (ptr);
}

/*int	main()
{
	
}*/
