SRCS = main.c function.c tools.c

OBJS = ${SRCS:.c=.o}

CC = gcc

FLAGS = -Wextra -Wall -Werror

NAME = do-op

RM = rm -f

all : 		${NAME}

${NAME}: 	${OBJS}
			${CC} ${FLAGS} ${OBJS} -o ${NAME}

.c.o:
			${CC} ${FLAGS} -c $< -o $@

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all

.PHONY : all clean fclean re
