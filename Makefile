SRC = ft_printf.c ft_print_str.c ft_print_n.c ft_print_char.c
OBJS = ${SRC:.c=.o}
LIBC = ar -rcs
CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f
NAME = libftprintf.a

%.o: %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}

all: ${NAME}

bonus: $(NAME)

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: clean fclean all bonus re
