/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libftprintf.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 01:32:08 by sara              #+#    #+#             */
/*   Updated: 2022/12/04 19:33:29 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_LIBFTPRINTF.H
# def	FT_LIBFTPRINTF.H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putchar(char c, int *len);
void	ft_putstr(char *s);
void	ft_ishexa(unsigned int nbr, char hex, int *len);
void	ft_ishexap(size_t nbr, char hex, int *len);
void	ft_putptr(size_t ptr, int *len);
int		ft_printf(const char *, ...);


#endif