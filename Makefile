NAME = libftprintf.a

SRCS =		srcs/ft_printf.c\
			srcs/ft_is_format.c\
			srcs/ft_print_format.c\
			srcs/ft_print_min_hexa.c\
			srcs/ft_print_maj_hexa.c\
			srcs/ft_print_nbr.c\
			srcs/ft_print_unsigned.c\
			srcs/ft_putchar.c\
			srcs/ft_putstr.c\
			srcs/ft_print_pointer.c

OBJS =		$(SRCS:.c=.o)

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

.c.o:	${SRCS}
		${CC}	${CFLAGS}	-c -o $@ $<

${NAME}:	${OBJS}
	ar	r	${NAME}	${OBJS}

all:	${NAME}

clean:
		${RM}	${OBJS}

fclean:		clean
	${RM}	${NAME}

re:		fclean	all

.PHONY: all clean fclean re
