NAME	= libftprintf.a
SRC		= ft_flags_utils.c \
		  ft_init_struct_utils.c \
		  ft_parse_and_print.c \
		  ft_print_diu_cs.c \
		  ft_print_xp_prcnt.c \
		  ft_print.c \
		  ft_printf.c \
		  ft_putchar_fd.c \
		  ft_putchar_fd_tap.c \
		  ft_strlen.c \
		  ft_itoa.c \
		  ft_itoa_hex.c \
		  ft_putstr_fd_len.c \
		  ft_putstr_fd.c \
		  ft_dot_utils.c \
		  ft_process_s.c \
		  ft_process_diu_utils.c \
		  ft_process_xp_utils.c \
		  ft_types_utils.c

OBJ		= ${SRC:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

all:  ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY:	all clean fclean re
