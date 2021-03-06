/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_csp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:13:59 by ullorent          #+#    #+#             */
/*   Updated: 2021/09/30 11:35:53 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_putchar_c(char c, int *num)
{
	write(1, &c, 1);
	(*num)++;
}

void	ft_putstr_s(char *str, int *num)
{
	if (!str)
		*num += write(1, "(null)", 6);
	else
		*num += write(1, str, ft_strlen(str));
}
