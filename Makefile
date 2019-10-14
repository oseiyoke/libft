# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oiyoke <oiyoke@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 09:18:11 by oiyoke            #+#    #+#              #
#    Updated: 2019/10/04 19:43:22 by oiyoke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft*.c
OBJS = $(SRCS:.c=.o)
		
$(NAME): libft.h
	@gcc -Wall -Wextra -Werror -I ./include -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

all: $(NAME)


clean:
	@/bin/rm -rf $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
