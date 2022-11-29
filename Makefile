SRC=$(wildcard ft_*.c)

OBJ=$(patsubst %.c,%.o,${SRC})

MANF=$(filter-out ft_lst%.o, ${OBJ})

BONF=$(filter ft_lst%.o, ${OBJ})

HEADER=.

NAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

.c.o:
	${CC} ${CFLAGS} -I${HEADER} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${MANF}
	ar -rcs ${NAME} ${MANF}
	
bonus: ${BONF}
	ar -rcs ${NAME} ${BONF}

clean:
	${RM} ${OBJ}


fclean: clean
	${RM} ${NAME}

so:
	${CC} -nostartfiles -fPIC ${CFLAGS} ${SRC}
	gcc -nostartfiles -shared -o libft.so ${OBJ}


re: fclean all

.PHONY: clean fclean re all bonus
