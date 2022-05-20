# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 22:20:54 by pnoronha          #+#    #+#              #
#    Updated: 2022/05/20 13:05:23 by pnoronha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	philo

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

SRC			=	main.c	\
				parse.c	\
				utils.c

OBJ			:=	$(SRC:%.c=%.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		@$(CC) $(CFLAGS) $(^) -o $(@)

%.o: %.c
		@$(CC) $(CFLAGS) -c $(^) -o $(@)

norm:
		@norminette -R CheckForbiddenSourceHeader $(SRC)
		@norminette -R CheckDefine

test:
		valgrind --tool=memcheck --leak-check=yes --show-reachable=yes \
		--num-callers=20 --track-fds=yes ./$(NAME)

clean:
		@$(RM) $(OBJ)

fclean:		clean
		@$(RM) $(NAME)

re:			fclean all

.PHONY : 	all clean fclean re norm test
