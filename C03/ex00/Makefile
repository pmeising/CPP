NAME		:= ClapTrap

C++			:= c++

CFLAGS		:= -Werror -Wall -g -std=c++98

RM			:= rm

SRCS		:=	./main.cpp ClapTrap.cpp \

OBJS		:= ${SRCS:.cpp=.o}

all:		$(NAME)

.PHONY:		all clean fclean re

$(NAME):	${OBJS}
			${C++} ${CFLAGS} -o ${NAME} ${SRCS}

re:			fclean all

clean:
			$(RM) ${OBJS}

fclean:		clean
			$(RM) ${NAME}
