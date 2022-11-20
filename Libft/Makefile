SRC=$(patsubst %.c,%.o,$(wildcard ft_*.c))

HEADER=.

ARNAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

.c.o:
	${CC} ${CFLAGS} -I${HEADER} -c $< -o ${<:.c=.o}

all: ${ARNAME}

${ARNAME}: ${SRC}
	ar -rcs ${ARNAME} ${SRC}
	
bonus:
	echo "suck mah dick"

	
clean:
	${RM} ${SRC}

fclean: clean
	${RM} ${ARNAME}

re: fclean all

.PHONY: clean fclean re all
