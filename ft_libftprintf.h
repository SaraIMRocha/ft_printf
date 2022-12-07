/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libftprintf.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 01:32:08 by sara              #+#    #+#             */
/*   Updated: 2022/12/07 19:30:55 by sara             ###   ########.fr       */
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
void	ft_putstr(char *s);
void	ft_ishexa(unsigned int nbr, char hex, int *len);
void	ft_ishexap(size_t nbr, char hex, int *len);
void	ft_putptr(size_t ptr, int *len);
int		ft_printf(const char *, ...);
int		ft_putvar(va_list arg, const char *s, int i, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_putunsnbr(unsigned int nbr, int *len);

#endif