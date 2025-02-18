/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:54:15 by fzuccaro          #+#    #+#             */
/*   Updated: 2024/11/27 19:54:18 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>

static size_t	count_digits(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*ft_converter(char *str, int n, size_t len)
{
	unsigned int		num;

	num = n;
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (num > 0)
	{
		str[--len] = (num % 10) + 48;
		num /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*str;

	len = count_digits(n);
	str = (char *)malloc(len +1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	str = ft_converter(str, n, len);
	return (str);
}

/*int	main()
{
	int	nb;
	char	*st;
	
	nb = -3423534;
	st = ft_itoa(nb);
	printf ("%s", st);
}*/
