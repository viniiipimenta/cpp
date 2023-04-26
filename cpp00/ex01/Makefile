NAME = PhoneBook


SRCS = Main.cpp Contact.cpp PhoneBook.cpp


OBJS = ${SRCS:.cpp=.o}


CC = c++


RM = rm -f


CFLAGS = -std=c++98 -Wall -Wextra -Werror


.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}


$(NAME): ${OBJS}
	$(CC) $(OBJS) -o $(NAME)


all: ${NAME}


clean:
	${RM} ${OBJS}


fclean: clean
	${RM} ${NAME}


re: fclean all


.PHONY: all clean fclean re