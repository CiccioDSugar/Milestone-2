/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:50:17 by lemarino          #+#    #+#             */
/*   Updated: 2024/11/25 18:09:56 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static char	*tft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			tot;
	char			*new;

	tot = ((ft_strlen(s1)) + (ft_strlen(s2)));
	new = (char *)malloc((tot + 1) * sizeof(char));
	if (!new)
		return (NULL);
	new[0] = '\0';
	tft_strcat(new, s1);
	tft_strcat(new, s2);
	return (new);
}

/*#include <stdio.h>
int	main()
{
	char	*the = "Raiders on";
	char	*doors = " the storm";

	printf("%s\n", ft_strjoin(the, doors));
}*/
