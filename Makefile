# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sara <sara@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 01:32:05 by sara              #+#    #+#              #
#    Updated: 2022/12/04 19:40:30 by sara             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_ishexa.c ft_ishexap.c ft_printf.c ft_putchar.c ft_putnbr.c \
					ft_putptr.c ft_putstr.c ft_putvar.c \

OBJS			= $(SRCS:.c=.o)

CC							= gcc
RM							= /bin/rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			=libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
									ar rcs $(NAME) $(OBJS)