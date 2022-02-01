/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:20:59 by ullorent          #+#    #+#             */
/*   Updated: 2022/02/01 17:08:43 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct Node
{
	int				data;
	void			*new_node;
	struct Node		*next;
}			t_node;

/* -- main functions -- */
int	ft_numcheck(char **argv);

/* -- errors checker -- */

/* -- commands functions -- */

#endif