/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:13:32 by kmummadi          #+#    #+#             */
/*   Updated: 2024/11/17 16:57:42 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int		g_index = 0;

void	decode_bits(int bit);

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	ft_putnbr((int)pid);
	write(1, "\n", 1);
	while (1)
	{
		signal(SIGUSR2, decode_bits);
		signal(SIGUSR1, decode_bits);
		pause();
	}
}

void	decode_bits(int bit)
{
	static char	ascii = 0;

	if (bit == SIGUSR2)
		ascii = ascii | (1 << g_index);
	else if (bit == SIGUSR1)
		ascii = ascii | (0 << g_index);
	g_index++;
	if (g_index == 7)
	{
		write(1, &ascii, 1);
		g_index = 0;
		ascii = 0;
	}
	return ;
}
