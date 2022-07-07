/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverdood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:22:44 by tverdood          #+#    #+#             */
/*   Updated: 2022/07/07 17:22:45 by tverdood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk.h"

static void	bit_to_char(bool bit)
{
	static char	c;
	static int	count;
	static int	i;
	static char	msg[MSG_MAX];

	c += bit;
	count++;
	if (count == 7)
	{
		msg[i] = c;
		i = (i < MSG_MAX - 1) * (i + 1);
		if (c == '\0')
		{
			ft_putstr(msg);
			ft_putstr("\n");
			i = 0;
		}
		c = 0;
		count = 0;
	}
	c <<= 1;
}

static void	handle_signal(int signal)
{
	if (signal == SIGUSR1)
		bit_to_char(1);
	if (signal == SIGUSR2)
		bit_to_char(0);
}

int	main(void)
{
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	ft_putstr("pid : ");
	ft_putnbr(getpid());
	ft_putstr("\n");
	while (true)
		pause();
	return (0);
}
