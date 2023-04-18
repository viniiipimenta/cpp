NAME = PhoneBook


SRCS = Contact.cpp Main.cpp PhoneBook.cpp


CPP		= c++


RM		= rm -f


CFLAGS = -std=c++98 -Wall -Wextra -Werror


$(NAME): ${OBJS}
		${CPP} ${CFLAGS} $(SRCS) -o $(NAME)


all:	${NAME}


clean:
		${RM} ${OBJS}


fclean:	clean
		${RM} ${NAME}


re:		fclean all


.PHONY: all clean fclean re
