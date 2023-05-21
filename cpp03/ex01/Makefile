NAME = ScavTrap


SRCS = ClapTrap.cpp main.cpp ScavTrap.cpp


OBJS = ${SRCS:.cpp=.o}


CCPP = c++


RM = rm -f


CPPFLAGS = -std=c++98 -Wall -Wextra -Werror


$(NAME): ${OBJS}
	$(CCPP) ${CPPFLAGS} $(OBJS) -o $(NAME)


all: ${NAME}


clean:
	${RM} ${OBJS}


fclean: clean
	${RM} ${NAME}

re: fclean all


.PHONY: all clean fclean re