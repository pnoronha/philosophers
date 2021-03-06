# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 21:10:58 by pnoronha          #+#    #+#              #
#    Updated: 2022/06/01 22:23:22 by pnoronha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	philo

SRC_DIR	=	sources

SRCS	=	main.c				\
			utils.c				\
			args_treatment.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -fsanitize=address

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(^) -o $(@)
	@echo "\033[7;1;3;32m>> Philosophers Compiled <<\n\033[m"

%.o:	%.c
	@$(CC) $(CFLAGS) -c $(^) -o $(@)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
