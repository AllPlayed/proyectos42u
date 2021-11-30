/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:12:18 by ullorent          #+#    #+#             */
/*   Updated: 2021/11/30 18:11:18 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

int	main(int argc, char **argv)
{
	int	pid_server;
	int	ret;

	if (argc == 3)
	{
		pid_server = ft_atoi(argv[1]);
		ret = -1;
		if (1)
		{
			kill(pid_server, SIGUSR1);
			kill(pid_server, SIGUSR2);
			ft_printf("Test\n");
		}
	}
	else
		ft_printf("Use the command like this: ./client [PID] [String]\n");
	return (0);
}
