/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:36:41 by fzuccaro          #+#    #+#             */
/*   Updated: 2024/11/24 17:36:43 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	tft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s2;
	size_t	startt;

	startt = tft_strlen(s);
	i = 0;
	if (start >= tft_strlen(s))
		return (ft_strdup(""));
	if (len > startt - start)
		len = (startt - start);
	s2 = (char *)malloc(len + 1);
	if (s2 == NULL)
		return (NULL);
	if (s == 0)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
