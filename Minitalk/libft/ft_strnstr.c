/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_+strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:56:24 by fzuccaro          #+#    #+#             */
/*   Updated: 2024/11/20 15:56:25 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	k;

	j = 0;
	if (little[0] == '\0')
		return ((char *)(big));
	while (j < len && big[j] != '\0')
	{
		k = 0;
		while (big[j + k] == little[k] && little[k] != '\0'
			&& (j + k) < len)
			k++;
		if (little[k] == '\0')
			return ((char *)(&big[j]));
		j++;
	}
	return (NULL);
}

/*int	main()
{
	char b[] = "fsvhsadkjnasdiuvgciaosdvdf";
	char l[] = "ciaooo";
	printf ("%s", ft_strnstr(b, l, 3));
}*/
