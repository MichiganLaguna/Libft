SRC=$(patsubst %.c,%.o,$(wildcard ft_*.c))

MANF=$(filter-out ft_%_bonus.o, ${SRC})

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
	
clean:
	${RM} ${SRC}


fclean: clean
	${RM} ${NAME}


bonus: ${SRC}
	ar -rcs ${NAME} ${SRC}

re: fclean all

.PHONY: clean fclean re all
