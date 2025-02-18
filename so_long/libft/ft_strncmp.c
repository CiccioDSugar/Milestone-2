/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:44:28 by fzuccaro          #+#    #+#             */
/*   Updated: 2024/11/18 16:44:30 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		i++;
	}
	if (i < n)
		return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
	return (0);
}
/*#include <stdio.h>
int	main()
{
	char *str1= "ciaomamma come stai";
	char *str2= "ciao";
	printf("%d", ft_strncmp(str1, str2, 60));
}*/
