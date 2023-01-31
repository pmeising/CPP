# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 12:13:04 by pmeising          #+#    #+#              #
#    Updated: 2023/01/30 18:32:55 by pmeising         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= Moar_Brainz

C++			:= c++

CFLAGS		:= -Werror -Wextra -Wall -g -std=c++98

RM			:= rm

SRCS		:=	./Zombie.cpp ./main.cpp ./ZombieHorde.cpp \

OBJS		:= ${SRCS:.cpp=.o}

all:		$(NAME)

.PHONY:		all clean fclean re

$(NAME):	${OBJS}
			${C++} ${CFLAGS} ${SRCS} -o ${NAME}

re:			fclean all

clean:
			$(RM) ${OBJS}

fclean:		clean
			$(RM) ${NAME}