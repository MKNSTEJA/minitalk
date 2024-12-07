/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:37:49 by kmummadi          #+#    #+#             */
/*   Updated: 2024/11/17 16:45:42 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	transfer_message(pid_t pid, char *msg);

int	main(int argc, char **argv)
{
	pid_t	pid;
	char	*msg;

	pid = 0;
	msg = NULL;
	if (argc != 3)
	{
		return (-1);
	}
	else
	{
		msg = argv[2];
		pid = ft_atoi(argv[1]);
		transfer_message(pid, msg);
	}
	return (0);
}

void	transfer_message(pid_t pid, char *msg)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (msg[i])
	{
        j = 0;
		while (j < 7)
		{
			if ((msg[i] >> j) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			j++;
            usleep(300);
		}
		i++;
	}
}
