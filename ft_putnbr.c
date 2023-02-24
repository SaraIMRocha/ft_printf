/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarque <samarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:24:49 by sara              #+#    #+#             */
/*   Updated: 2023/02/24 16:23:49 by samarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	if (nbr == INT_MIN)
		ft_putstr("-2147483648", len);
	else if (nbr < 0)
	{
		ft_putchar('-', len);
		nbr *= -1;
		ft_putnbr(nbr, len);
	}
	else if (nbr > 9)
	{
		ft_putnbr((nbr / 10), len);
		ft_putnbr((nbr % 10), len);
	}
	else
		ft_putchar((nbr + 48), len);
}

void	ft_putunsnbr(unsigned int nbr, int *len)
{
	if (nbr > 9)
	{
		ft_putunsnbr(nbr / 10, len);
		ft_putunsnbr(nbr % 10, len);
	}
	else
		ft_putchar(nbr + 48, len);
}
