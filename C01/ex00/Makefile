# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 12:13:04 by pmeising          #+#    #+#              #
#    Updated: 2023/01/24 18:52:08 by pmeising         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= BraiiiiiiinnnzzzZ

C++			:= c++

CFLAGS		:= -Werror -Wextra -Wall -g -std=c++98

RM			:= rm

SRCS		:=	./main.cpp ./newZombie.cpp ./Zombie.cpp ./randomChump.cpp \

all:		$(NAME)

.PHONY:		all clean fclean re

$(NAME):
			${C++} ${CFLAGS} -o ${NAME} ${SRCS}

re:			fclean all

fclean:
			$(RM) $(NAME)
