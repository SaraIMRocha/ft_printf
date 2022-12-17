/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:25:11 by sara              #+#    #+#             */
/*   Updated: 2022/12/16 14:40:12 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ascii 6 =  ACK - acknowledge

#include "ft_libftprintf.h"

void	ft_putstr(char *s, int *len)
{
	size_t	i;

	if (!s)
	{
		write(1, "(null)", 6);
		*len += 6;
	}
	else
	{
		i = 0;
		while (s[i])
			ft_putchar(s[i++], len);
	}
}
