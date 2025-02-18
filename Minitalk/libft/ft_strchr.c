/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:08:08 by fzuccaro          #+#    #+#             */
/*   Updated: 2024/11/20 22:08:11 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	cc;

	cc = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == cc)
			return ((char *)(s + i));
		i++;
	}
	if (cc == '\0')
		return ((char *)(s + i));
	else
		return (NULL);
}

/*#include <stdio.h>
int	main()
{
	char *str = "ciaoMamma";
	int	o = 'M';
	printf("%s", ft_strchr(str, o));
}*/
