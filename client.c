/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverdood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:22:11 by tverdood          #+#    #+#             */
/*   Updated: 2022/07/07 17:22:13 by tverdood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk.h"

static void	send_char(int pid, char c)
{
	char	n;

	n = 1 << 6;
	while (n)
	{
		if (n & c)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		n >>= 1;
		usleep(50);
	}
}

int	main(int ac, char **av)
{
	char	*s;
	int		pid;

	if (ac == 3)
	{
		s = av[2];
		pid = ft_atoi(av[1]);
		while (*s)
		{
			send_char(pid, *s);
			s++;
		}
		usleep(100000);
		send_char(pid, '\0');
	}
	return (0);
}
