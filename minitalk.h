/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverdood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:22:36 by tverdood          #+#    #+#             */
/*   Updated: 2022/07/07 17:23:32 by tverdood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# define MSG_MAX 10000000

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <stdio.h>
# include <stdbool.h>
# include <stdint.h>

/*utils*/
size_t	ft_strlen(const char *s);
void	ft_putstr(const char *s);
void	ft_putnbr(int n);
int		ft_atoi(const char *s);

#endif
