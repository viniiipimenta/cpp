NAME = Complain


SRCS =  main.cpp Harl.cpp


OBJS = ${SRCS:.cpp=.o}


CC = c++


RM = rm -f


CPPFLAGS = -std=c++98 -Wall -Wextra -Werror


$(NAME): ${OBJS}
	$(CC) ${CPPFLAGS} $(OBJS) -o $(NAME)


all: ${NAME}


clean:
	${RM} ${OBJS}


fclean: clean
	${RM} ${NAME}

re: fclean all


.PHONY: all clean fclean re
