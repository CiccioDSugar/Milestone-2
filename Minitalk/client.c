/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:57:08 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/02/17 11:55:51 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

static void	send_signal(int pid, char *str)
{
	char	c;
	int		num_bit;

	num_bit = 0;
	while (*str)
	{
		c = *str;
		while (num_bit < 8)
		{
			if ((c &(0b10000000 >> num_bit)) != 0)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			num_bit++;
			usleep(50);
		}
		str++;
		num_bit = 0;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3 && (ft_atoi(argv[1])) > 0)
		send_signal(ft_atoi(argv[1]), argv[2]);
	else
	{
		ft_printf("Error\n");
		exit(1);
	}
	return (0);
}
