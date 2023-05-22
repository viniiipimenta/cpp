NAME = Brain


SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp


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