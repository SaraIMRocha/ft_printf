/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libftprintf.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 01:32:08 by sara              #+#    #+#             */
/*   Updated: 2022/12/16 14:48:55 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_LIBFTPRINTF_H
# define FT_LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <stddef.h>
# include <limits.h>

void	ft_putchar(char c, int *len);
void	ft_putstr(char *s, int *len);
void	ft_ishexa(unsigned int nbr, char hex, int *len);
void	ft_ishexap(const void *p, int *len);
void    ft_putp(const void *p, int *len);
int		ft_printf(const char *, ...);
void	ft_putvar(va_list arg, const char str, int *len)
void	ft_putnbr(int nbr, int *len);
void	ft_putunsnbr(unsigned int nbr, int *len);

#endif