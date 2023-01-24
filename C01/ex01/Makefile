# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 12:13:04 by pmeising          #+#    #+#              #
#    Updated: 2023/01/24 19:11:30 by pmeising         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= Moar_Brainz

C++			:= c++

CFLAGS		:= -Werror -Wextra -Wall -g -std=c++98

RM			:= rm

SRCS		:=	./main.cpp ./Zombie.cpp ./zombieHorde.cpp \

all:		$(NAME)

.PHONY:		all clean fclean re

$(NAME):
			${C++} ${CFLAGS} -o ${NAME} ${SRCS}

re:			fclean all

fclean:
			$(RM) $(NAME)
