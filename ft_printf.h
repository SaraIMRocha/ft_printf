/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 01:32:08 by sara              #+#    #+#             */
/*   Updated: 2023/01/04 01:55:24 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <stddef.h>
# include <limits.h>

int			ft_printf(const char *str, ...);
void		ft_putvar(va_list arg, const char str, int *len);
void		ft_putchar(char c, int *len);
void		ft_putstr(char *s, int *len);
void		ft_putnbr(int nbr, int *len);
void		ft_putunsnbr(unsigned int nbr, int *len);
void		ft_putp(const void *p, int *len);
void		ft_ishexa(unsigned int nbr, char hex, int *len);

#endif