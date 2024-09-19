NAME = zombie_horde

CC = g++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} -o ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re