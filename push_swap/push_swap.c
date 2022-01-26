/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:23:02 by ullorent          #+#    #+#             */
/*   Updated: 2022/01/26 13:54:22 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_numcheck(char **argv)
{
	int	c;
	int	i;

	c = 0;
	i = 1;
	while (argv[i] != NULL)
	{
		c = 0;
		while (argv[i][c])
		{
			if ((int)((argv[i][c] == '-' && (argv[i][c + 1] >= '0' || argv[i][c + 1] <= '9'))))
				return (0);
			if ((int)((argv[i][c] >= ' ' && argv[i][c] <= '/') ||
			(argv[i][c] >= ':' && argv[i][c] <= '~')))
			{
				write(1, "Error\n", 6);
				write(1, "That character its not an int number.\n", 38);
				exit (1);
			}
			c++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "Error\n", 6);
		exit (1);
	}
	ft_numcheck((char **)argv);
	write(1, "OK\n", 3);
	return (0);
}
