/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:40:45 by fzuccaro          #+#    #+#             */
/*   Updated: 2024/11/20 22:40:46 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

static	int	fl_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = fl_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main()
{
	const char *p = "ciaoMamma";
	int	c = 'M';
	printf("%s", ft_strrchr(p, c));
}*/
