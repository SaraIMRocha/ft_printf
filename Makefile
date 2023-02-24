# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samarque <samarque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 01:32:05 by sara              #+#    #+#              #
#    Updated: 2023/02/24 16:29:08 by samarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS			= ft_ishexa.c ft_printf.c ft_putchar.c ft_putnbr.c \
					ft_putptr.c ft_putstr.c ft_putvar.c \

OBJS			= $(SRCS:.c=.o)

CC							= gcc
RM							= /bin/rm -f
CFLAGS			= -Wall -Wextra -Werror

$(NAME):		$(OBJS)
									ar rcs $(NAME) $(OBJS)
									
all:			$(NAME)

clean:
						$(RM) $(OBJS)

fclean:			clean
								$(RM) $(NAME)

re:						fclean all $(NAME)

.PHONY:			all clean fclean re