SRC=$(wildcard ft_*.c)

OBJ=$(patsubst %.c,%.o,${SRC})

MANF=$(filter-out ft_lst%.o, ${OBJ})

BONF=$(filter ft_lst%.o, ${OBJ})

HEADERS=${wildcard *.h}

NAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${MANF} ${HEADERS}
	ar -rcs ${NAME} ${MANF}
	
bonus: ${BONF} ${HEADERS}
	ar -rcs ${NAME} ${BONF}

clean:
	${RM} ${OBJ}


fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean fclean re all bonus
