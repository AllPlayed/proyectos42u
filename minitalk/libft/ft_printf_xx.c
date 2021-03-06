/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:04:24 by ullorent          #+#    #+#             */
/*   Updated: 2021/11/30 13:58:28 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hexa_x(unsigned long int nbr, int boo, int *num)
{
	char	*base;

	if (boo == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr / 16 > 0)
	{
		ft_hexa_x(nbr / 16, boo, num);
		ft_putchar_c(base[nbr % 16], num);
	}
	else
		ft_putchar_c(base[nbr], num);
}
