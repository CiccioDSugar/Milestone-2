/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:57:20 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/02/17 11:56:35 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

static void	get_signal(int signal)
{
	static int	count;
	static char	c;

	if (signal == SIGUSR1)
		c <<= 1;
	else
	{
		c <<= 1;
		c |= 1;
	}
	count++;
	if (count == 8)
	{
		ft_printf("%c", c);
		count = 0;
		c = 0;
	}
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	ft_printf("PID DEL SERVER: %d", pid);
	while (1)
	{
		signal(SIGUSR1, get_signal);
		signal(SIGUSR2, get_signal);
	}
	return (0);
}
