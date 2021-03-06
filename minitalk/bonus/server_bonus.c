/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:03:43 by ullorent          #+#    #+#             */
/*   Updated: 2021/12/14 14:04:00 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include "../libft/libft.h"

void	signhandler(int signum)
{
	static char	c;
	static int	bits;

	if (!c)
		c = 0xFF;
	if (!bits)
		bits = 0;
	if (signum == SIGUSR1)
		c ^= 0x80 >> bits;
	if (signum == SIGUSR2)
		c |= 0x80 >> bits;
	bits++;
	if (bits == 8)
	{
		ft_printf("%c", c);
		bits = 0;
		c = 0xFF;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;
	int					pid;

	(void)argv;
	pid = getpid();
	if (argc != 1)
	{
		ft_printf("Please, don't specify any arguments: ./server\n");
		exit (0);
	}
	ft_printf("PID: %d\n", pid);
	sa.sa_handler = signhandler;
	sa.sa_flags = 0;
	signal(SIGUSR1, signhandler);
	signal(SIGUSR2, signhandler);
	while (1)
		pause ();
	return (0);
}
