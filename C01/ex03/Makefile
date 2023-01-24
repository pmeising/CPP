# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 12:13:04 by pmeising          #+#    #+#              #
#    Updated: 2023/01/24 21:39:24 by pmeising         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= Unnecessary_violence

C++			:= c++

CFLAGS		:= -Werror -Wextra -Wall -g -std=c++98

RM			:= rm

SRCS		:=	./main.cpp \

all:		$(NAME)

.PHONY:		all clean fclean re

$(NAME):
			${C++} ${CFLAGS} -o ${NAME} ${SRCS}

re:			fclean all

fclean:
			$(RM) $(NAME)
